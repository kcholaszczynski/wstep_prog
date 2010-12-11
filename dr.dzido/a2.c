#include <stdio.h>
int main(){
int x;
printf("Zapodaj liczbę całkowitą:\n");
scanf("%d",&x);
if( x > 0 ){
printf("Liczba %d jest dodatnia\n",x);
}
if( x < 0 ){
printf("Liczba %d jest ujemna\n",x);
}
if( x == 0 ){
printf("Zwaua\n");
}
}

