#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int delim = line.find(":");
    return line.substr(delim+2);
}

std::string log_level(std::string line) {
    // return the log level
    int delim1 = line.find("[");
    int delim2 = line.find("]");
    return line.substr(delim1+1, delim2-delim1-1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return std::string {message(line) + " (" + log_level(line) + ")"};
}
}  // namespace log_line
