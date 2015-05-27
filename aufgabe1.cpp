#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "circle.hpp"
#include <vector>

TEST_CASE("is_sorted", "[aufgabe1]") {
  std::vector<Circle> v1(50);
  for (auto&& i : v1) {
    i = std::rand() % 50;
  }

  std::sort(v1.begin(), v1.end(), 
            [] (Circle const& lhs, Circle const& rhs) 
            { return lhs.radius() < rhs.radius(); } );
  REQUIRE(v1.at(12).radius() < v1.at(43).radius());
  REQUIRE( !(v1.at(44).radius() < v1.at(0).radius()) );
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}