#include "raindrops.h"
#include <string>

namespace raindrops {

std::string convert(int num){
    std::string sound{""};

    if (num % 3 == 0) {
        sound = sound + "Pling";
    }

    if (num % 5 == 0) {
        sound = sound + "Plang";
    }

    if (num % 7 == 0) {
        sound = sound + "Plong";
    }

    if (sound == "") {
        return std::to_string(num);
    }

    return sound;
}
// TODO: add your solution here

}  // namespace raindrops
