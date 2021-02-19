#ifndef SOCIAL_MEDIA_FRIENDSHIP_H
#define SOCIAL_MEDIA_FRIENDSHIP_H

#include "rede_social.h"

void make_friendship(tsocmed *net, int index_0, int index_1);

int find_popular(tsocmed net);

int find_mutual_friends(tsocmed net, int index_0, int index_1);

int verfrdshp(tsocmed net, char name_0[100], char name_1[100]);

void delfrd(tsocmed *net, int index_0, int index_1);

void prtfrds(tsocmed net, tuser user);

void fndsol(tsocmed *net);

void fndrel(tsocmed net);

#endif //SOCIAL_MEDIA_FRIENDSHIP_H
