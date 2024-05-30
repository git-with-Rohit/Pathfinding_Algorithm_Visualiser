#include "Logger.h"

Logger::Logger(const std::string& filename) {
    mLogFile.open(filename, std::ios::out | std::ios::app);
    if (!mLogFile.is_open()) {
        std::cerr << "Failed to open log file: " << filename << std::endl;
    }
}

void Logger::log(const std::string& message) {
    if (mLogFile.is_open()) {
        mLogFile << message << std::endl;
    }
    std::cout << message << std::endl;
}
