#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char address[21];
    char password[21];
}str;

int compare(const void* a, const void* b)
{
    str A = *(str*)a;
    str B = *(str*)b;
    
    if (strcmp(A.address,B.address)>0){
        return 1;
    }
    else {
        return -1;
    }
}


int main() {
    int n,m,low,mid,high;
    char test[21];
    scanf("%d %d", &n, &m);
    str list[n];
    for (int i=0;i<n;i++){
        scanf("%s %s", list[i].address, list[i].password);
    }
    
    qsort(list,n,sizeof(str),compare);

    for (int i=0;i<m;i++){
        scanf("%s", test);
        low=0;
        high=n-1;
        while (low<=high){
            mid = (low+high)/2;
            if (strcmp(list[mid].address,test)==0){
                printf("%s\n", list[mid].password);
                break;
            }
            else if (strcmp(list[mid].address,test)>0){
                high = mid - 1;
            }
            else if (strcmp(list[mid].address,test)<0){
                low = mid + 1;
            }
        }
    }
}