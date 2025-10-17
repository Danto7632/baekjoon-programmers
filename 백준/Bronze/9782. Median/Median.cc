#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n,arr[100],count=0;
    while (1){
        cin >> n;
        if (n==0){
            break;
        }
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << fixed << setprecision(1) << showpoint;
        cout << "Case "<< ++count << ": " << (n%2==0?(arr[n/2]+arr[n/2-1])/2.0:(double)arr[n/2]) << "\n";
    }
}