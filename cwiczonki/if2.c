#include <stdio.h>
int main()
{
float suma;
int licznik;
float srednia;
float liczba;

suma = 0;
licznik = 0;
liczba = 0;

while(licznik < 50){
suma = suma + liczba;
liczba = liczba * liczba;
licznik  = licznik +1;
}
srednia = suma/licznik;
printf("oto suma liczb %f",suma);
printf("a to ich wartosc %f",srednia);

return 0;
}


