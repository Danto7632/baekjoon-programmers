#include <stdio.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%d", ((int)((a+1)*(b+1)/(c+1)-1)*10)%10>4?(int)((a+1)*(b+1)/(c+1)-1)+1:(int)((a+1)*(b+1)/(c+1)-1));
}