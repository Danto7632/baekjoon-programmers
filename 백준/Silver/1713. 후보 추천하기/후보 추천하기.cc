#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N,count,num,a,min,imin,tmin,use,Ns=0;
    vector<int> rc(101,0);
    cin >> N >> count;
    vector<vector<int>> pic(N,vector<int>(2,0));
    for (int i=0;i<count;i++){
        min=1001;
        tmin=1001;
        use=0;
        cin >> a;
        rc[a]++;
        
        for (int j=0;j<N;j++){
            if (rc[pic[j][0]]<min){
                min=rc[pic[j][0]];
                imin=j;
                tmin=pic[j][1];
            }
            else if (rc[pic[j][0]]==min&&pic[j][1]<tmin){
                tmin=pic[j][1];
                imin=j;
            }
            if (pic[j][0]==a){
                use=1;
            }
        }

        if (use==0){
            rc[pic[imin][0]]=0;
            pic[imin][0]=a;
            pic[imin][1]=i;
        }
        
    }
    sort(pic.begin(),pic.end());
    for (int i=0;i<N;i++){
        if (pic[i][0]!=0){
            cout << pic[i][0] << " ";
        }
    }
}