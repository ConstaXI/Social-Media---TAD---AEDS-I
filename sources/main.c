#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../headers/interface.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    tsocmed net;
    initialize(&net);
    tuser user;

    int option = 0;

    do {
        system("cls");
        MSG_MENU();
        printf("\n\nDigite uma opção: ");
        fflush(stdin);
        scanf("%d", &option);

        switch (option) {
            case 1:
                MSG_SUBMENU_0(option);
                submenu_0(&net, user);
                break;
            case 2:
                MSG_SUBMENU_1(option);
                submenu_1(&net, user);
                break;
            case 3:
                MSG_DEBUG_MENU(option);
                debug_menu(&net, user);
                break;
            default:
                system("cls");
                printf("\n\n\n\tMSG: DIGITE UMA OPÇÃO VÁLIDA.\n");
                fflush(stdin);
                system("PAUSE");
        }
    } while (option != 4);

    return 0;
}
