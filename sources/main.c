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
    int user_id;

    while (seletor != '9') {

        printf("\t\t\nMENU");
        printf("\t\t\n1 - Registrar usuário");
        printf("\t\t\n2 - Ler usuário");
        printf("\t\t\n3 - Iniciar Matriz de amizades");
        printf("\t\t\n4 - Procurar usuário pelo nome");
        printf("\t\t\n9 - Sair\n");

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
            case '3':
                matinit(&net);
                matver(net);
                break;
            case '4':
                user_id = findone(net);
                printf("O usuário é: %s", net.array[user_id]);
                break;
            default:
                printf("\nSaindo...\n");
        }

        fflush(stdin);
    }

    return 0;
}
