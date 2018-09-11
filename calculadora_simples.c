#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main(int argc, char *argv[])
{
 CLIENT * clnt;
 int x, y;
 if(argc!=4)
 {
	fprintf(stderr,"uso: %s host num1 num\n",argv[0]);
	exit(0);
 } 
 clnt = clnt_create(argv[1], CALCULADORA,CALCULADORA_VERSAO,"udp");
 operando ops;
 ops.x = atoi(argv[2]);
 ops.y = atoi(argv[3]);
 printf("%d + %d = %d\n", ops.x, ops.y, *somar_1(&ops, clnt));
 printf("%d - %d = %d\n", ops.x, ops.y, *subtrair_1(&ops, clnt));
 printf("%d * %d = %d\n", ops.x, ops.y, *multiplicar_1(&ops, clnt));
 printf("%d / %d = %d\n", ops.x, ops.y, *dividir_1(&ops, clnt));
 return(0);
}
