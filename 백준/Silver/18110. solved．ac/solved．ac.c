#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b)
{
    if (*(int*)a>*(int*)b){
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int n,sum=0;
    scanf("%d", &n);
    if (n==0){
        printf("0");
    }
    else {
        int arr[n];
        for (int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        qsort(arr,n,sizeof(int),compare);
        for (int i=(int)round(n*0.15);i<n-(int)round(n*0.15);i++){
            sum+=arr[i];
        }
        sum = round(sum/(n-round(n*0.15)*2));
        printf("%d", sum);
    }
}