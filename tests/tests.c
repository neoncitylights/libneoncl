#include <assert.h>
#include <string.h>

#include "../src/ncl_string.h"

void testCharRepeat() {
	assert(strcmp(charRepeat('z', 0), ""));
	assert(strcmp(charRepeat('a', 5), "aaaaa"));
}

void testStrRepeat() {
	assert(strcmp(strRepeat("Foo", 0), ""));
	assert(strcmp(strRepeat("Foo", 2), "FooFoo"));
	assert(strcmp(strRepeat("FooBar", 3), "FooBarFooBarFooBar"));
}

void testStrToLower() {
	assert(strcmp(strToLower(""), ""));
	assert(strcmp(strToLower("AHH"), "ahh"));
	assert(strcmp(strToLower("moo"), "moo"));
}

void testStrToUpper() {
	assert(strcmp(strToUpper(""), ""));
	assert(strcmp(strToUpper("AHH"), "AHH"));
	assert(strcmp(strToUpper("meow"), "MEOW"));
}
