#include <stdio.h>
#include <stdlib.h>

int compare (const void* a, const void* b)
{
    if (*(int*)a > *(int*)b){
        return 1;
    }
    else {
        return -1;
    }
}


int main() {
    int n,m,target,low,high,mid,narr[500001],flag;

    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &narr[i]);
    }
    
    qsort(narr,n,sizeof(int),compare);
    scanf("%d", &m);
    for (int i=0;i<m;i++){
        high = n-1;
        low = 0;
        flag=0;
        scanf("%d", &target);
        while(low<=high){
            mid = (high+low)/2;
            if (narr[mid]==target){
                printf("1 ");
                flag++;
                break;
            }
            else if (narr[mid]>target){
                high=mid-1;
            }
            else if (narr[mid]<target){
                low=mid+1;
            }
        }
        if (flag!=1){
            printf("0 ");
        }
    }
}