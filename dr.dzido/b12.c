#include <stdio.h>
int main(){
int wynik = 0;
int wynik2 = 0;
int z = 1;
while( z <= 20 ){
printf("%d\n",z);
wynik = z*z + wynik;
wynik2 = z*z*z + wynik2;
z++;
}
printf("%d\n",wynik);
printf("%d\n",wynik2);
}

