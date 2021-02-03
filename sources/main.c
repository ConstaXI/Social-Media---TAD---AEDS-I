#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../headers/rede_social.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    tsocmed net;
    net.index = 0;

    tuser user;

    char seletor = 0;
    int index = 0;

    while (seletor != '3') {

        printf("\t\t\nMENU");
        printf("\t\t\n1 - Registrar usuário");
        printf("\t\t\n2 - Ler usuário");
        printf("\t\t\n3 - Sair\n");

        fflush(stdin);
        scanf("%c", &seletor);

        switch (seletor) {
            case '1':
                reg(&net, user);
                break;
            case '2':
                printf("\nDigite a posição do vetor: ");
                scanf("%d", &index);
                fndprt(net, index);
                break;
            default:
                printf("\nSaindo...\n");
        }

        fflush(stdin);
    }

    return 0;
}
