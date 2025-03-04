#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char a[21];
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%s", a);
        printf("%s\n", strlen(a)>5?strlen(a)<10?"yes":"no":"no");
    }
}