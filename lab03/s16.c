#include <stdio.h>

main ()

{

 int n;
 int l;
 int i;

 printf("podaj liczbe ");
 scanf("%i",&n);
 printf("\n\n");

 while (n>0) {

   l = n%16;
   n = n/16;

   if (l==15) {
      printf("F");
   } else if(l==14) {
      printf("E");
   } else if(l==13) {
      printf("D");
   } else if(l==12) {
      printf("C");
   } else if(l==11) {
      printf("B");
   } else if(l==10) {
      printf("A");
   } else {

   printf("%i",l);

   }

 }
 printf("$\n");

return 0;

}

