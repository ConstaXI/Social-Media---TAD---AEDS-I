#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../headers/friendship.h"

void make_friendship(tsocmed *net, int index_0, int index_1) {
    if ((index_0 != index_1) || index_1 > net->index || index_0 > net->index) {
        net->matrix[index_0][index_1] = 1;
        net->matrix[index_1][index_0] = 1;
    } else {
        printf("\nOcorreu um erro, verifique os IDs.\n");
    }
}

int find_popular(tsocmed net) {
    int count;
    int friends = 0;
    int id = 0;

    for (int i = 0; i < net.index; i++) {
        count = 0;

        for (int j = 0; j < net.index; j++) {
            if (net.matrix[i][j] == 1) {
                count++;
            }
        }

        if (friends < count) {
            friends = count;
            id = i;
        }
    }

    return id;
}

int verfrdshp(tsocmed net, char name_0[100], char name_1[100]) {
    tuser user_0, user_1;

    for (int i = 0; i < net.index; i++) {
        if(!strcmp(name_0, net.array[i].name)) {
            user_0 = net.array[i];
        }

        if(!strcmp(name_1, net.array[i].name)) {
            user_1 = net.array[i];
        }
    }

    if (net.matrix[user_0.id][user_1.id] == 1 && net.matrix[user_1.id][user_0.id] == 1) {
        return 1;
    }

    return 0;
}

void delfrd(tsocmed *net, int index_0, int index_1) {
    if ((index_0 != index_1) || index_1 > net->index || index_0 > net->index) {
        net->matrix[index_0][index_1] = 0;
        net->matrix[index_1][index_0] = 0;
    } else {
        printf("\nOcorreu um erro, verifique os IDs.\n");
    }
}

void prtfrds(tsocmed net, tuser user) {
    for(int i = 0; i < net.index; i++) {
        if(net.matrix[user.id][i]) {
            prtuser(net.array[i]);
        }
    }
}

int find_mutual_friends(tsocmed net, int index_0, int index_1) {
    tuser user_0, user_1;

    for (int i = 0; i < net.index; i++) {
        if(net.index == index_0) {
            user_0 = net.array[i];
        }

        if(net.index == index_1) {
            user_1 = net.array[i];
        }
    }

    if(verfrdshp(net, user_0.name, user_1.name)) {

    } else {
        printf("\nOs usuários não são amigos\n");
    }
}