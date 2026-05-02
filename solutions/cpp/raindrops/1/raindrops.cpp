#include "raindrops.h"
#include <string>

namespace raindrops {

std::string convert(int num){
    std::string sound{""};
    int is_div = 0;

    if (num % 3 == 0) {
        sound = sound + "Pling";
        is_div = 1;
    }

    if (num % 5 == 0) {
        sound = sound + "Plang";
        is_div = 1;
    }

    if (num % 7 == 0) {
        sound = sound + "Plong";
        is_div = 1;
    }

    if (is_div == 0) {
        return std::to_string(num);
    }

    return sound;
}
// TODO: add your solution here

}  // namespace raindrops
