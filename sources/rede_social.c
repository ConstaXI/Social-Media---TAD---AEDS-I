#include <stdio.h>

#include "../headers/rede_social.h"

void le(TUsuarios *user) {
    printf("\nDigite o nome do usuário: ");
    fflush(stdin);
    fgets(user->nome, 100, stdin);

    printf("\nDigite o email do usuário: ");
    fflush(stdin);
    fgets(user->email, 200, stdin);

    printf("\nDigite o login do usuário: ");
    fflush(stdin);
    fgets(user->login, 50, stdin);

    printf("\nDigite a senha do usuário: ");
    fflush(stdin);
    fgets(user->senha, 50, stdin);

    printf("\nData de Nascimento: ");
    printf("\nDigite o dia: ");
    fflush(stdin);
    scanf("%d", &user->data_de_nascimento.dia);

    printf("\nDigite o mês: ");
    fflush(stdin);
    scanf("%d", &user->data_de_nascimento.mes);

    printf("\nDigite o ano: ");
    fflush(stdin);
    scanf("%d", &user->data_de_nascimento.ano);
}

void cadastrar(TRedeSocial* rede, TUsuarios user) {
    le(&user);

    rede->vetor[rede->indice] = user;
    rede->indice++;
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