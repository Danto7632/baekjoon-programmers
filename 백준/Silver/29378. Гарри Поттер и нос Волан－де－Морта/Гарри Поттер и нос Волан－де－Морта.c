#include <stdio.h>

int main() {
    int n,m,count=0;
    char nm[1000][1000];
    scanf("%d %d", &n, &m);
    for (int i=0;i<n;i++){
        scanf("%s", nm[i]);
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m-1;j++){
            if (nm[i][j]=='.'&&nm[i][j+1]=='.'){
                count++;
            }
        }
    }
    for (int j=0;j<m;j++){
        for (int i=0;i<n-1;i++){
            if (nm[i][j]=='.'&&nm[i+1][j]=='.'){
                count++;
            }
        }
    }
    printf("%d", count);
}