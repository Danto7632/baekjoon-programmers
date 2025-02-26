#include <stdio.h>

int main() {
    int n, count=0;
    char c[51];
    scanf("%d", &n);
    scanf("%s", c);
    for (int i=0;i<n;i++)
    {
        if (c[i] == 'a'){
            count++;
        }
        else if (c[i] == 'e'){
            count++;
        }
        else if (c[i] == 'i'){
            count++;
        }
        else if (c[i] == 'o'){
            count++;
        }
        else if (c[i] == 'u'){
            count++;
        }
    }
    printf("%d", count);
}