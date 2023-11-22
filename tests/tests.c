#include <assert.h>
#include <string.h>

#include "../src/ncl_string.h"

void assertStrEquals(const char *s1, const char *s2) {
	assert(strcmp(s1, s2) == 0);
}

void testCharRepeat() {
	assertStrEquals(charRepeat('z', 0), "");
	assertStrEquals(charRepeat('a', 5), "aaaaa");
}

void testStrRepeat() {
	assertStrEquals(strRepeat("Foo", 0), "");
	assertStrEquals(strRepeat("Foo", 2), "FooFoo");
	assertStrEquals(strRepeat("FooBar", 3), "FooBarFooBarFooBar");
}

void testStrToLower() {
	assertStrEquals(strToLower(""), "");
	assertStrEquals(strToLower("AHH"), "ahh");
	assertStrEquals(strToLower("moo"), "moo");
}

void testStrToUpper() {
	assertStrEquals(strToUpper(""), "");
	assertStrEquals(strToUpper("AHH"), "AHH");
	assertStrEquals(strToUpper("meow"), "MEOW");
}
