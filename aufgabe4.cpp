#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "circle.cpp"
#include <vector>
#include <algorithm>

TEST_CASE("copy_if", "[aufgabe4]") {

  //circle constructor has double as parameter
  std::vector<Circle> circles{{4.0}, {3.0}, {8.0}, {1.0}, {5.0}};
  std::vector<Circle> big_circles(circles.size());

  auto lambda = [] (Circle const& c) {return (c.radius() > 3.0);};

  //erase needed, because copy_if cannot insert elements
  //std::back_inserter
  big_circles.erase(
    std::copy_if(circles.begin(), circles.end(), big_circles.begin(), lambda),
    big_circles.end());

  REQUIRE(std::all_of(big_circles.begin(), big_circles.end(), lambda));
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}