#include <stdio.h>

int main() {
    long long int k,n,low,mid,high=0,save,sum;
    scanf("%lld %lld", &k, &n);
    long long int arr[k];
    for (long long int i=0;i<k;i++){
        scanf("%lld", &arr[i]);
        high+=arr[i];
    }

    low = 1;
    high/=n;
    while (low<=high){
        sum=0;
        mid = (low+high)/2;
        for (long long int i=0;i<k;i++){
            sum = sum+arr[i]/mid;
        }
        if (sum==n){
            low = mid + 1;
            save = mid;
        }
        else if (sum>n){
            low = mid + 1;
            save = mid;
        }
        else if (sum<n){
            high = mid - 1;
        }
    }
    printf("%lld", save);
}