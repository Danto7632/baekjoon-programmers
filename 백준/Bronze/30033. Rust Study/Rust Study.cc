#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,a,count=0;
    cin >> n;
    vector<int> arr(n);
    
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        cin >> a;
        a>=arr[i]?count++:0;
    }
    cout << count;
}