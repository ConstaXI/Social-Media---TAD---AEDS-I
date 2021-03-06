#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../headers/rede_social.h"
#include "../headers/friendship.h"

void read(tuser *user) {
    printf("\nDigite o nome do usu�rio: ");
    fflush(stdin);
    fgets(user->name, 100, stdin);

    printf("\nDigite o email do usu�rio: ");
    fflush(stdin);
    fgets(user->email, 200, stdin);

    printf("\nDigite o login do usu�rio: ");
    fflush(stdin);
    fgets(user->login, 50, stdin);

    printf("\nDigite a senha do usu�rio: ");
    fflush(stdin);
    fgets(user->password, 50, stdin);

    printf("\nData de Nascimento: ");
    printf("\nDigite o dia: ");
    fflush(stdin);
    scanf("%d", &user->birth_date.day);

    printf("\nDigite o m�s: ");
    fflush(stdin);
    scanf("%d", &user->birth_date.month);

    printf("\nDigite o ano: ");
    fflush(stdin);
    scanf("%d", &user->birth_date.year);
}

void reg(tsocmed *rede, tuser user) {
    read(&user);

    user.id = rede->index;

    system("cls");

    if (rede->index < 100) {
        rede->array[rede->index] = user;
        rede->index++;

        prtuser(user);
        system("PAUSE");
    } else {
        printf("\nVetor de usu�rios cheio!\n");
    }
}

void prtuser(tuser user) {
    printf("\nID: %d", user.id);
    printf("\nNome: %s", user.name);
    printf("\nEmail: %s", user.email);
    printf("\nLogin: %s", user.login);
    printf("\nData de Nascimento: %d/%d/%d\n",
           user.birth_date.day,
           user.birth_date.month,
           user.birth_date.year
    );
}

tuser finduser(tsocmed net, int index) {
    for (int i = 0; i < net.index; i++) {
        if (net.array[i].id == index) {
            return net.array[i];
        }
    }
}

int findone(tsocmed net, tuser user) {
    for (int i = 0; i < net.index; i++) {
        if (!(strcmp(net.array[i].name, user.name))) {
            printf("\nuser.id: %d\n", net.array[i].id);
            return (net.array[i].id);
        }
    }

    return -1;
}

void initialize(tsocmed *net) {
    net->index = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            net->matrix[i][j] = 0;
        }
    }
}

void update(tsocmed *net, tuser user, int index) {
    user.id = index;
    net->array[index] = user;
}

void delete(tsocmed *net, int index) {
    net->array[index].id = -1;
    for (int column = 0; column < net->index; column++) {
        if (net->matrix[index][column] == 1)
            net->matrix[index][column] = 0;
    }

    for (int line = 0; line < net->index; line++) {
        if (net->matrix[line][index] == 1)
            net->matrix[line][index] = 0;
    }
}

void fill_gntdmat(tsocmed *net) {
    for(int i = 0; i < net->index; i++) {
        for(int j = 0; i > j; j++) {
            net->gntdmat[i][j] = find_mutual_friends(*net, i, j);
            net->gntdmat[j][i] = net->gntdmat[i][j];
        }
    }
}

//debug section

void debug_prt_gntdmat(tsocmed net) {
    for(int i = 0; i < net.index; i++) {
        for(int j = 0; j < net.index; j++) {
            printf("%d ", net.gntdmat[i][j]);
        }

        printf("\n");
    }
}

void debug_fndprt(tsocmed net, int index) {
    for (int i = 0; i < net.index; i++) {
        if (net.array[i].id == index) {
            printf("\n\tNome: %s", net.array[i].name);
            printf("\n\tEmail: %s", net.array[i].email);
            printf("\n\tLogin: %s", net.array[i].login);
            printf("\n\tData de Nascimento: %d/%d/%d\n",
                   net.array[i].birth_date.day,
                   net.array[i].birth_date.month,
                   net.array[i].birth_date.year
            );
        }
    }
}

void debug_matver(tsocmed net) {
    for (int i = 0; i < net.index; i++) {
        for (int j = 0; j < net.index; j++) {
            printf(" %d", net.matrix[i][j]);
        }

        printf("\n");
    }
}

void debug_shwarr(tsocmed net) {
    printf("\t\t\nnet.index: %d", net.index);
    printf("\t\t\nDebug_shwarr: ");

    for (int i = 0; i < net.index; i++) {
        printf("%d ", net.array[i].id);
    }
}

void debug_regrandom(tsocmed *net) {
    for (int i = 0; i < 10; i++) {
        net->array[i].id = i;
        strcpy(net->array[i].name, "name_test");
        strcpy(net->array[i].email, "email_test");
        strcpy(net->array[i].password, "password_test");
        strcpy(net->array[i].login, "login_test");
    }

    net->index = 10;
}

void debug_matrandom(tsocmed *net) {
    srand(time(NULL));

    for(int i = 0; i < net->index; i++) {
        for(int j = 0; i > j; j++) {
            net->matrix[i][j] = (rand() % (1 - 0 + 1)) + 0;
            net->matrix[j][i] = net->matrix[i][j];
        }
    }
}