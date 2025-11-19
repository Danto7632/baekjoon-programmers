#include <iostream>

using namespace std;

int main() {
    int n,sum=0;
    string str;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> str;
        if (str[0]=='P'){
            sum+=1500;
        }
        else if (str[0]=='M'){
            sum+=6000;
        }
        else if (str[0]=='S'){
            sum+=15500;
        }
        else if (str[0]=='C'){
            sum+=40000;
        }
        else if (str[0]=='T'){
            sum+=75000;
        }
        else if (str[0]=='H'){
            sum+=125000;
        }
    }
    cout << sum;
}