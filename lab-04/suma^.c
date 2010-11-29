#include <stdio.h>
int main()
{
int n;
int z;
int suma;
suma = 0;
z = 1;
scanf("%d",&n);
while( z <= n){
suma = suma + z*z; 
z++;
}
printf("Suma kwadratów liczby %d wynosi:%d\n",n,suma);
}
