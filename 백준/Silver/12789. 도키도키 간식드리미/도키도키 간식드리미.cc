#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,a,count=0;
    vector<int> stack;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> a;
        if (count+1==a){
            count++;
        }
        else if (stack.size()>0&&count+1==stack.back()){
            count++;
            stack.pop_back();
        }
        else if (stack.size()==0||stack.back()>a){
            stack.push_back(a);
        }
        while (stack.size()){
            if (count+1==stack.back()){
                count++;
                stack.pop_back();
            }
            else {
                break;
            }
        }
    }
    cout << (count==N?"Nice":"Sad");
    
}