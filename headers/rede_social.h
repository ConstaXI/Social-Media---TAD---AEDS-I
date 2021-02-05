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

void fndprt(tsocmed rede, int index);

void prtuser(tuser user);

void reg(tsocmed *rede, tuser user);

void matinit(tsocmed *net);

void matver(tsocmed net);

#endif //SOCIAL_MEDIA_REDE_SOCIAL_H
