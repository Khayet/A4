#ifndef VEC3_HPP
#define VEC3_HPP

struct Vec3
{
  double x;
  double y;
  double z;
  friend Vec3 operator+(Vec3 const& a, Vec3 const& b);
  friend bool operator==(Vec3 const& a, Vec3 const& b);
};

#endif