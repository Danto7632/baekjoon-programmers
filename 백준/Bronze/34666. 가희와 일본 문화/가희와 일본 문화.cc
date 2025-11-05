#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,lv,a,b,c;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> lv >> a >> b >> c;
        cout << (((lv==1||lv==2)&&c>=50)&&(((a*3<(lv==1?100:90))+(b*3<(lv==1?100:90))+(c*3<(lv==1?100:90)))>1||((a<22)+(b<22)+(c<22))>0)?"YES":"NO") << "\n";
    }
}