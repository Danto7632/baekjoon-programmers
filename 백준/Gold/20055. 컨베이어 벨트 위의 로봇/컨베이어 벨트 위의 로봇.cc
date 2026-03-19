#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N,K,A,count=0,zero=0;
    deque<int> dq;
    deque<int> robot;
    cin >> N >> K;
    for (int i=0;i<N*2;i++){
        cin >> A;
        dq.push_back(A);
        if (i<N){
            robot.push_front(0);
        }
    }
    while (1){
        A=dq[N*2-1];
        dq.pop_back();
        dq.push_front(A);
        robot.pop_back();
        robot.push_front(0);
        
        if (robot[N-1]==1){
            robot[N-1]=0;
        }
        
        for (int i=N-2;i>0;i--){
            if (robot[i]==1&&robot[i+1]==0&&dq[i+1]!=0){
                robot[i]=0;
                robot[i+1]=1;
                dq[i+1]--;
                if (dq[i+1]==0){
                    zero++;
                }
            }
        }
        if (robot[N-1]==1){
            robot[N-1]=0;
        }
        if (dq[0]!=0){
            robot[0]=1;
            dq[0]--;
            if (dq[0]==0){
                zero++;
            }
        }
        count++;
        if (zero>=K){
            break;
        }
    }
    cout << count;
}