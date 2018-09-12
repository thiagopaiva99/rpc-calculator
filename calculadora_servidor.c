#include "calculadora.h"

int * somar_1_svc(operando * arguments, struct svc_req *rqstp) {
	static int result;

	result = arguments->x + arguments->y;

	return &result;
}

int * subtrair_1_svc(operando * arguments, struct svc_req *rqstp) {
	static int result;

	result = arguments->x - arguments->y;

	return &result;
}

int * multiplicar_1_svc(operando * arguments, struct svc_req *rqstp) {
	static int result;

	result = arguments->x * arguments->y;

	return &result;
}

int * dividir_1_svc(operando * arguments, struct svc_req *rqstp) {
	if (arguments->x == 0 || arguments->y == 0) {
		return 0;
	}

	static int result;

	result = arguments->x / arguments->y;
	
	return &result;
}