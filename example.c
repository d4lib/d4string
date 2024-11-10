#include <stdio.h>
#include "d4string.h"

int main() {
    char *string = "d4";
    char *source = "string";

    // get the length of a string
    printf("%ld\n", d4length(string));

    // concatenate two strings
    printf("%s\n", d4concatenate(string, source));

    // concatenate two strings with the paramater n
    printf("%s\n", d4nconcatenate(string, source, 3));
    return 0;
}