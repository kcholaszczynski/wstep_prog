#include <stdio.h>
int main(){
int x;
printf("Podaj liczbę całkowitą:\n");
scanf("%d",&x);
if( x%2 == 0 ){
printf("Liczba jest parzysta\n");
}
else{
printf("Liczba jest nieparzysta\n");
}
}
