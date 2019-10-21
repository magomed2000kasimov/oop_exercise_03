//
// Created by magom on 20.10.2019.
//

#ifndef OOP_EXERCISE_03_HEPTAGON_H
#define OOP_EXERCISE_03_HEPTAGON_H

#include "figure.h"

struct heptagon : figure{
private:
    point a1,a2,a3,a4,a5,a6,a7;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    double square() const override ;
    heptagon() = default;
    heptagon(point p1,point p2,point p3,point p4,point p5,point p6,point p7);

};


#endif //OOP_EXERCISE_03_HEPTAGON_H
