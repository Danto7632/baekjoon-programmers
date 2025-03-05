#include <stdio.h>

int main() {
    int n,count=0,flag=0,num;
    scanf("%d", &n);
    int arr[n+1];
    for (int i=0;i<n;i++){
        arr[i]=i+1;
    }
    for (int i=0;flag!=n;i++){
        if (i>n-1){
            i-=n;
        }
        
        if (count==0&&arr[i]!=0){
            num=arr[i];
            arr[i]=0;
            count++;
            flag++;
        }
        else if (count==1&&arr[i]!=0){
            count--;
        }
    }
    printf("%d",num);
}