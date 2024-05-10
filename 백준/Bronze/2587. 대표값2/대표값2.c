#include <stdio.h>

int main() {
    int numa[1000], numb[1000], max=0, sum=0, count=0;

    for (int i=0;i<5;i++){
        scanf("%d", &numa[i]);
        sum += numa[i];
        if (max < numa[i]){
            max = numa[i];
        }
    }

    for (int i=10;i<=max;i+=10){
        for (int j=0;j<5;j++){
            if (i==numa[j]){
                numb[count]=i;
                count++;
            }
        }
    }
    
    printf("%d\n%d", sum/5, numb[2]);
}