#include <stdio.h>
#include <stdlib.h>

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
    int n,l,arr[1000];
    scanf("%d %d", &n, &l);
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);

    for (int i=0;i<n;i++){
        if (arr[i]<=l){
            l++;
        }
        else {
            break;
        }
    }
    printf("%d", l);
}