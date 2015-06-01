#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "circle.hpp"
#include <vector>
#include <algorithm>

struct less 
{
  bool operator() (Circle const& lhs, Circle const& rhs) {
    return lhs.radius() < rhs.radius();
  }
};

TEST_CASE("is_sorted", "[aufgabe2]") {
  const int size_v1 = 50;
  std::vector<Circle> v1;

  for (unsigned int i = 0; i < size_v1; ++i) {
    v1.push_back( std::rand() % 100);
  }

  std::sort(v1.begin(), v1.end(), less{});

  REQUIRE(std::is_sorted(v1.begin(), v1.end(), less{}));
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}