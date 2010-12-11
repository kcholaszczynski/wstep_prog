#include <stdio.h>
int main(){
int x = 0;
int wynik = 0;
int z;
z = 0;
while( z <= 20 ){
wynik = z + wynik;
z++;
}
printf("suma 20 liczb naturalnych wynosi %d\n",wynik);
}

