#include <iostream>
#include <vector>

using namespace std;

int main() {
    int C,R,K,x=0,y=0,cases=0,xmax,ymax,xmin=1,ymin=0;
    cin >> C >> R >> K;
    xmax=C-1;
    ymax=R-1;
    vector<vector<int>> arr(C,vector<int>(R,0));
    if (K<=C*R){
        for (int i=1;i<K;i++){
            arr[x][y]=i+1;
            if (cases==0){
                if (y==ymax){
                    cases++;
                    ymax--;
                    i--;
                    continue;
                }
                y++;
            }
            else if (cases==1){
                if (x==xmax){
                    cases++;
                    xmax--;
                    i--;
                    continue;
                }
                x++;
            }
            else if (cases==2){
                if (y==ymin){
                    cases++;
                    ymin++;
                    i--;
                    continue;
                }
                y--;
            }
            else if (cases==3){
                if (x==xmin){
                    cases=0;
                    xmin++;
                    i--;
                    continue;
                }
                x--;
            }
        }
        cout << x+1 << " " << y+1;
    }
    else {
        cout << 0;
    }
}