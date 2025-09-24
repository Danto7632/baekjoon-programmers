#include <iostream>
#include <string>

using namespace std;

int main() {
    int T,start,end;
    string str;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> str >> start >> end;
        str.erase(str.begin()+start,str.begin()+end);
        cout << str << "\n";
    }
}