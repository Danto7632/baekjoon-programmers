#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    string name;
    int k;
    int e;
    int m;
};

int custom(student x, student y);

int main() {
    int N;
    cin >> N;
    vector<student> arr(N);
    for (int i=0;i<N;i++){
        cin >> arr[i].name >> arr[i].k >> arr[i].e >> arr[i].m;
    }
    sort(arr.begin(),arr.end(),custom);
    for (int i=0;i<N;i++){
        cout << arr[i].name << "\n";
    }
}

int custom(student x, student y){
    if (x.k>y.k){
        return 1;
    }
    else if (x.k==y.k){
        if (x.e<y.e){
            return 1;
        }
        else if (x.e==y.e){
            if (x.m>y.m){
                return 1;
            }
            else if (x.m==y.m){
                return x.name<y.name;
            }
        }
    }
    return 0;
}