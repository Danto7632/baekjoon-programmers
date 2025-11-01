#include <iostream>
#include <vector>

using namespace std;

int main() {
    int sum=0;
    char arr[8][8];
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            cin >> arr[i][j];
            if (arr[i][j]=='P'){
                sum+=1;
            }
            else if (arr[i][j]=='p'){
                sum-=1;
            }
            else if (arr[i][j]=='N'){
                sum+=3;
            }
            else if (arr[i][j]=='n'){
                sum-=3;
            }
            else if (arr[i][j]=='B'){
                sum+=3;
            }
            else if (arr[i][j]=='b'){
                sum-=3;
            }
            else if (arr[i][j]=='R'){
                sum+=5;
            }
            else if (arr[i][j]=='r'){
                sum-=5;
            }
            else if (arr[i][j]=='Q'){
                sum+=9;
            }
            else if (arr[i][j]=='q'){
                sum-=9;
            }
        }
    }
    cout << sum;
}