#include <iostream>

using namespace std;

int main() {
    int n,s,c,a,r,count=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> s >> c >> a >> r;
        if (s>=1000){
            count++;
            continue;
        }
        else if (c>=1600){
            count++;
            continue;
        }
        else if (a>=1500){
            count++;
            continue;
        }
        else if (r<=30&&r!=-1){
            count++;
            continue;
        }
    }
    cout << count;
}