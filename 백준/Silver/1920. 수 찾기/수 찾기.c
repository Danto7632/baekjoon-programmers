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
    int n,m,low,high,mid,flag,target;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    scanf("%d", &m);
    for (int i=0;i<m;i++){
        scanf("%d", &target);
        flag=0;
        low=0;
        high=n-1;
        while (low<=high){
            mid=(high+low)/2;
            if (arr[mid]==target){
                flag++;
                break;
            }
            else if (arr[mid]>target){
                high=mid-1;
            }
            else if (arr[mid]<target){
                low=mid+1;
            }
        }
        printf("%d\n", flag==1?1:0);
    }
}