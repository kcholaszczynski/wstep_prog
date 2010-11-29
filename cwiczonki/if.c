#include <stdio.h>
main(){
	int i = 0;
	int z = 0;
	printf("podaj liczbe i: "); scanf("%i",&i);
	printf("podaj liczbe z: "); scanf("%i",&z);
	if( z == 0){
		printf(" zwaua! nie dzielimy przez zero\n");
	}
	else{
		printf("z jest != 0 i jest OK\n");
		printf("wynik dzielenia: %i\n", i/z );
	}
	if( z != 0){
		printf("z jest != 0 i jest OK\n");
		printf("wynik dzielenia: %i\n", i/z );
	}
	else{
		printf(" zwaua! nie dzielimy przez zero\n");
	}
	printf("lala zupa\n");
}
