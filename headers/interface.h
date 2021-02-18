#ifndef SOCIAL_MEDIA_INTERFACE_H
#define SOCIAL_MEDIA_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>

#include "rede_social.h"
#include "friendship.h"

void MSG_MENU();

void MSG_SUBMENU_0(int module_number);

void MSG_SUBMENU_1(int module_number);

void MSG_DEBUG_MENU(int module_number);

void submenu_0(tsocmed *net, tuser user);

void submenu_1(tsocmed *net, tuser user);

void debug_menu(tsocmed *net, tuser user);

#endif //SOCIAL_MEDIA_INTERFACE_H
