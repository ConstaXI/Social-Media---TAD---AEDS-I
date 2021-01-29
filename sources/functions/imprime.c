#include <stdio.h>

#include "../../headers/imprime.h"

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