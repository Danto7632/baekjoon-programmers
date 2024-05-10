#include <stdio.h>

int main() {
    int n, numa[1000], max=0, count=0;
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        scanf("%d", &numa[i]);
        if (numa[i]>max){
            max = numa[i];
        }
    }
    for (int i=-1000;i<=max;i++){
        for (int j=0;j<n;j++){
            if (i==numa[j]){
                printf("%d\n", i);
            }
        }
    }
}