#include <stdio.h>
int main(){
int wynik = 0;
int z = 1;
int y;
scanf("%d",&y);
if( y > 2 ){
while( y >= z ){
wynik = z*z + wynik;
z++;
}
printf("%d\n",wynik);
}
else{
printf("lala zupa\n");
}
}

