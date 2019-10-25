#include <iostream>
#include <vector>
#include "point.h"
#include "figure.h"
#include "pentagon.h"
#include "hexagon.h"
#include "8gon.h"

void menu() {
    std::cout << "1 - add\n"
                 "2 - delete\n"
                 "3 - call common functions for the entire array\n"
                 "4 - total area\n"
                 "5 - exit\n";
}

int choice() {
    int i;
    std::cin >> i;
    return i;
}



int main() {
    std::vector<figure*> v;
    int i,j;
    double S;
    menu();
    while ((i = choice()) != 5) {
        switch (i)
        {
            case 1:
                figure* f;
                std::cout << " 5 - pentagon\n 6 - hexagon\n 8 - 8gon\n";
                std::cin >> j;
                if ( j == 5 ) {
                    point p1,p2,p3,p4,p5;
                    std::cin >> p1 >> p2 >> p3 >> p4 >> p5;
                    f = new pentagon(p1,p2,p3,p4,p5);
                    v.push_back(f);
                }
                else if ( j == 6 ) {
                    point p1,p2,p3,p4,p5,p6;
                    std::cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6;
                    f = new hexagon(p1,p2,p3,p4,p5,p6);
                    v.push_back(f);
                }
                else if ( j == 8 ) {
                    point p1,p2,p3,p4,p5,p6,p7,p8;
                    std::cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7 >> p8;
                    f = new heptagon(p1,p2,p3,p4,p5,p6,p7,p8);
                    v.push_back(f);
                }
                break;
            case 2:
                std::cout << " enter index\n";
                std::cin >> j;
				if ( j >= v.size() )
						break;
                delete v[j];
                for (; j < v.size() - 1; ++j) {
                    v[j] = v[j + 1];
                }
                v.pop_back();
                break;
            case 3:
                for (auto elem: v) {
                    elem->print(std::cout);
                    std::cout << elem->center() << std::endl;
                    std::cout << elem->square() << std::endl;
                }
                break;
            case 4:
                S = 0;
                for (auto elem: v) {
                    S+=elem->square();
                }
				std::cout << S << std::endl;
                break;
            default:
                std::cout << " error\n";
                break;
        }
    }
    return 0;
}
