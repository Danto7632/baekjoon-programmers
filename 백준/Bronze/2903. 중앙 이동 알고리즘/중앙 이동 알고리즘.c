#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", (int)pow((pow(2, n)+1),2));
}