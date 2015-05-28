#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "circle.hpp"
#include <vector>
#include <algorithm>

struct less 
{
  bool operator() (Circle const& lhs, Circle const& rhs) {
    return (lhs.radius() < rhs.radius());
  }
};

TEST_CASE("is_sorted", "[aufgabe2]") {
  std::vector<Circle> v1;

  //fill with circles of random radius:
  for (unsigned int i = 0; i < 50; ++i) {
    v1.push_back( std::rand() % 100);
  }

  less kleiner;

  std::sort(v1.begin(), v1.end(), kleiner);

  REQUIRE(std::is_sorted(v1.begin(), v1.end(), kleiner));
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}