// Raul Ernesto Villarreal Sigala - 301654
// Universidad Autonoma de Chihuahua - Ingenieria en Software

#include<stdio.h>
#include<string.h>

/*Desarrollar programa que utilice una estructura para almacenar temperaturas en °C y su conversión a °F, otra estructura que almacene ubicación geográfica y la estructura de temperaturas.
El programa recibe desde el teclado y almacena un arreglo de 5 ubicaciones.
Obtener la ubicación con la temperatura más alta.*/

// Tipo de dato Struct
struct TEMPERATURA {
	int c, f;
};

struct UBICACION {
	char ubi[20];
	struct TEMPERATURA temp;
};

int Conversion(int);

main() {
	UBICACION lugar[5]; // 5 registros
	
	for(int i=0; i<5; i++) {
		printf("Introduzca la ubicacion geografica #%d: ", i+1); scanf("%s", &lugar[i].ubi);
		printf("Introduzca la temperatura en grados celsius de %s: ", lugar[i].ubi); scanf("%d", &lugar[i].temp.c);
		lugar[i].temp.f = Conversion(lugar[i].temp.c); // Convertir los grados celsius a farenheit
	}
	
	for(int i=1;i<5;++i)  // Ciclo para encontrar el elemento con la temperatura mas alta
    {
       if(lugar[0].temp.c < lugar[i].temp.c)
           lugar[0]=lugar[i];
    }
    
    printf("\nLa ubicacion geografica con la temperatura mas alta es %s\n%s tiene %d'C = %d'F", lugar[0].ubi, lugar[0].ubi, lugar[0].temp.c, lugar[0].temp.f);
    
}

int Conversion(int celsius) {
	int farenheit;
	farenheit = ((9*celsius)/5)+32;
	return farenheit;
}
