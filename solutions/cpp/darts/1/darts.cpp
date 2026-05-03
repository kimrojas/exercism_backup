#include "darts.h"

namespace darts {

// TODO: add your solution here
double radius(double x, double y){
    return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
}

int score(double x, double y) {
    double rad{radius(x, y)};

    if (rad > 10) {
        return 0;
    }
    else if (rad > 5) {
        return 1;
    }
    else if (rad > 1) {
        return 5;
    }
    else {
        return 10;
    }

}

}  // namespace darts
