#include <stdio.h>
#include <math.h>

int main(){
    int a;
    scanf("%d", &a);
    
    for (int i=2;i<a+1;i++){
        if (a==1){
            break;
        }
        if (a%i==0){
            printf("%d\n", i);
            a/=i;
            i=1;
        }
    }
}

