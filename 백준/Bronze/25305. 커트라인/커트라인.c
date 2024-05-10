#include <stdio.h>

int main() {
    int n, k, numa[1000], numb[1000], max=0, count=0;
    scanf("%d %d", &n, &k);
    
    for (int i=0;i<n;i++){
        scanf("%d", &numa[i]);
        if (max < numa[i]){
            max = numa[i];
        }
    }

    for (int i=0;i<=max;i++){
        for (int j=0;j<n;j++){
            if (i==numa[j]){
                numb[count]=i;
                count++;
            }
        }
    }
    
    printf("%d", numb[n-k]);
}