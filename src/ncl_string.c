#include "ncl_string.h"
#include <string.h>
#include <ctype.h>

char* strJoin(const char* strings[], size_t size, char* separator) {
	int total_size = 0;
	for (size_t i = 0; i < size; i++) {
		total_size += strlen(strings[i]);
	}

	total_size += strlen(separator) * (size - 1);
	char* joined = malloc(total_size);

	for (size_t i = 0; i < size; i++) {
		strcat(joined, strings[i]);
		if (i < size - 1) {
			strcat(joined, separator);
		}
	}

	return joined;
}

char* charRepeat(const char c, size_t times) {
	char* repeat = malloc(times + 1);
	for (size_t i = 0; i < times; i++) {
		repeat[i] = c;
	}
	repeat[times] = '\0';

	return repeat;
}

char* strRepeat(const char* str, size_t times) {
	char* repeat = malloc(times * strlen(str) + sizeof('\0'));
	for (size_t i = 0; i < times; i++) {
		strcat(repeat, str);
	}

	return repeat;
}

char* strToLower(const char* str) {
	char* lower = malloc(strlen(str));
	for (size_t i = 0; i < strlen(str); i++) {
		const char buffer[] = {tolower(str[i]), '\0'};
		strcat(lower, buffer);
	}

	return lower;
}

char* strToUpper(const char* str) {
	char* upper = malloc(strlen(str));
	for (size_t i = 0; i < strlen(str); i++) {
		const char buffer[] = {toupper(str[i]), '\0'};
		strcat(upper, buffer);
	}

	return upper;
}

int strIndexOf(const char* str, const char c) {
	for (size_t i = 0; i < strlen(str); i++) {
		if (str[i] == c) {
			return i;
		}
	}

	return -1;
}

int strLastIndexOf(const char* str, const char c) {
	for (size_t i = strlen(str); i > 0; i--) {
		if (str[i] == c) {
			return i;
		}
	}

	return -1;
}

bool strStartsWith(const char* str, const char* prefix) {
	if (strlen(prefix) > strlen(str)) {
		return false;
	}

	while (*prefix) {
		if (*prefix != *str) {
			return false;
		}
		prefix++;
		str++;
	}
	return true;
}

bool strEndsWith(const char *str, const char* suffix) {
	size_t str_len = strlen(str);
	size_t suffix_len = strlen(suffix);

	// If the suffix is longer than the string, it can't be its ending
	if (suffix_len > str_len) {
		return false;
	}

	while (suffix_len > 0) {
		if (str[--str_len] != suffix[--suffix_len]) {
			return false;
		}
	}

	return true;
}

char* strSlice(const char* str, size_t start, size_t end) {
	const size_t len = end - start;
	char* slice = malloc(len + 1);

	for (size_t i = 0; i < len; i++) {
		slice[i] = str[i];
	}

	return slice;
}

char* strSliceFrom(const char* str, size_t start) {
	const size_t strLen = strlen(str) - start;
	char* slice = malloc(strLen);

	size_t j = 0;
	for (size_t i = 0; i < strLen; i++) {
		slice[j] = str[i];
		j++;
	}

	return slice;
}
