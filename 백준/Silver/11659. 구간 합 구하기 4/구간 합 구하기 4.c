#include <stdio.h>

int main() {
    int n,m,sum=0,low,high;
    scanf("%d %d", &n, &m);
    int arr[n],arr2[n];

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        arr2[i] = sum;
    }

    for (int i=0;i<m;i++){
        scanf("%d %d", &low, &high);
        if (low<2){
            printf("%d\n", arr2[high-1]);
        }
        else {
            printf("%d\n", arr2[high-1]-arr2[low-2]);
        }
    }
}