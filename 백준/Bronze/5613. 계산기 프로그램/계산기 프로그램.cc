#include <iostream>

using namespace std;

int main() {
    int a,answer;
    char c;
    cin >> answer;
    while (1){
        cin >> c;
        if (c=='='){
            break;
        }
        
        cin >> a;
        if (c=='+'){
            answer+=a;
        }
        else if (c=='-'){
            answer-=a;
        }
        else if (c=='*'){
            answer*=a;
        }
        else if (c=='/'){
            answer/=a;
        }
    }
    cout << answer;
}