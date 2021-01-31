//
//  encrypt.c
//  TestC
//
//  Created by Leong Ping How on 31/01/2021.
//
#include <stdio.h>
#include "encrypt.h"

char* my_encrypt(char *message) {
    while (*message) {
        *message = *message ^ 31;
        message++;
    }
    printf("encrypt=%s", message);
    return message;
}
