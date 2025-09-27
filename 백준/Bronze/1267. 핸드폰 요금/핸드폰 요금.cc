#include <iostream>

using namespace std;

int main() {
    int n,a,sumY=0,sumM=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        sumY=sumY+a/30*10+10;
        sumM=sumM+a/60*15+15;
    }
    if (sumY==sumM){
        cout << "Y M " << sumM;
    }
    else if (sumY>sumM){
        cout << "M " << sumM;
    }
    else {
        cout << "Y " << sumY;
    }
}