
#include <stdio.h>
void main() {
char litera;
int liczba;

printf("Ten program wczytuje i wypisuje literę i liczbę!\n");
printf("Wpisz kolejno literę i liczbę,przy czym po każdej naciśnij enter.\n");
scanf("%c",&litera);
getchar();
scanf("%d",&liczba);

printf("Litera, którą podałeś to:\n> %c <\n,a liczba,to:\n+ %d +\n ",litera,liczba);

}
