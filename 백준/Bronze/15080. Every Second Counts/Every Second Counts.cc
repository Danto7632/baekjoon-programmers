#include <iostream>

using namespace std;

int main() {
    int sum1,sum2,a,b,c;
    char trash;
    cin >> a >> trash >> b >> trash >> c;
    sum1=a*3600+b*60+c;
    cin >> a >> trash >> b >> trash >> c;
    sum2=a*3600+b*60+c;
    cout << (sum1<sum2?sum2-sum1:86400-sum1+sum2);
}