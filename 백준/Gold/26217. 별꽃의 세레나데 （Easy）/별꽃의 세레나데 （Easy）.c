#include <stdio.h>

double expact(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%f", expact(n));
}

double expact(int n)
{
    double sum=0;
    for (double i=1;i<n+1;i++){
        sum += n/i;
    }
    return sum;
}