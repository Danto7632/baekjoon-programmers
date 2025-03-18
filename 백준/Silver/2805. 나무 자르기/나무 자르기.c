#include <stdio.h>

int main() {
    long long int n,m,arr[1000001],low,mid,high=0,sum=0,max,flag=0;
    scanf("%lld %lld", &n, &m);
    for (int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
        high=arr[i]>high?arr[i]:high;
    }
    low=0;
    high--;
    while (low<=high){
        sum=0;
        mid = (low+high)/2;
        for (int i=0;i<n;i++){
            sum+=(arr[i]-mid)>0?arr[i]-mid:0;
        }
        if (sum==m){
            printf("%lld", mid);
            flag++;
            break;
        }
        else if (sum>m){
            low = mid + 1;
            max=mid;
        }
        else if (sum<m){
            high = mid - 1;
        }
    }
    if (flag==0){
        printf("%lld", max);
    }
}