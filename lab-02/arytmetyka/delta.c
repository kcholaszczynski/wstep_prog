#include <stdio.h>
void main() {
float a;
float b;
float c;
float delta;


printf("Podaj wyraz 'a', kolego...\n");
scanf("%f",&a);
printf("Podaj wyraz 'b', kolego...\n");
scanf("%f",&b);
printf("Podaj wyraz 'c', kolego...\n");
scanf("%f",&c);
delta = b*b - 4*a*c;
printf("Delta wynosi:%f\n",delta);
}

