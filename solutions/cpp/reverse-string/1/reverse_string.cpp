#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
std::string reverse_string(std::string word){

    
    int wordsize = word.length();

    std::string reversed_string{""};

    for (int i = 0; i < wordsize; i++){
        reversed_string += word.at(wordsize-i-1);
    }

    return reversed_string;

}
}  // namespace reverse_string
