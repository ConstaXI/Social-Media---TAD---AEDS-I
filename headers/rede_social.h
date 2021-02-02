//
// Created by DaviB on 29/01/2021.
//

#ifndef SOCIAL_MEDIA_REDE_SOCIAL_H
#define SOCIAL_MEDIA_REDE_SOCIAL_H


typedef struct data {
    int dia;
    int mes;
    int ano;
} TData;

typedef struct usuarios {
    char nome[100];
    char email[200];
    char login[50];
    char senha[50];
    TData data_de_nascimento;
    int ID;
} TUsuarios;

typedef struct redeSocial {
    TUsuarios vetor[100];
    int matrix[100][100];
    int indice;
} TRedeSocial;

void le(TUsuarios *user);
void imprime(TUsuarios user);
void cadastrar(TRedeSocial* rede, TUsuarios user);


#endif //SOCIAL_MEDIA_REDE_SOCIAL_H
