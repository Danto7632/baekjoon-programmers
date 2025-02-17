#include <stdio.h>

int main() {
    int a, sum=0, num[10001];
    for (int i=0;i<10001;i++){
        num[i]=i;
    }
    
    for (int i=1;i<10001;i++){
        a = i;
        sum = a;
        for (int j=0;j<5;j++){
            sum+=a%10;
            a/=10;
        }
        if (sum<=10000){
            num[sum]=0;
        }
        if (num[i]!=0){
            printf("%d\n", num[i]);
        }
    }
}