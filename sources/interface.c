#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../headers/interface.h"

void MSG_MENU() {
    printf("\n\n\tMENU");
    printf("\n\n\t1. MÓDULO 1 - GERENCIAMENTO DE USUARIOS");
    printf("\n\t2. MÓDULO 2 - GERENCIAMENTO DE AMIZADES");
    printf("\n\t3. MÓDULO 3 - DEBUG");
    printf("\n\t4. SAIR");
}

void MSG_SUBMENU_0(int module_number) {
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

void MSG_SUBMENU_1(int module_number) {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("\n\n\tMÓDULO %d", module_number);
    printf("\n\n1. MOSTRAR MATRIZ DE AMIZADES");
    printf("\n\n2. PESQUISAR");
}

void MSG_DEBUG_MENU(int module_number) {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("\n\n\tMÓDULO %d", module_number);
    printf("\n\n1. Procurar e Imprimir");
    printf("\n\n2. Mostrar Matriz de Relacionamentos");
    printf("\n\n3. Mostrar IDs no Array de Usuários");
}

void submenu_0(tsocmed *net, tuser user) {
    setlocale(LC_ALL, "Portuguese");

    int option;

    printf("\nDigite uma opção: ");
    fflush(stdin);
    scanf("%d", &option);

    switch (option) {
        case 1:
            reg(net, user);
            break;
        case 2:
            system("cls");
            printf("\nDigite o nome do usuário: ");
            fflush(stdin);
            fgets(user.name, 100, stdin);
            findone(*net, user);
            system("PAUSE");
            break;
        case 3:
            reg(net, user);
            update(net, user, 0);
            break;
        case 4:
            printf("\nDigite o ID do usuário que deseja excluir: ");
            int delete_option;
            scanf("%d", &delete_option);
            delete(net, delete_option);
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

void submenu_1(tsocmed *net, tuser user) {
    setlocale(LC_ALL, "Portuguese");

    int option;

    fflush(stdin);
    scanf("%d", &option);

    switch (option) {

    }
}

void debug_menu(tsocmed *net, tuser user) {
    setlocale(LC_ALL, "Portuguese");

    int option;

    printf("\nDigite uma opção: ");
    fflush(stdin);
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("\nDigite um ID: ");
            int ID;
            scanf("%d", &ID);
            debug_fndprt(*net, ID);
        case 2:
            debug_matver(*net);
        case 3:
            debug_shwarr(*net);
        default:
            system("clear");
            printf("\n\n\n\t MSG: DIGITE UMA OPÇÃO VÁLIDA.");
            fflush(stdin);
            system("PAUSE");
    }
}