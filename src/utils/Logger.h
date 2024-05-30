#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>
#include <iostream>

/**
 * @class Logger
 * @brief Utility class for logging messages to a file and console.
 * 
 * This class provides a simple interface to log messages to a specified
 * log file and optionally to the console.
 */
class Logger {
public:
    /**
     * @brief Constructs a new Logger object.
     * 
     * @param filename The name of the log file.
     */
    Logger(const std::string& filename);

    /**
     * @brief Logs a message to the log file and console.
     * 
     * @param message The message to be logged.
     */
    void log(const std::string& message);

private:
    std::ofstream mLogFile;
};

#endif // LOGGER_H
