#include <stdio.h>

int main() {
    int numa[1000], numb[1000], mid=0, sum=0, count=0;

    for (int i=0;i<5;i++){
        scanf("%d", &numa[i]);
        sum += numa[i];
        if (mid < numa[i]){
            mid = numa[i];
        }
    }

    for (int i=10;i<=mid;i+=10){
        for (int j=0;j<5;j++){
            if (i==numa[j]){
                numb[count]=i;
                count++;
            }
        }
    }
    
    printf("%d\n%d", sum/5, numb[2]);
}