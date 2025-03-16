#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[21];
}str;


int compare(const void* a, const void* b)
{
    str A = *(str*)a;
    str B = *(str*)b;
    if (strcmp(A.name,B.name)>0){
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int n, m, low, mid, high, count=0;
    char check[21];
    scanf("%d %d", &n, &m);
    str a[n],b[n];
    for (int i=0;i<n;i++){
        scanf("%s", a[i].name);
    }
    qsort(a,n,sizeof(str),compare);
    for (int i=0;i<m;i++){
        scanf("%s", check);
        low=0;
        high=n-1;
        while (low<=high){
            mid=(low+high)/2;
            if (strcmp(a[mid].name,check)==0){
                strcpy(b[count].name,check);
                count++;
                break;
            }
            else if (strcmp(a[mid].name,check)>0){
                high = mid - 1;
            }
            else if (strcmp(a[mid].name,check)<0){
                low = mid + 1;
            }
        }
    }
    qsort(b,count,sizeof(str),compare);
    printf("%d\n", count);
    for (int i=0;i<count;i++){
        printf("%s\n", b[i].name);
    }
}