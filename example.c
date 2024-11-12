#include <stdio.h>
#include "d4string.h"

int main() {
    char *string = "d4";
    char *source = "string";

    // get the length of a string
    printf("%ld\n", d4length(string));

    // concatenate two strings
    printf("%s\n", d4concatenate(string, source));

    // concatenate two strings with no more than the paramater n
    printf("%s\n", d4nconcatenate(string, source, 3));

    // return the first appearance of a character in the string
    printf("%s\n", d4strcharacter(source, 'n'));

    // return the pointer of the first appearance of a character in the string
    printf("%s\n", d4strcharacterptr(source, 'r'));

    // return the pointer of the last appearance of a character in the string
    printf("%s\n", d4strrcharacterptr("Hello, world!", 'o'));
    return 0;
}