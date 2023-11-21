#ifndef NCL_STRINGS_H_
#define NCL_STRINGS_H_
#include <stdbool.h>
#include <stdlib.h>

char *charRepeat(char c, size_t times);
char *strRepeat(const char *str, size_t times);
char *strJoin(const char *strings[], size_t size, char *separator);
char *strToUpper(const char *str);
char *strToLower(const char *str);
int strIndexOf(const char *str, char c);
int strLastIndexOf(const char *str, char c);
bool strStartsWith(const char *str, const char *prefix);
bool strEndsWith(const char *str, const char *suffix);
char *strSlice(const char *str, size_t start, size_t end);
char *strSliceFrom(const char *str, size_t start);

#endif // NCL_STRINGS_H_
