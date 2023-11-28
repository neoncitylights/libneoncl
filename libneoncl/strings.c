#include "strings.h"
#include <ctype.h>
#include <string.h>

char* strJoin(const char* strings[], size_t size, const char* separator) {
	size_t total_size = strlen(separator) * (size - 1);
	for (size_t i = 0; i < size; i++) {
		total_size += strlen(strings[i]);
	}

	char* joined = malloc(total_size);
	if (joined == NULL) {
		return joined;
	}

	for (size_t i = 0; i < size; i++) {
		strcat(joined, strings[i]);
		if (i < size - 1) {
			strcat(joined, separator);
		}
	}
	joined[total_size] = '\0';

	return joined;
}

char* charRepeat(const char c, size_t times) {
	char* repeat = malloc(times + 1);
	if (repeat == NULL) {
		return repeat;
	}

	for (size_t i = 0; i < times; i++) {
		repeat[i] = c;
	}
	repeat[times] = '\0';

	return repeat;
}

char* strRepeat(const char* str, size_t times) {
	const size_t len = times * strlen(str) + 1;
	char* repeat = malloc(len);
	if (repeat == NULL) {
		return repeat;
	}

	for (size_t i = 0; i < times; i++) {
		strcat(repeat, str);
	}
	repeat[len] = '\0';

	return repeat;
}

char* strToLower(const char* str) {
	const size_t len = strlen(str);
	char* lower = malloc(len + 1);
	if (lower == NULL) {
		return lower;
	}

	for (size_t i = 0; i < len; i++) {
		const char buffer[] = {tolower(str[i]), '\0'};
		strcat(lower, buffer);
	}
	lower[len] = '\0';

	return lower;
}

char* strToUpper(const char* str) {
	const size_t len = strlen(str);
	char* upper = malloc(len + 1);
	if (upper == NULL) {
		return upper;
	}

	for (size_t i = 0; i < len; i++) {
		const char buffer[] = {toupper(str[i]), '\0'};
		strcat(upper, buffer);
	}
	upper[len] = '\0';

	return upper;
}

size_t strIndexOf(const char* str, const char c) {
	for (size_t i = 0; i < strlen(str); i++) {
		if (str[i] == c) {
			return i;
		}
	}

	return NULL;
}

size_t strLastIndexOf(const char* str, const char c) {
	for (size_t i = strlen(str); i > 0; i--) {
		if (str[i] == c) {
			return i;
		}
	}

	return NULL;
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
	if (slice == NULL) {
		return slice;
	}

	for (size_t i = 0; i < len; i++) {
		slice[i] = str[i];
	}
	slice[len] = '\0';

	return slice;
}

char* strSliceFrom(const char* str, size_t start) {
	return strSlice(str, start, strlen(str));
}
