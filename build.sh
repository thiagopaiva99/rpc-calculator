#! /bin/bash

gcc calculadora_simples.c calculadora_clnt.c calculadora_xdr.c -o client -lnsl
gcc calculadora_servidor.c calculadora_svc.c calculadora_xdr.c -o server -lnsl