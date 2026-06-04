#include <stdio.h>
#include <stdlib.h>
#include "../include/arquivo.h"
#include "../include/conta.h"

FILE *arquivo_abrir(const char *modo)
{
    FILE *file = fopen(ARQUIVO_BIN, modo);
    if (!file)
    {
        perror("Erro ao abrir arquivo ❌");
        exit(EXIT_FAILURE);
    }

    return file;
}

long arquivo_total_registros(FILE *file)
{
    if (fseek(file, 0, SEEK_END) != 0)
    {
        perror("Erro ao ler arquivo ❌");
        return 0;
    }
    return ftell(file) / (long)sizeof(Cliente);
}

int arquivo_ler(FILE *file, long pos, Cliente *cliente)
{
    if (fseek(file, pos * (long)sizeof(Cliente), SEEK_SET) != 0) 
    {
        perror("Erro ao ler arquivo ❌");
        return 0;
    }

    return fread(cliente, sizeof(Cliente), 1, file) == 1;
}

void arquivo_escrever(FILE *file, long pos, const Cliente *cliente) 
{
    fseek(file, pos * (long)sizeof(Cliente), SEEK_SET);
    fwrite(cliente, sizeof(Cliente), 1, file);
}