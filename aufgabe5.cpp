#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "vec3.cpp"
#include <vector>
#include <numeric>
#include <functional>

TEST_CASE("accumulate", "[aufgabe5]") {
  const int num_Vec3 = 20; //size of vs

  std::vector<Vec3> vs;

  for (int i = 0; i < num_Vec3; ++i) {
    vs.push_back( { 1.1*i, 0.88*i, 2.101*i } ); //arbitrary factors
  }

  auto sum1 = std::accumulate(vs.begin(), vs.end(), Vec3{0.0, 0.0, 0.0});
  auto sum2 = std::accumulate(vs.begin(), vs.end(), Vec3{0.0, 0.0, 0.0}, 
                std::plus<Vec3>());

  auto sum3 = std::accumulate(vs.begin(), vs.end(), Vec3{0.0, 0.0, 0.0}, 
                [] (Vec3 const& lhs, Vec3 const& rhs) { return lhs + rhs; });

  REQUIRE(sum1 == sum2);
  REQUIRE(sum2 == sum3);
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
