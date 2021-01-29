#include <stdio.h>

#include "../headers/rede_social.h"

int le(TUsuarios *user) {
    printf("\nDigite o nome do usu�rio: ");
    fflush(stdin);
    fgets(user->nome, 100, stdin);

    printf("\nDigite o email do usu�rio: ");
    fflush(stdin);
    fgets(user->email, 200, stdin);

    printf("\nDigite o login do usu�rio: ");
    fflush(stdin);
    fgets(user->login, 50, stdin);

    printf("\nDigite a senha do usu�rio: ");
    fflush(stdin);
    fgets(user->senha, 50, stdin);

    printf("\nData de Nascimento: ");
    printf("\nDigite o dia: ");
    fflush(stdin);
    scanf("%d", &user->data_de_nascimento.dia);

    if(user->data_de_nascimento.dia > 31 || user->data_de_nascimento.dia < 0) {
        user->data_de_nascimento.dia = 0;

        return 1;
    }

    printf("\nDigite o m�s: ");
    fflush(stdin);
    scanf("%d", &user->data_de_nascimento.mes);

    if(user->data_de_nascimento.mes > 12 || user->data_de_nascimento.mes < 0) {
        user->data_de_nascimento.mes = 0;

        return 1;
    }

    printf("\nDigite o ano: ");
    fflush(stdin);
    scanf("%d", &user->data_de_nascimento.ano);

    if(user->data_de_nascimento.ano > 2021 || user->data_de_nascimento.ano < 1900) {
        user->data_de_nascimento.ano = 0;

        return 1;
    }

    return 0;
}

void imprime(TUsuarios user) {
    printf("\nNome: %s", user.nome);
    printf("\nEmail: %s", user.email);
    printf("\nLogin: %s", user.login);
    printf("\nData de Nascimento: %d/%d/%d",
           user.data_de_nascimento.dia,
           user.data_de_nascimento.mes,
           user.data_de_nascimento.ano
    );
}