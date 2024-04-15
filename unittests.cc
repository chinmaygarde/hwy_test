#include "gtest/gtest.h"
#include <numeric>
#include <vector>

TEST(Playground, CanInitializeLibrary) {
  std::vector<int> list(1000);
  std::iota(list.begin(), list.end(), 1);
}
