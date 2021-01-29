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
    int ID;                     // deverá ser gerado pelo programa e igual ao índice do elemento cadastrado
                                // no vetor (lista)
} TUsuarios;

typedef struct redeSocial {
    TUsuarios vetor[100];       // lista de usuários
    int matrix[100][100];       // matriz de relacionamentos de amizade
    int indice;                 // indica a posição em que o próximo elemento vai ser inserido na lista e
                                // também informa a quantidade de usuários cadastrados na lista
} TRedeSocial;

int le(TUsuarios *user);
void imprime(TUsuarios user);


#endif //SOCIAL_MEDIA_REDE_SOCIAL_H
