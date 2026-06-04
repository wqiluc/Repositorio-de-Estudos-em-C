#ifndef CONTA_H
#define CONTA_H

#include <stdio.h>

#define NOME_MAX 50

typedef struct 
{
    int    numero;    
    char   nome[NOME_MAX];
    double saldo;
} Cliente;

void conta_cadastrar(void);
void conta_consultar(void);
void conta_atualizar_saldo(void);
void conta_encerrar(void);
void conta_listar(FILE *f);

#endif