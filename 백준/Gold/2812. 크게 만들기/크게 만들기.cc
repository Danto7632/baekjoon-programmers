#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N,K,count=0;
    string str;
    deque<int> dq;
    cin >> N >> K >> str;
    for (int i=0;i<N;i++){
        if (dq.empty()){
            dq.push_back(str[i]-48);
        }
        else if (count!=K&&dq.back()<str[i]-48){
            i--;
            count++;
            dq.pop_back();
        }
        else {
            dq.push_back(str[i]-48);
        }
    }
    for (int i=0;i<N-K;i++){
        cout << dq[i];
    }
}