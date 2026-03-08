#include <iostream>
#include <vector>

using namespace std;

int main() {
    int flag;
    vector<char> answer;
    vector<char> op;
    vector<int> ops;
    string str;
    cin >> str;
    for (int i=0;i<str.length();i++){
        if (str[i]>=65){
            answer.push_back(str[i]);
        }
        else {
            if (str[i]=='('||str[i]==')'){
                flag=0;
            }
            else if (str[i]=='+'||str[i]=='-'){
                flag=1;
            }
            else {
                flag=2;
            }
            if (op.size()){
                while (str[i]!='('&&flag<=ops.back()&&op.back()!='('){
                    answer.push_back(op.back());
                    op.pop_back();
                    ops.pop_back();
                }
            }
            op.push_back(str[i]);
            ops.push_back(flag);
            if (op.back()==')'){
                op.pop_back();
                op.pop_back();
                ops.pop_back();
                ops.pop_back();
            }
        }
        if (i==str.length()-1){
            while (!op.empty()){
                answer.push_back(op.back());
                op.pop_back();
                ops.pop_back();
            }
        }
    }
    
    for (int i=0;i<answer.size();i++){
        cout << answer[i];
    }
}