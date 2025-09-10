#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr.begin(),arr.end());

    cout << (pow(arr[0],2)+pow(arr[1],2)==pow(arr[2],2)?1:arr[0]==arr[1]&&arr[1]==arr[2]?2:0);
}