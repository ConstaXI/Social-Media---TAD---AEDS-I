#include <stdio.h>

#include "../headers/rede_social.h"

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

void reg(tsocmed* rede, tuser user) {
    read(&user);
    user.id = rede->index;

    rede->array[rede->index] = user;
    rede->index++;

    prtuser(user);
}

void fndprt(tsocmed net, int index) {
    for(int i = 0; i < net.index; i++) {
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

void prtuser(tuser user) {
    printf("\nNome: %s", user.name);
    printf("\nEmail: %s", user.email);
    printf("\nLogin: %s", user.login);
    printf("\nData de Nascimento: %d/%d/%d",
       user.birth_date.day,
       user.birth_date.month,
       user.birth_date.year
    );
}