#include <iostream>

using namespace std;

int main() {
    int n,flag;
    string str;
    cin >> n;
    cin.ignore();
    for (int i=0;i<n;i++){
        flag=0;
        getline(cin,str);
        cout << "god";
        for (int j=0;j<str.length();j++){
            if (str[j]==' '){
                flag=1;
            }
            else if (flag==1){
                cout << str[j];
            }
        }
        cout << "\n";
    }
}