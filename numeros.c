#include<stdio.h>

// Raul Ernesto Villarreal Sigala
// 05/Enero/2016

main() {
	int x = 0, primo, par, dia, mes, posOneg;
	int n1, n2, n3;
	int mayor, medio, menor; // numeros que se utilizaran para acomodar el orden de los numeros mayores y menores
	
	printf("NUMEROS PRIMOS:\nIntroduce un Numero del 1 al 5: "); scanf("%d", &primo);
	if (primo > 0 && primo < 6) {
			if(primo%1 == 0) { x++; } 
			if(primo%2 == 0) { x++; }
			if(primo%3 == 0) { x++; }
			if(primo%4 == 0) { x++; }
			if(primo%5 == 0) { x++; }
		if(x <= 2) { // Si se dividio menos de 2 veces es primo, en cambio si se dividio mas 1 ves no es numero primo
			printf("Numero Primo");
		} else { printf("Numero no Primo"); }
	} else { printf("Numero fuera de rango"); }
	
	printf("\n--------------------------------\n");
	
	printf("NUMEROS PARES\nIntroduce un Numero: "); scanf("%d", &par);
	if(par%2 == 0) {
		printf("Numero Par");
	} else {
		printf("Numero Impar");
	}
	
	printf("\n--------------------------------\n");
	
	printf("DIAS DE LA SEMANA\nIntroduce un Numero del 1 al 7: "); scanf("%d", &dia);
	if(dia == 1) { printf("Lunes"); }
	else if(dia == 2) { printf("Martes"); }
	else if(dia == 3) { printf("Miercoles"); }
	else if(dia == 4) { printf("Jueves"); }
	else if(dia == 5) { printf("Viernes"); }
	else if(dia == 6) { printf("Sabado"); }
	else if(dia == 7) { printf("Domingo"); }
	else { printf("Dia Invalido"); }
	
	printf("\n--------------------------------\n");
	
	printf("MESES DEL A\xa5O\nIntroduce un Numero del 1 al 12: "); scanf("%d", &mes);
	if(mes == 1) { printf("ENERO"); }
	else if(mes == 2) { printf("FEBRERO"); }
	else if(mes == 3) { printf("MARZO"); }
	else if(mes == 4) { printf("ABRIL"); }
	else if(mes == 5) { printf("MAYO"); }
	else if(mes == 6) { printf("JUNIO"); }
	else if(mes == 7) { printf("JULIO"); }
	else if(mes == 8) { printf("AGOSTO"); }
	else if(mes == 9) { printf("SEPTIEMBRE"); }
	else if(mes == 10) { printf("OCTUBRE"); }
	else if(mes == 11) { printf("NOVIEMBRE"); }
	else if(mes == 12) { printf("DICIEMBRE"); }
	else { printf("Mes Invalido"); }
	
	printf("\n--------------------------------\n");
	printf("MENOR A MAYOR\n#1 Introduce un Numero: "); scanf("%d", &n1);
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
	
	// NUMERO MAYOR
	if(n1 > n2 && n1 > n3) {
		mayor = n1;
	} else if (n2 > n3 ) {
		mayor = n2;
	} else {
		mayor = n3;
	}
	
	// NUMERO MEDIO
	 if(n1 != menor && n1 != mayor) {
	 	medio = n1;
	 } else if(n2 != menor && n2 != mayor) {
	 	medio = n2;
	 } else {
	 	medio = n3;
	 }
	 
	 printf("Menor a Mayor: %d - %d - %d", menor, medio, mayor);
	 
	 
	printf("\n--------------------------------\n");
	printf("MAYOR A MENOR\n#1 Introduce un Numero: "); scanf("%d", &n1);
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
	
	// NUMERO MAYOR
	if(n1 > n2 && n1 > n3) {
		mayor = n1;
	} else if (n2 > n3 ) {
		mayor = n2;
	} else {
		mayor = n3;
	}
	
	// NUMERO MEDIO
	 if(n1 != menor && n1 != mayor) {
	 	medio = n1;
	 } else if(n2 != menor && n2 != mayor) {
	 	medio = n2;
	 } else {
	 	medio = n3;
	 }
	 
	 printf("Menor a Mayor: %d - %d - %d", mayor, medio, menor);
	 
	 printf("\n--------------------------------\n");
	 printf("POSITIVO Y NEGATIVO\nIntroduce un Numero: "); scanf("%d", &posOneg);
	 if(posOneg < 0 ) { printf("El numero es negativo"); }
	 else { ("El numero es positivo"); }
	 
	 printf("\n--------------------------------\n");
	 printf("MAYOR A 100\nIntroduce un Numero: "); scanf("%d", &posOneg);
	 if(posOneg > 100 ) { printf("El numero es mayor a 100"); }
	 else { printf("El numero es menor a 100"); } 
}
