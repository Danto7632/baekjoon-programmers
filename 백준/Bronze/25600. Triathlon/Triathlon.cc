#include <iostream>

using namespace std;

int main() {
    int n,a,d,g,max=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a >> d >> g;
        if (a==d+g){
            max=(max>a*(d+g)*2?max:a*(d+g)*2);
        }
        else {
            max=(max>a*(d+g)?max:a*(d+g));
        }
    }
    cout << max;
}