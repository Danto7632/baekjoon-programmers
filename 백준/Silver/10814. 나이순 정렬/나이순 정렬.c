#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
}mb;

int compare(const void* a, const void* b)
{
    mb A = *(mb*)a;
    mb B = *(mb*)b;
    if (A.age > B.age){
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    mb member[n]; 
    for (int i=0;i<n;i++){
        scanf("%d %s", &member[i].age, member[i].name);
    }

    qsort(member, n, sizeof(mb), compare);

    for (int i=0;i<n;i++){
        printf("%d %s\n", member[i].age, member[i].name);
    }
}