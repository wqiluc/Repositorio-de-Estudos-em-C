#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <stdio.h>
#include "conta.h"

#define ARQUIVO_BIN "contas.bin"

FILE *arquivo_abrir(const char *modo);
long  arquivo_total_registros(FILE *file);
int   arquivo_ler(FILE *file, long pos, Cliente *c);
void  arquivo_escrever(FILE *file, long pos, const Cliente *c);

#endif