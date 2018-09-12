#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

/* Check if args passed are OK */
void checkArgs(int argc, char *argv[]) {
 	if(argc != 4)
	{
		fprintf(stderr,"How to use: %s <HOST> <FIRST_VALUE> <SECOND_VALUE>\n", argv[0]);
		exit(0);
 	} 
}

/* Printing the final results */
void printResults(operando ops, CLIENT * clnt) {
	printf("%d + %d = %d\n", ops.x, ops.y, *somar_1(&ops, clnt));
 	printf("%d - %d = %d\n", ops.x, ops.y, *subtrair_1(&ops, clnt));
 	printf("%d * %d = %d\n", ops.x, ops.y, *multiplicar_1(&ops, clnt));
 	printf("%d / %d = %d\n", ops.x, ops.y, *dividir_1(&ops, clnt));
}

void main(int argc, char *argv[]) {
 	checkArgs(argc, argv); 
 	
	int x, y;

 	CLIENT * clnt = clnt_create(argv[1], CALCULADORA, CALCULADORA_VERSAO, "udp"); 	

	operando ops;
 	ops.x = atoi(argv[2]);
 	ops.y = atoi(argv[3]);

 	printResults(ops, clnt);
}
