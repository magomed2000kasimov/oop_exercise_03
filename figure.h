//
// Created by magom on 20.10.2019.
//

#ifndef OOP_EXERCISE_03_FIGURE_H
#define OOP_EXERCISE_03_FIGURE_H

#include <iostream>
#include "point.h"

struct figure {
    virtual point center() const = 0;
    virtual void print(std::ostream&) const = 0 ;
    virtual double square() const = 0;
    virtual ~figure() = default;
};

#endif //OOP_EXERCISE_03_FIGURE_H
