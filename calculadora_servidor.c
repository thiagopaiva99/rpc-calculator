#include "calculadora.h"
int * somar_1_svc(operando * argp, struct svc_req *rqstp)
{
	static int result;
	result = argp->x + argp->y;
	return &result;
}

int * subtrair_1_svc(operando *argp, struct svc_req *rqstp)
{
	static int result;
	result = argp->x - argp->y;
	return &result;
}

int * multiplicar_1_svc(operando * argp, struct svc_req *rqstp)
{
	static int result;
	result = argp->x * argp->y;
	return &result;
}

int * dividir_1_svc(operando * argp, struct svc_req *rqstp)
{
	if (argp->x == 0 || argp->y == 0) {
		return 0;
	}

	static int result;
	result = argp->x / argp->y;
	return &result;
}