#include <iostream>

using namespace std;

int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    if (a[0]<a[1]&&a[1]<a[2]&&a[2]<a[3]){
        cout << "Fish Rising";
    }
    else if (a[0]>a[1]&&a[1]>a[2]&&a[2]>a[3]){
        cout << "Fish Diving";
    }
    else if (a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]){
        cout << "Fish At Constant Depth";
    }
    else {
        cout << "No Fish";
    }
}