#include <gtest/gtest.h>
#include <mathutils/add.hpp>

TEST(mathutils, add) {
  ASSERT_EQ(3, add(1, 2));
  ASSERT_EQ(7, add(4, 3));
}
