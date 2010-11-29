#include <stdio.h>
int main()
{
float suma = 0;
int licznik = 0;
float srednia;
float liczba = 0;
int x;
printf("Podaj granice licznika:\n");
scanf("%d",&x);
while(licznik<x){
suma = suma + liczba*liczba;
liczba = liczba + 1;
licznik = licznik +1;
}
srednia = suma/licznik;
printf("oto suma liczb %f\n",suma);
printf("a to ich wartosc %f\n",srednia);

return 0;
}


