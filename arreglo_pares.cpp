// Raul Ernesto Villarreal Sigala - 301654
// Universidad Autonoma de Chihuahua - Ingenieria en Software

#include<stdio.h>

void intercalar(int pares[], int impares[]) {
	printf("\nIntercalado:\n");
	for(int i=0; i<5; i++)
		printf("%d | %d | ", pares[i], impares[i]);
}

main() 
{ 
	int num, pares[5], impares[5], p=1, im=1; 

	for(int i=1; p<=5; i++) 
	{ 
		printf("\nIntroduce un numero par %d: ", p); 
		scanf("%d", &num); 
		if( num % 2 == 0) { 
			pares[p-1]=num; 
			p++; 
		} else { 
			printf("\nEl numero no es par\nIntente de nuevo\n");
		} 
	}
	
	for(int i=1; im<=5; i++) 
	{ 
		printf("\nIntroduce un numero impar %d: ", im); 
		scanf("%d", &num); 
		if( num % 2 != 0) { 
			impares[im-1]=num; 
			im++; 
		} else { 
			printf("\nEl numero es par\nIntente de nuevo\n");
		} 
	}
	
	intercalar(pares, impares);
	
}
