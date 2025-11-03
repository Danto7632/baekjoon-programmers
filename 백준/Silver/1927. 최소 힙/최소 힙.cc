#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,a;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> arr;
    for (int i=0;i<n;i++){
        cin >> a;
        if (a==0&&arr.empty()==0){
            cout << arr.top() << "\n";
            arr.pop();
        }
        else if (a==0){
            cout << 0 << "\n";
        }
        else {
            arr.push(a);
        }
    }
}