#include <iostream>

using namespace std;

int main() {
    int T,a,sum,min;
    cin >> T;
    for (int i=0;i<T;i++){
        sum=0;
        min=100;
        for (int j=0;j<7;j++){
            cin >> a;
            sum=a%2==0?sum+a:sum;
            min=a%2==0&&a<min?a:min;
        }
        cout << sum << " " << min << "\n";
    }
}