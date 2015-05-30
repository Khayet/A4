#include "vec3.hpp"
#include <vector>

Vec3 operator+(Vec3 const& a, Vec3 const& b) {
  return Vec3{a.x + b.x, a.y + b.y, a.z + b.z};
}

bool operator==(Vec3 const& a, Vec3 const& b) {
  return (a.x == b.x && a.y == b.y && a.z == b.z);
}
