#include<stdio.h>
#include<stdlib.h>

/*
Se utiliza un arreglo de estructuras del tipo 'venta' de 10 elementos para capturar los datos; 
la creación del arreglo es mediante apuntadores y función malloc


La impresión de datos se hará mediante una función almacenada en un arreglo de funciones, que reciba la dirección del arreglo
de ventas.
*/

struct venta {
	int folio;
	char cliente[60];
	float cargo;
	float abono;
};

void impresion(venta*);

main() {
	venta *ventas;
	
	ventas = (venta*)malloc(sizeof(venta)*10);
	
	
	// Arreglo de funciones
	void(*funcion[1])(venta*);
	
	//Asignacion de las direcciones a funcion que reciben 
	//apuntadores
	funcion[0] = impresion;
	
	
	for(int i=0; i<10; i++) {
		printf("#%d Introduzca No. de Folio: ", i+1); scanf("%d", &ventas[i].folio);
		printf("#%d Introduzca Nombde del Cliente: ", i+1); scanf("%s", &ventas[i].cliente);
		printf("#%d Introduzca la cantidad de cargo: $", i+1); scanf("%f", &ventas[i].cargo);
		printf("#%d Introduzca la cantidad de abono: $", i+1); scanf("%f", &ventas[i].abono);
		printf("\n");
	}
	printf("\n*******************************************************************\n");
	funcion[0](ventas);
}

void impresion(venta *ventas) {
	printf("\n|Folio|\t|Nombre cliente|\t|Cargo|\t|Abono|\n");
	for(int i=0; i<10; i++) {
		printf("|%d|", ventas[i].folio);
		printf("\t|%s|", ventas[i].cliente);
		printf("\t|%.2f|", ventas[i].cargo);
		printf("\t|%.2f|", ventas[i].abono);
		printf("\n");
	}
}
