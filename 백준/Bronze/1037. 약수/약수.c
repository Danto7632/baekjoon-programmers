#include <stdio.h>

int main() {
    int n,a,min=1000001,max=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &a);
        max=a>max?a:max;
        min=a<min?a:min;
    }
    printf("%d", max*min);
}