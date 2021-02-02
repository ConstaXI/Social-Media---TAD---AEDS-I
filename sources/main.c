#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../headers/rede_social.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    TRedeSocial rede;
    rede.indice = 0;

    TUsuarios user;

    char seletor;

    while (1) {
        printf("\t\nMENU");
        printf("\t\n1 - Registrar usu�rio");
        printf("\t\n2 - Ler usu�rio\n");

        fflush(stdin);
        scanf("%c", &seletor);

        switch (seletor) {
            case '1':
                cadastrar(&rede, user);
            case '2':
                imprime(rede.vetor[0]);
            case '3':
                exit(0);
            default:
                printf("\nDeu ruim\n");
        }
    }

    return 0;
}
