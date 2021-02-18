#include "../headers/friendship.h"

void make_friendship(tsocmed *net, int index_0, int index_1) {
    net->matrix[index_0][index_1] = 1;
    net->matrix[index_1][index_0] = 1;
}

void find_popular(tsocmed net) {

}