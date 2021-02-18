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
    printf("\n\n\t1. CADASTRAR");
    printf("\n\t2. PESQUISAR");
    printf("\n\t3. ALTERAR");
    printf("\n\t4. EXCLUIR");
    printf("\n\t5. IMPRIMIR");
    printf("\n\t6. SAIR");
}

void MSG_SUBMENU_1(int module_number) {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("\n\n\tMÓDULO %d", module_number);
    printf("\n\n\t1. FAZER AMIZADE");
}

void MSG_DEBUG_MENU(int module_number) {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("\n\n\tMÓDULO %d", module_number);
    printf("\n\n\t1. Procurar e Imprimir");
    printf("\n\t2. Mostrar Matriz de Relacionamentos");
    printf("\n\t3. Mostrar IDs no Array de Usuários");
}

void submenu_0(tsocmed *net, tuser user) {
    setlocale(LC_ALL, "Portuguese");

    int option;

    printf("\n\nDigite uma opção: ");
    fflush(stdin);
    scanf("%d", &option);

    switch (option) {
        case 1:
            system("cls");
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
            system("cls");
            printf("\nDigite o ID do usuário que deseja alterar: ");
            int update_id;
            scanf("%d", &update_id);
            read(&user);
            update(net, user, update_id);
            break;
        case 4:
            system("cls");
            printf("\nDigite o ID do usuário que deseja excluir: ");
            int delete_id;
            scanf("%d", &delete_id);
            delete(net, delete_id);
            break;
        case 5:
            system("cls");
            printf("\nDigite o ID do usuário que deseja imprimir: ");
            int id_print;
            scanf("%d", &id_print);
            prtuser(finduser(*net, id_print));
            system("PAUSE");
            break;
        case 6:
            system("cls");
            printf("Exiting program...");
            system("PAUSE");
            break;
        default:
            system("cls");
            printf("\n\n\n\t MSG: DIGITE UMA OPÇÃO VÁLIDA.");
            fflush(stdin);
            system("PAUSE");
    }
}

void submenu_1(tsocmed *net, tuser user) {
    setlocale(LC_ALL, "Portuguese");

    int option;

    printf("\n\nDigite uma opção: ");
    fflush(stdin);
    scanf("%d", &option);

    switch (option) {
        case 1:
            system("cls");
            int index_0, index_1;
            printf("\nDigite o ID do primeiro usuário: ");
            scanf("%d", &index_0);
            printf("\nDigite o ID do primeiro usuário: ");
            scanf("%d", &index_1);
            make_friendship(net, index_0, index_1);
            printf("AMIZADE CONCLUÍDA COM SUCESSO");
            system("PAUSE");
        default:
            system("cls");
            printf("\n\n\n\t MSG: DIGITE UMA OPÇÃO VÁLIDA.");
            fflush(stdin);
            system("PAUSE");
    }
}

void debug_menu(tsocmed *net, tuser user) {
    setlocale(LC_ALL, "Portuguese");

    int option;

    printf("\n\nDigite uma opção: ");
    fflush(stdin);
    scanf("%d", &option);

    switch (option) {
        case 1:
            system("cls");
            printf("\nDigite um ID: ");
            int ID;
            fflush(stdin);
            scanf("%d", &ID);
            debug_fndprt(*net, ID);
            system("PAUSE");
            break;
        case 2:
            system("cls");
            debug_matver(*net);
            system("PAUSE");
            break;
        case 3:
            system("cls");
            debug_shwarr(*net);
            system("PAUSE");
            break;
        default:
            system("cls");
            printf("\n\n\n\t MSG: DIGITE UMA OPÇÃO VÁLIDA.");
            fflush(stdin);
            system("PAUSE");
    }
}