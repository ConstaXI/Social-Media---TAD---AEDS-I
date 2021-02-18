#include <stdio.h>

#include "../headers/friendship.h"

void make_friendship(tsocmed *net, int index_0, int index_1) {
    if (index_0 != index_1) {
        net->matrix[index_0][index_1] = 1;
        net->matrix[index_1][index_0] = 1;
    } else {
        printf("\nO usuário não pode ser amigo de si\n");
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

int verfrdshp(tsocmed net, int index_0, int index_1) {

}