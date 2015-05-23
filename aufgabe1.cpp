#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "circle.hpp"
#include <vector>

template<typename T>
class less {
  public:
    bool operator() (T const& l, T const& r) {
      return l < r;
    }
};

TEST_CASE("is_sorted", "[aufgabe1]") {
  std::vector<Circle> v1(50, std::rand() % 100);

  less<Circle> kleiner;

  std::sort(v1.begin(), v1.end(), kleiner);

}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}