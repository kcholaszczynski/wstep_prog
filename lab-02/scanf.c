
#include <stdio.h>
void main() {
char litera;
char litera2;

printf("To jest program wczytujący i wypisujacy 2 literki\n");
printf("Podaj je wciskajac enter po pierwszej z nich.\n");

scanf("%c", &litera);
getchar();
scanf("%c", &litera2);
printf("Oto pierwsza litera:%c a oto druga:%c.\n",litera,litera2);
}
