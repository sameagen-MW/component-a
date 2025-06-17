#include <gtest/gtest.h>
#include "cpp-package/include/greetings.h"

TEST(GreetingsTest, BehavesAsExpected) {
    EXPECT_EQ(greetings::greet("Bob"), "Hello Bob!");
    EXPECT_EQ(greetings::greet("Sue"), "Hello Sue!");
}