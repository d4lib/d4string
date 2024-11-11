#ifndef D4STRING_H
#define D4STRING_H

extern long unsigned int d4length(const char *source);
extern char *d4concatenate(const char *destination, const char *source);
extern char *d4nconcatenate(const char *destination, char *source, long unsigned int size);
extern char *d4strcharacter(const char *destination, char character);

#endif