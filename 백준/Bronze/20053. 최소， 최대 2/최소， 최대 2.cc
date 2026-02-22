#include <iostream>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T,N,a,min,max;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> N;
        min=1000001;
        max=-1000001;
        for (int j=0;j<N;j++){
            cin >> a;
            min=a<min?a:min;
            max=a>max?a:max;
        }
        cout << min << " " << max << "\n";
    }
}