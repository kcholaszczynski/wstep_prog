#include <stdio.h>
int main()
{
int x;
int y;
x = 0;
y = 42;
while(x < 200){
y = y + 7;
x = x + 1;
printf("%d\n", y);
}
}
