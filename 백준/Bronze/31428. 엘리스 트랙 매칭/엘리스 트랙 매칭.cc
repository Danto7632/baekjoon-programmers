#include <iostream>

using namespace std;

int main() {
    int n,count=0;
    char my,arr[10001];
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> my;
    for (int i=0;i<n;i++){
        if (my==arr[i]){
            count++;
        }
    }
    cout << count;
}