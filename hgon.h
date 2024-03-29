//
// Created by magom on 20.10.2019.
//

#ifndef OOP_EXERCISE_03_8GON_H
#define OOP_EXERCISE_03_8GON_H

#include "figure.h"

struct hgon : figure{
private:
    point a1,a2,a3,a4,a5,a6,a7,a8;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    double square() const override ;
    hgon() = default;
    hgon(std::istream& is);

};


#endif //OOP_EXERCISE_03_8GON_H
