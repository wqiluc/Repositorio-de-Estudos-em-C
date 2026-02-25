#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1 = 30;
    int numero2 = 15;
    char nome_do_usuario[] = "Lucas";

    printf("O nome do usuário é: %s\n", nome_do_usuario);

    if (numero1>numero2){
        int soma = numero1+numero2;
        printf("Opção 1!✅ A soma dos dois números é: %d", soma);
    } else{
        int soma = numero2+numero1;
        printf("Opcão 2!✅ A soma dos dois números é: %d", soma);
    }

    return 0;
}