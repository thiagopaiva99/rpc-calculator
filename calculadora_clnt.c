#include <memory.h>
#include "calculadora.h"

static struct timeval TIMEOUT = { 25, 0 };

int * somar_1(operando *arguments, CLIENT *client) {
	static int client_response;

	memset((char *)&client_response, 0, sizeof(client_response));

	if (clnt_call (client, SOMAR,
		(xdrproc_t) xdr_operando, (caddr_t) arguments,
		(xdrproc_t) xdr_int, (caddr_t) &client_response,
		TIMEOUT) != RPC_SUCCESS) {
		return NULL;
	}

	return &client_response;
}

int * subtrair_1(operando *arguments, CLIENT *client) {
	static int client_response;

	memset((char *)&client_response, 0, sizeof(client_response));

	if (clnt_call (client, SUBTRAIR,
		(xdrproc_t) xdr_operando, (caddr_t) arguments,
		(xdrproc_t) xdr_int, (caddr_t) &client_response,
		TIMEOUT) != RPC_SUCCESS) {
		return NULL;
	}

	return &client_response;
}

int * multiplicar_1(operando *arguments, CLIENT *client) {
	static int client_response;

	memset((char *)&client_response, 0, sizeof(client_response));

	if (clnt_call (client, MULTIPLICAR,
		(xdrproc_t) xdr_operando, (caddr_t) arguments,
		(xdrproc_t) xdr_int, (caddr_t) &client_response,
		TIMEOUT) != RPC_SUCCESS) {
		return NULL;
	}
	
	return &client_response;
}

int * dividir_1(operando *arguments, CLIENT *client) {
	static int client_response;

	memset((char *)&client_response, 0, sizeof(client_response));

	if (clnt_call (client, DIVIDIR,
		(xdrproc_t) xdr_operando, (caddr_t) arguments,
		(xdrproc_t) xdr_int, (caddr_t) &client_response,
		TIMEOUT) != RPC_SUCCESS) {
		return NULL;
	}
	
	return &client_response;
}
