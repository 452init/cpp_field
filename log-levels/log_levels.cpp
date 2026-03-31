#include <string>

namespace log_line {
std::string message(std::string line) {
    int startIndex = line.find(": ");
    std::string logMessage = line.substr(startIndex + 2);
    return logMessage;
}

std::string log_level(std::string line) {
    int endIndex = line.find("]");
    std::string logLevel = line.substr(1, endIndex - 1);
    return logLevel;
}

std::string reformat(std::string line) {
    int startIndx = line.find(": ");
    std::string myLogMessage = line.substr(startIndx + 2);

    int character = line.find("]");
    std::string myLogLevel = line.substr(1, character - 1);
    return myLogMessage + " (" + myLogLevel + ")";
}
}
