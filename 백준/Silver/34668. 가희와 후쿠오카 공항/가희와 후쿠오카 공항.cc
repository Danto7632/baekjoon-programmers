#include <iostream>

using namespace std;

int main() {
    int n,a,time;
    cin >> n;
    for (int i=0;i<n;i++){
        time=366;
        cin >> a;
        time+=(a/50?a/50*12:0);
        cout << (time<600?0:time/600) << time%600/60 << ":" << (time%60<10?0:time%60/10) << time%10 << "\n";
    }
    
}