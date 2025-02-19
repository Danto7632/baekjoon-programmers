#include <stdio.h>

int main() {
    int n, pat, num[5001], a=0, count=0;
    scanf("%d %d", &n, &pat);
    for (int i=1;i<n+1;i++){
        num[i] = i;
    }
    printf("<");
    while (count!=n){
        for (int i=0;i<pat;i++){
            a++;
            if (a>n){
                a-=n;
            }
            if (num[a]=='\0'){
                i--;
            }
        }
        if (count==n-1){
            printf("%d>", num[a]);
        }
        else {
            printf("%d, ", num[a]);
        }
        num[a]='\0';
        count++;
    }
}