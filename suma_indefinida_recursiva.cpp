#include<stdio.h>

// Raul Ernesto Villarreal Sigala - Abril/7/2016s
// Universidad Autonoma de Chihuahua - Ingenieria en Software

int sumar( int x[], int n ) { // Arreglo, numero de elementos en el arreglo
  if (n < 0) {
    //En caso de que no haya ningun numero a sumar
    return 0;
  } else{
    return x[n-1] + sumar(x, n-1); // Recursividad
  }
}

main()
{

    int x[100]; // Arreglo (solo se podran sumar un maximo de 100 numeros)
    int n = 0, num, sum;
    
    printf("Introduzca el valor #%d: ", n+1); scanf("%d", &num); // Pedir primer numero 
	x[n] = num; // Introducir el primer numero en el arreglo
	n++;
	
	while(num!=0) {
		printf("Introduzca el valor #%d o '0' para salir: ", n+1); scanf("%d", &num); // Pedir los siguientes numeros 
		x[n] = num; // Introducir los datos en el arreglo
		n++;
	}
	
    sum = sumar(x, n); // Llamada a la funcion recursiva
    
    // Imprimir resultados
    printf("\nUsted sumara un total de %d numeros", n-1);
	printf("\nLa suma de todos los numeros es: %d", sum);

}
