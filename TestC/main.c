//
//  main.c
//  TestC
//
//  Created by Leong Ping How on 31/01/2021.
//

#include <stdio.h>
#include "encrypt.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    char mesg[] = "test message";
    char *text = mesg;
    printf("before... %s\n", text);
    printf("%s\n",my_encrypt(text));
    printf("Done\n");
    return 0;
}
