#include <stdio.h>
#include "d4string.h"

int main() {
    char *string = "I like";
    printf("%s\n", d4concatenate(string, " chocolate"));
    return 0;
}