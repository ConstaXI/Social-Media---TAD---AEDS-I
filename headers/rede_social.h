//
// Created by DaviB on 29/01/2021.
//

#ifndef SOCIAL_MEDIA_REDE_SOCIAL_H
#define SOCIAL_MEDIA_REDE_SOCIAL_H


typedef struct date {
    int day;
    int month;
    int year;
} tdate;

typedef struct user {
    char name[100];
    char email[200];
    char login[50];
    char password[50];
    tdate birth_date;
    int id;
} tuser;

typedef struct social_media {
    tuser array[100];
    int matrix[100][100];
    int index;
} tsocmed;

void read(tuser *user);

void prtuser(tuser user);

void reg(tsocmed *rede, tuser user);

int findone(tsocmed net, tuser user);

void update(tsocmed *net, tuser user, int index);

void initialize(tsocmed *net);

void delete(tsocmed *net, int i);

void fndprt(tsocmed rede, int index);

void matver(tsocmed net);

#endif //SOCIAL_MEDIA_REDE_SOCIAL_H
