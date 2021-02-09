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
        printf("\n\nDigite uma op��o: ");
        fflush(stdin);
        scanf("%d", &option);

        switch (option) {
            case 1:
                MSG_SUBMENU(option);
                submenu_0(&net, user);
                break;
            case 2:
                //submenu_1(&net, user);
                break;
            default:
                system("cls");
                printf("\n\n\n\t MSG: DIGITE UMA OP��O V�LIDA.");
                fflush(stdin);
                getchar();
        }
    } while (option != 3);

    return 0;
}
