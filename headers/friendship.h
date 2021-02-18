#ifndef SOCIAL_MEDIA_FRIENDSHIP_H
#define SOCIAL_MEDIA_FRIENDSHIP_H

#include "rede_social.h"

void make_friendship(tsocmed *net, int index_0, int index_1);

int find_popular(tsocmed net);

int find_mutual_friends(tsocmed net, int index_0, int index_1);

int verfrdshp(tsocmed net, int index_0, int index_1);

#endif //SOCIAL_MEDIA_FRIENDSHIP_H
