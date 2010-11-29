#include <stdio.h>
int main()
{
int pierwszy;
int drugi;
int trzeci;
int licznik;
int n;

scanf ("%d",&n);
pierwszy = 1;
drugi = 2;
licznik = 0;

while(licznik <= n-1){
     trzeci = pierwszy + drugi;
   pierwszy = drugi;
drugi = trzeci; 
 licznik = licznik +1;

}
printf("oto n-ty wyraz liczby fibonacciego: %d",trzeci);

}

