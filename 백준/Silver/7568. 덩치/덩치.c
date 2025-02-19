#include <stdio.h>

int main() {
    int n, body[50][2], count=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d %d", &body[i][0], &body[i][1]);
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (body[i][0]<body[j][0]&&body[i][1]<body[j][1]){
                count++;
            }
        }
        printf("%d ", count+1);
        count=0;
    }
}