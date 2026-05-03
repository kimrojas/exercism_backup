#include "darts.h"

namespace darts {

// TODO: add your solution here

int score(double x, double y) {
    double rad{std::sqrt(x*x + y*y)};

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
