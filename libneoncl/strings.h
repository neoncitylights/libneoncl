#ifndef LIBNEONCL_STRINGS_H
#define LIBNEONCL_STRINGS_H
#include <stdbool.h>
#include <stdlib.h>

char *charRepeat(char c, size_t times);
char *strRepeat(const char *str, size_t times);
char *strJoin(const char *strings[], size_t size, const char *separator);
char *strToUpper(const char *str);
char *strToLower(const char *str);
size_t strIndexOf(const char *str, char c);
size_t strLastIndexOf(const char *str, char c);
bool strStartsWith(const char *str, const char *prefix);
bool strEndsWith(const char *str, const char *suffix);
char *strSlice(const char *str, size_t start, size_t end);
char *strSliceFrom(const char *str, size_t start);

#endif // LIBNEONCL_STRINGS_H
