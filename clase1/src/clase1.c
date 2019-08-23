/*
 ============================================================================
 Name        : clase1.c
 Author      : Alessandra
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int pideSuma(int* suma);

int main(void) {
	int suma;

	if(pideSuma(&suma) == 0)
	{
		printf("La suma es: %d",suma);
	}
	else {
		printf("ERROR");
	}
	return 0;
}

int pideSuma(int* suma) {
	int valorA;
	int valorB;

	printf("\nIngrese el primer numero: ");
	scanf("%d",&valorA);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&valorB);
	*suma = valorA + valorB;
	return 0;
}
