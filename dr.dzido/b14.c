#include <stdio.h>
int main(){
int x;
int y = 0;
int wynik = 0;
scanf("%d",&x);
while( wynik < x ){
y = y + 1;
wynik = wynik + y*y ;
}
printf("%d\n",y-1);
}

