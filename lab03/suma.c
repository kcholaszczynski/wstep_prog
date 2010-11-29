#include <stdio.h>
main()
{

 int s;
 int n;
 int a;
 int i;
 int b;

 s = 0;

 printf("podaj liczbe n ");
 scanf("%i",&n);
 printf("\n");

 for (b=0; b<(n+1); b++) {

   for (i=0; i<n; i++) {

      a = b*b;

   }

   s = s+a;

 }

 printf("suma poteg liczb naturalnych mniejszych od n wynosi %i\n",s);

return 0;

}

