#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "vec3.cpp"
#include <vector>
#include <numeric>

TEST_CASE("accumulate", "[aufgabe5]") {
  std::vector<Vec3> v1;
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
