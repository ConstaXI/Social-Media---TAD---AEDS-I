#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../headers/interface.h"

void MSG_MENU() {
    printf("\n\n\tMENU");
    printf("\n\n\t1. MÓDULO 1 - GERENCIAMENTO DE USUARIOS");
    printf("\n\t2. MÓDULO 2 - GERENCIAMENTO DE AMIZADES");
    printf("\n\t3. SAIR");
}

void MSG_SUBMENU(int module_number) {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("\n\n\tMÓDULO %d", module_number);
    printf("\n\n1. CADASTRAR");
    printf("\n\n2. PESQUISAR");
    printf("\n\n3. ALTERAR");
    printf("\n\n4. EXCLUIR");
    printf("\n\n5. IMPRIMIR");
    printf("\n\n6. SAIR");
}

void submenu_0(tsocmed *net, tuser user) {
    setlocale(LC_ALL, "Portuguese");

    int option;

    fflush(stdin);
    scanf("%d", &option);

    switch (option) {
        case 1:
            reg(net, user);
            break;
        case 2:
            findone(*net, user);
            system("PAUSE");
            break;
        case 3:
            reg(net, user);
            update(net, user, 0);
            break;
        case 4:
            delete(net, 0);
            break;
        case 5:
            prtuser(user);
            system("PAUSE");
        case 6:
            system("cls");
            printf("Exiting program...");
            system("PAUSE");
            break;
        default:
            system("clear");
            printf("\n\n\n\t MSG: DIGITE UMA OPÇÃO VÁLIDA.");
            fflush(stdin);
            system("PAUSE");
    }
}