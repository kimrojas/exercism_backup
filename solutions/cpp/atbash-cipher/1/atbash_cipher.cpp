#include "atbash_cipher.h"

namespace atbash_cipher {

std::string plain{"abcdefghijklmnopqrstuvwxyz"};
std::string cipher{"zyxwvutsrqponmlkjihgfedcba"};

// TODO: add your solution here
std::string encode(std::string msg){
    std::string encoded_msg{""};

    int i = 0;
    for (char &x : msg) {
        if (! std::isdigit(x) and ! std::isalpha(x)) continue;
       
        if (i % 5 == 0 and i != 0) {
            encoded_msg += " ";
        }

        if (std::isdigit(x)){
            encoded_msg += x;
            i++;
        }
        else if (std::isalpha(x)) {
            encoded_msg += cipher.at(plain.find(tolower(x)));
            i++;
        }


    }
    return encoded_msg;
}

std::string decode(std::string msg) {
    std::string decoded_msg{""};
    
    for (char &x : msg) {
    
        if (x == ' ') continue;

        if (std::isdigit(x)){
            decoded_msg += x;
        }
        else if (std::isalpha(x)) {
            decoded_msg += plain.at(cipher.find(tolower(x)));
        }
    }

    return decoded_msg;
}

}  // namespace atbash_cipher
