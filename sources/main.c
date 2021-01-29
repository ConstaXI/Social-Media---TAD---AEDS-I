#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../headers/rede_social.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    TRedeSocial rede;
    TUsuarios user;

    char seletor;

    while (1) {
        printf("\t\nMENU");
        printf("\t\n1 - Registrar usuário");
        printf("\t\n2 - Ler usuário");

        fflush(stdin);
        scanf("%c", &seletor);

        switch (seletor) {
            case '1':
                le(&user);
            case '2':
                imprime(user);
            case '3':
                exit(0);
            default:
                printf("\nDeu ruim\n");
        }
    }

    return 0;
}
