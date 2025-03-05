#include <stdio.h>
#include <stdlib.h>

typedef struct len{
    int num;
    int count;
}card;

int compare(const void* a, const void* b)
{
    card A = *(card*)a;
    card B = *(card*)b;
    
    if (A.num>B.num){
        return 1;
    }
    else {
        return -1;
    }
}

int remove_duplicate(card* arr, int size) {
	int new_index = 0;
	for (int i = 1; i < size; i++) {

		if (arr[new_index].num != arr[i].num) {
			new_index++;
			arr[new_index].num = arr[i].num;
		}
		else {
			arr[new_index].count++;

		}
	}
	return new_index + 1;
}

int main() {
    int n,m,low,high,mid,flag,target,newn;
    scanf("%d", &n);
    card arr[n+1];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i].num);
        arr[i].count=1;
    }
    qsort(arr,n,sizeof(card),compare);
    newn = remove_duplicate(arr,n);
    
    scanf("%d", &m);
    for (int i=0;i<m;i++){
        scanf("%d", &target);
        low=0;
        high=newn-1;
        flag=0;
        while (low<=high){
            mid = (high+low)/2;
            if (arr[mid].num==target){
                flag++;
                printf("%d ",arr[mid].count);
                break;
            }
            else if (arr[mid].num>target){
                high=mid-1;
            }
            else if (arr[mid].num<target){
                low=mid+1;
            }
        }
        if (flag==0)
        {
            printf("0 ");
        }
    }
}


/*

6 3 2 10 10 10 -10 -10 7 3

-10 -10 2 3 3 6 7 10 10 10
찾고나면 좌 와 우를 확인, 참인쪽으로 추가확인, 범위는 mid부터 low나 high까지

*/