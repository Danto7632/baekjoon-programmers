#include <stdio.h>

int main() {
    int L,P,article;
    scanf("%d %d", &L, &P);
    for (int i=0;i<5;i++){
        scanf("%d", &article);
        printf("%d ", article-L*P);
    }
}