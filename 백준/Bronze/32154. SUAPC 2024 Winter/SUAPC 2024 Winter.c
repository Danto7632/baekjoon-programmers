#include <stdio.h>

int main() {
    int n;
    int nboard[10] = {11,9,9,9,8,8,8,8,8,8};
    char board[10][27] = {{"A B C D E F G H J L M"},
					   {"A C E F G H I L M"},
					   {"A C E F G H I L M"},
					   {"A B C E F G H L M"},
					   {"A C E F G H L M"},
					   {"A C E F G H L M"},
					   {"A C E F G H L M"},
					   {"A C E F G H L M"},
					   {"A C E F G H L M"},
					   {"A B C F G H L M"}};
    scanf("%d", &n);
    printf("%d\n%s", nboard[n-1], board[n-1]);
    
}