#include<stdio.h>

// Raul Ernesto Villarreal Sigala - 301654
// Universidad Autonoma de Chihuahua - Igenieria en Software
// Febrero 22, 2016

int desplegarMenu() {
	int opcion;
	
	printf("\n1) Convertir de metros a yardas y de yardas a metros");
	printf("\n2) Convertir de Dolares a Euros y de Euros a Dolares");
	printf("\n3) Obtener el valor mayor de tres numeros");
	printf("\n4) Obtener el menor de tres numeros dados");
	printf("\n5) Obtener el promedio de una lista indefinida de numeros reales");
	printf("\n6) Salir");
	
	printf("\n\nSeleccione una opcion: "); scanf("%d", &opcion);
	
	return opcion;
}

void metrosYardas(); void dolarEuro(); void numMayor(); void numMenor(); void promedio();

main() {
		
		int opc = 0;
		
		do {
		
		opc = desplegarMenu();
		
		switch (opc){
			case 1:
				metrosYardas();
				break;
			
			case 2:
				dolarEuro();
				break;
			
			case 3:
				numMayor();
				break;
			
			case 4:
				numMenor();
				break;
			
			case 5:
				promedio();
				break;
			
			case 6:
				printf("\nBye!");
				break;
				
			default:
				printf("Opcion no conocida");
		}
		
		
	}while (opc != 6);
	
}

void metrosYardas() {
	// 1 metro = 1.09361 yardas
	float metros;
	float yards;
	int opc;
	
	do {
		printf("\nQue desea covnertir? \n1)Metros > Yardas\n2)Yardas > Metros\n3)Salir\nSeleccione una opcion: "); scanf("%d", &opc);
		
		switch(opc) {
			case 1:
				printf("\nIntroduzca los metros: "); scanf("%f", &metros);
				yards = metros * 1.09361;
				printf("%.4f metros = %.4f yardas\n", metros, yards);
				break;
			
			case 2:
				printf("\nIntroduzca las yardas: "); scanf("%f", &yards);
				metros = yards / 1.09361;
				printf("%.4f yardas = %.4f metros\n", yards, metros);
				break;
				
			case 3:
				printf("\nDe vuelta al menu principal!");
				break;
				
			default:
				printf("\nOpcion invalida");
		}
	} while(opc != 3);
}

void dolarEuro() {
	// 1 euro = 1.10 dolares americanos
	float dolar, euro;
	int opc;
	
	do {
		printf("\nQue desea convertir? \n1)Dolar > Euro\n2)Euro > Dolar\n3)Salir\nSeleccione una opcion: "); scanf("%d", &opc);
		
		switch(opc) {
			case 1:
				printf("\nIntroduzca cantidad en dolares: "); scanf("%f", &dolar);
				euro = dolar / 1.10;
				printf("%.2f dolares = %.2f euros\n", dolar, euro);
				break;
			
			case 2:
				printf("\nIntroduzca cantidad en euros: "); scanf("%f", &euro);
				dolar = euro * 1.10;
				printf("%.2f euros = %.2f dolares\n", euro, dolar);
				break;
				
			case 3:
				printf("\nDe vuelta al menu principal!");
				break;
				
			default:
				printf("\nOpcion invalida");
		}
		
	} while(opc != 3);
}

void numMayor() {
	int n1, n2, n3, mayor;
	printf("#1 Introduce un numero: "); scanf("%d", &n1);
	printf("#2 Introduce un Numero: "); scanf("%d", &n2);
	printf("#3 Introduce un Numero: "); scanf("%d", &n3);
	
	if(n1 > n2 && n1 > n3) {
		mayor = n1;
	} else if (n2 > n3 ) {
		mayor = n2;
	} else {
		mayor = n3;
	}
	
	printf("\n%d Es el mayor numero de esos 3\n", mayor);
	printf("\nDe vuelta al menu principal!");
}

void numMenor() {
	int n1, n2, n3, menor;
	printf("#1 Introduce un numero: "); scanf("%d", &n1);
	printf("#2 Introduce un Numero: "); scanf("%d", &n2);
	printf("#3 Introduce un Numero: "); scanf("%d", &n3);
	
	// NUMERO MENOR
	if(n1 < n2 && n1 < n3) {
		menor = n1;
	} else if (n2 < n3 ) {
		menor = n2;
	} else {
		menor = n3;
	}
	
	printf("\n%d Es el menor numero de esos 3\n", menor);
	printf("\nDe vuelta al menu principal!");
}

void promedio() {
	int n1, n2, sum = 0, x = 1;
	float prom;
	
	printf("Introduzca un numero: "); scanf("%d", &n1);
	sum = sum + n1;
	printf("Introduzca 1 para continuar o cualquier otro numero para salir: "); scanf("%d", &n2);
	while(n2 == 1) {
		printf("Introduzca otro numero: "); scanf("%d", &n1);
		sum = sum + n1;
		printf("Introduzca 1 para continuar o cualquier otro numero para salir: "); scanf("%d", &n2);
		x++;
	}
	prom = sum/x;
	printf("\nEl promedio de los valores es: %.2f\n", prom);
	printf("\nDe vuelta al menu principal!");
}
