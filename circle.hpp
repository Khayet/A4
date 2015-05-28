#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle 
{
  public:
    Circle();
    Circle(const double);
    double radius() const {return radius_;}

  private:
    double radius_;
};

#endif