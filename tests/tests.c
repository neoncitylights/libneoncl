#include <assert.h>
#include <string.h>
#include <gtest/gtest.h>
#include "../src/ncl_string.h"

TEST(LIBNEONCL_STRINGS, MethodCharRepeat) {
	EXPECT_STREQ(charRepeat('z', 0), "");
	EXPECT_STREQ(charRepeat('a', 5), "aaaaa");
}

TEST(LIBNEONCL_STRINGS, MethodStrRpeat) {
	EXPECT_STREQ(strRepeat("Foo", 0), "");
	EXPECT_STREQ(strRepeat("Foo", 2), "FooFoo");
	EXPECT_STREQ(strRepeat("FooBar", 3), "FooBarFooBarFooBar");
}

TEST(LIBNEONCL_STRINGS, MethodStrToLower) {
	EXPECT_STREQ(strToLower(""), "");
	EXPECT_STREQ(strToLower("AHH"), "ahh");
	EXPECT_STREQ(strToLower("moo"), "moo");
}

TEST(LIBNEONCL_STRINGS, MethodStrToUpper) {
	EXPECT_STREQ(strToUpper(""), "");
	EXPECT_STREQ(strToUpper("AHH"), "AHH");
	EXPECT_STREQ(strToUpper("meow"), "MEOW");
}
