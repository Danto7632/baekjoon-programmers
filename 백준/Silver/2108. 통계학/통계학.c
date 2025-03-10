#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct len{
    int num;
    int count;
}card;

int compare1(const void* a, const void* b)
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

int compare2(const void* a, const void* b)
{
    card A = *(card*)a;
    card B = *(card*)b;
    
    if (A.count<B.count){
        return 1;
    }
    else {
        if (A.num>B.num){
            return 1;
        }
        else {
            return -1;
        }
    }
}

int countequal(card* arr, int size) {
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
	return new_index+1;
}

int main() {
    int n, sum=0,k,newn,mid,range;
    scanf("%d", &n);
    card arr[n+1];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i].num);
        arr[i].count=1;
        sum+=arr[i].num;
    }
    qsort(arr,n,sizeof(card),compare1);
    mid = arr[(n+1)/2-1].num;
    range = arr[n-1].num-arr[0].num;
    newn=countequal(arr,n);
    qsort(arr,newn,sizeof(card),compare2);
    printf("%d\n%d\n%d\n%d\n", (int)round((double)sum/(double)n), mid, arr[0].count==arr[1].count?arr[1].num:arr[0].num, range);
}
// num 기준으로 정렬해서 mid 와 range를 구하고
// count 기준으로 재정렬해서 최저값에서 2번째 나오게끔