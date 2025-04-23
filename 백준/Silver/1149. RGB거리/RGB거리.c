#include <stdio.h>

int main() {
    int n, arr[1000][3], min;
    scanf("%d", &n);
    scanf("%d %d %d", &arr[0][0], &arr[0][1], &arr[0][2]);
    for (int i=1;i<n;i++){
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
        for (int j=0;j<3;j++){
            arr[i][j]+=arr[i-1][(j+1)%3]>arr[i-1][(j+2)%3]?arr[i-1][(j+2)%3]:arr[i-1][(j+1)%3];
            if (j==0){
                min = arr[i][j];
            }
            else if (arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    printf("%d", min);
}