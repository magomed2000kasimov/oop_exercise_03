//
// Created by magom on 20.10.2019.
//

#ifndef OOP_EXERCISE_03_PENTAGON_H
#define OOP_EXERCISE_03_PENTAGON_H

#include "figure.h"

struct pentagon : figure{
private:
    point a1,a2,a3,a4,a5;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    double square() const override ;
    pentagon() = default;
    pentagon(std::istream& is);
};


#endif //OOP_EXERCISE_03_PENTAGON_H
