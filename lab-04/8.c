#include <stdio.h>

int main()

{
int n;
int cyfra;
printf("Zapodaj melodie\n");
scanf("%d",&n);

while (n > 0){

cyfra = n%8;
printf("%d",cyfra);

n = n/8;

}
return 0;

}
