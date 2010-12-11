#include <stdio.h>
int main(){
int x;
printf("Zapodaj liczbę całkowitą:\n");
scanf("%d",&x);
if( x > 5 ){
printf("Liczba %d jest większa od 5\n",x);
}
if( x <= 5 ){
printf("Liczba %d nie jest większa od 5\n",x);
}
}
