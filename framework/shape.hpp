#ifndef SHAPE_HPP
#define SHAPE_HPP



class Shape
{
public:
  virtual double area() const = 0;

  virtual double volume() const = 0;

  virtual void draw() const = 0;    //keine Implementierung auf dieser Ebene
};

#endif
