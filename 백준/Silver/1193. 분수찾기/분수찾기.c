#include <stdio.h>

int main(){
    int n, a=1, b=1, flag;
    scanf("%d", &n);

    for (int i=1;i<n;i++) {
        if (a==1 && b%2==1){
            b+=1;
            flag = 0;
        }
        else if (a%2==0 && b==1){
            a+=1;
            flag = 1;
        }
        else if (flag == 1) {
            a-=1;
            b+=1;
        }
        else {
            a+=1;
            b-=1;
        }
    }
    printf("%d/%d", a, b);
    
}
//오른쪽이 홀수 일때 오른쪽
//왼쪽이 짝수 일때 아래