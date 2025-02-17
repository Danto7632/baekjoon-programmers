#include <stdio.h>

int sum(int k, int n);

int main() {
    int k,n,T;
    scanf("%d", &T);
    for (int i=0;i<T;i++){
        scanf("%d\n%d", &k, &n);
        printf("%d\n", sum(k,n));
    }
}

int sum(int k, int n)
{
    if (k==0){
        return n;
    }
    else {
        if (n==0){
            return 0;
        }
    }
    return sum(k, n-1) + sum(k-1, n);
}