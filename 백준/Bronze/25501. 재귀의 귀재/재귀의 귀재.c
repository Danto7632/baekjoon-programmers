#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int recursioncount(const char *s){
    int l = 0;
    int r = strlen(s)-1;
    int count = 1;
    while(1){
        if(l >= r) return count;
        else if(s[l] != s[r]) return count;
        else {
            l++;
            r--;
            count++;
        }
    }
}

int main(){
    int n;
    char a[1001];
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%s", a);
        printf("%d %d\n", isPalindrome(a), recursioncount(a));
    }
}