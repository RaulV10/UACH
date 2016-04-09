#include<stdio.h>
#include<string.h>

/*Capturar en una estructura Número de lista, nombre, calif1, 2 y 3.
*Capturar 10 registros
*Calcular promedio de cada registro
*Calcular promedio grupal*/


//Tipo de dato struct

struct ALUMNO{  //tipo de dato desarrollado por el programador
	int num_lista;
	char nombre[10]; // Nombre maximo de 10 caracteres
	float calf1, calf2, calf3;
};


main(){
	//declaracion de una variable de tipo de dato ALUMNO
	ALUMNO alumnos[10]; // 10 Registros
	
	float prom_total = 0;
	
	for(int i=0; i<10; i++) {
		printf("Introduzca nombre de alumno #%d: ", i+1); scanf("%s", &alumnos[i].nombre);
		printf("Introduzca el numero de lista de %s: ", alumnos[i].nombre); scanf("%d", &alumnos[i].num_lista);
		printf("Introduzca calificacion #1 de %s: ", alumnos[i].nombre); scanf("%f", &alumnos[i].calf1);
		printf("Introduzca calificacion #2 de %s: ", alumnos[i].nombre); scanf("%f", &alumnos[i].calf2);
		printf("Introduzca calificacion #3 de %s: ", alumnos[i].nombre); scanf("%f", &alumnos[i].calf3);
		
		printf("\n*****************************\n");
		printf("El promedio de %s es %.2f", alumnos[i].nombre, (alumnos[i].calf1 + alumnos[i].calf2 + alumnos[i].calf3)/3);	
		printf("\n*****************************\n\n");
	}
	
	for(int i=0; i<10; i++) {
		prom_total += ((alumnos[i].calf1 + alumnos[i].calf2 + alumnos[i].calf3)/3);
	}
	
	printf("El promedio total es: %.2f", prom_total/10);
	
}
