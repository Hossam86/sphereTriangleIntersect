#ifndef SPHERE_H
#define SPHERE_H
#include "v3.h"
class sphere
{
  private:
    /* data */
    double radius;
    v3 center;

  public:
    sphere();
    sphere(const v3 &c, double r); // arg constructor
    sphere(const sphere &);
    sphere &operator=(const sphere &rhs);
    const v3& getCenter()const; 
    double getRaduis();
    ~sphere();
};
#endif