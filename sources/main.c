#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../headers/interface.h"

int main() {
    tsocmed net;
    initialize(&net);
    tuser user;

    main_menu(&net, user);

    return 0;
}
