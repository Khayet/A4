#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "circle.hpp"
#include <vector>
#include <algorithm>

TEST_CASE("is_sorted", "[aufgabe1]") {
  std::vector<Circle> v1;

  for (unsigned int i = 0; i < 50; ++i) {
    v1.push_back( std::rand() % 100);
  }

  auto lambda = [] (Circle const& lhs, Circle const& rhs) -> bool {
                  return (lhs.radius() < rhs.radius());
                };

  std::sort(v1.begin(), v1.end(), lambda);

  REQUIRE(std::is_sorted(v1.begin(), v1.end(), lambda));
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}