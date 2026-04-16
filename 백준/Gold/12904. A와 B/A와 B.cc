#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<char> S(str.begin(), str.end());
    cin >> str;
    vector<char> T(str.begin(), str.end());
    while (1){
        if (T.size()<S.size()){
            cout << 0;
            break;
        }
        else if (T==S){
            cout << 1;
            break;
        }
        if (T.back()=='A'){
            T.pop_back();
        }
        else {
            T.pop_back();
            reverse(T.begin(), T.end());
        }
    }
}