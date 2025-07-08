#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,e,time=0;
    cin >> a >> b >> c >> d >> e;
    while (a!=b){
        if (a<0){
            time+=c;
            a++;
        }
        else if (a==0){
            time+=d+e;
            a++;
        }
        else {
            time+=e;
            a++;
        }
    }
    cout << time;
}