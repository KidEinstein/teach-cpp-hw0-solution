#include "logger.hpp"
Logger::Logger() {
  myFile.open("test_results.txt");
}
Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}
void Logger::logScore(std::string test_case, float points, float max_points) {
  myFile << "{" << "\"test_case\":\"" << test_case << "\",\"points\":" << points << ",\"max_points\":" << max_points << "}" << std::endl;
}
Logger::~Logger() {
  myFile.close();
}
