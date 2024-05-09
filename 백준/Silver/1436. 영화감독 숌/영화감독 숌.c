#include <stdio.h>

int main() {
    int n, i=0, count=0;
    scanf("%d", &n);

    while (count<n){
        if (i%1000==666){
            count++;
        }
        else if ((i/10)%1000==666){
            count++;
        }
        else if ((i/100)%1000==666){
            count++;
        }
        else if ((i/1000)%1000==666){
            count++;
        }
        else if ((i/10000)%1000==666){
            count++;
        }
        i++;
    }
    printf("%d", i-1);
}