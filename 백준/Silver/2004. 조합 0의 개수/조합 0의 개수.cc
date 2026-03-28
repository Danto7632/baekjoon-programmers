#include <iostream>

using namespace std;

int main() {
    long long int arr[3][2]={0,};
    long long int n,m,a,two,five;
    cin >> n >> m;
    two=2;
    five=5;
    while (1){
        if (n>=two){
            arr[0][0]+=n/two;
            two*=2;
        }
        if (n>=five){
            arr[0][1]+=n/five;
            five*=5;
        }
        if (n<two&&n<five) {
            break;
        }
    }
    two=2;
    five=5;
    while (1){
        if (m>=two){
            arr[1][0]+=m/two;
            two*=2;
        }
        if (m>=five){
            arr[1][1]+=m/five;
            five*=5;
        }
        if (m<two&&m<five) {
            break;
        }
    }
    two=2;
    five=5;
    while (1){
        if (n-m>=two){
            arr[2][0]+=(n-m)/two;
            two*=2;
        }
        if (n-m>=five){
            arr[2][1]+=(n-m)/five;
            five*=5;
        }
        if (n-m<two&&n-m<five) {
            break;
        }
    }
    cout << (arr[0][0]-arr[1][0]-arr[2][0]>arr[0][1]-arr[1][1]-arr[2][1]?arr[0][1]-arr[1][1]-arr[2][1]:arr[0][0]-arr[1][0]-arr[2][0]);
}