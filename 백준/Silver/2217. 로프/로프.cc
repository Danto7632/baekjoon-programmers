#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,max;
    cin >> n;
    vector<int> rope(n);
    for (int i=0;i<n;i++){
        cin >> rope[i];
    }
    sort(rope.rbegin(),rope.rend());
    max = rope[0];
    for (int i=1;i<n;i++){
        max=max>rope[i]*(i+1)?max:rope[i]*(i+1);
    }
    cout << max;
}