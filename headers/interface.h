#ifndef SOCIAL_MEDIA_INTERFACE_H
#define SOCIAL_MEDIA_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>

#include "rede_social.h"

void MSG_MENU();

void MSG_SUBMENU(int module_number);

void submenu_0(tsocmed *net, tuser user);

void submenu_1(tsocmed *net, tuser user);

#endif //SOCIAL_MEDIA_INTERFACE_H
