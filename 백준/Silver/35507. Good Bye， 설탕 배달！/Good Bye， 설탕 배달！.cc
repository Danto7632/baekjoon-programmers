#include <iostream>

using namespace std;

int main() {
    long long int T,N,a,b,c,p,A,B,C,point,bp,flag;
    cin >> T;
    for (int i=0;i<T;i++){
        A=0;
        B=0;
        C=0;
        bp=0;
        point=0;
        flag=0;
        cin >> N;
        for (int j=0;j<N;j++){
            cin >> a >> b >> c >> p;
            if (flag){
                continue;
            }
            point+=p-bp;
            bp=p;
            if (A<a&&point>=a-A){
                point-=a-A;
                A+=a-A;
            }
            if (B<b&&point>=b-B){
                point-=b-B;
                B+=b-B;
            }
            if (C<c&&point>=c-C){
                point-=c-C;
                C+=c-C;
            }
            if (A<a||B<b||C<c||point<=0){
                cout << "NO\n";
                flag=1;
            }
            if (j+1==N&&!flag){
                cout << "YES\n";
            }
            point--;
        }
    }
}