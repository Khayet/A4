#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <vector>
#include <algorithm>

TEST_CASE("all_of", "[aufgabe3]") {
  std::vector<int> v1{1,2,3,4,5};
  std::vector<int> v2{9,8,7,6,5};
  std::vector<int> v3(5);

  auto add = [] (const int first, const int second) {
    return first + second;
  };

  std::transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), add);
  REQUIRE(std::all_of(v3.begin(), v3.end(), 
    [](const int elem) { return (elem == 10); } ));
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}