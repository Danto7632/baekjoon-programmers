#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str,blank;
    
    while(cin>>n){
        str="-";
        for (int i=0;i<n;i++){
            blank="";
            for (int j=0;j<str.length();j++){
                blank+=" ";
            }
            str=str+blank+str;
        }
        cout<<str<<"\n";
    }
}