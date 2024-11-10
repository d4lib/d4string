#include <stdio.h>
#include "d4string.h"

int main() {
    char *string = "Danin";
    char *source = " likes C";

    // get the length of a string
    printf("%ld\n", d4length(string));

    // concatenate two strings
    printf("%s\n", d4concatenate(string, source));
    return 0;
}