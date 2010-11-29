#include <stdio.h>

int main() {
    int n, x, i;
    x = 0;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
	x = x + i*i;
    }
    
    printf("%d\n", x);
    
    return 0;
}
