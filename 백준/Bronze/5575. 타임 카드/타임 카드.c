#include <stdio.h>

int main() {
    int a,b,c,d,e,f,sum=0;
    for (int i=0;i<3;i++){
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        sum = d*3600+e*60+f-a*3600-b*60-c;
        printf("%d ",sum/3600);
        sum%=3600;
        printf("%d ",sum/60);
        sum%=60;
        printf("%d\n",sum);
    }
}