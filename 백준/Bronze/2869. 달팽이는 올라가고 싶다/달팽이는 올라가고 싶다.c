#include <stdio.h>
#include <math.h>

int main(){
    int A, B, V;

    scanf("%d %d %d", &A, &B, &V);
    printf("%d", (int)ceil((double)(V-B)/(A-B)));
}