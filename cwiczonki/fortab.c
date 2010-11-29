#include <stdio.h>
main(){
	int T[5] = {1,7,8};
	int i;
	printf("+"); for(i=0;i<5;i=i+1) printf("%3s","---"); 
printf("+\n");
	printf("|"); for(i=0;i<5;i=i+1) printf("%2i ",T[i]); 
printf("|\n");
	printf("+"); for(i=0;i<5;i=i+1) printf("%3s","---"); 
printf("+\n");
}
