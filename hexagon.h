//
// Created by magom on 20.10.2019.
//

#ifndef OOP_EXERCISE_03_HEXAGON_H
#define OOP_EXERCISE_03_HEXAGON_H


#include "figure.h"

struct hexagon : figure{
private:
    point a1,a2,a3,a4,a5,a6;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    double square() const override ;
    hexagon() = default;
    hexagon(point p1,point p2,point p3,point p4,point p5,point p6);

};


#endif //OOP_EXERCISE_03_HEXAGON_H
