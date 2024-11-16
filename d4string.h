#ifndef D4STRING_H
#define D4STRING_H

#define D4NULL 0
typedef long unsigned int d4size_t;

extern d4size_t d4length(const char *source);
extern char *d4concatenate(const char *destination, const char *source);
extern char *d4nconcatenate(const char *destination, char *source, d4size_t size);
extern char *d4strcharacter(const char *destination, char character);
extern char *d4strcharacterptr(const char *destination, char character);
extern char *d4strrcharacterptr(const char *destination, char character);
extern d4size_t *d4compare(char *string1, char *string2);

#endif