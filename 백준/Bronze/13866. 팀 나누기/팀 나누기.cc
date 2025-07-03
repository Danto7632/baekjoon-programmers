#include <iostream>

using namespace std;

int main() {
    int n,other,min=10001,max=-1,sum=0;
    for (int i=0;i<4;i++){
        cin >> n;
        sum+=n;
        if (n < min){
            min = n;
        }
        if (n > max){
            max = n;
        }
    }
    cout << ((sum-max-min)>(max+min)?(sum-max-min-max-min):(max+min-sum+max+min));
    
}