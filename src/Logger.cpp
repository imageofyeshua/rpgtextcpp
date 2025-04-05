#include "Logger.h"
#include "./utilities/Colors.h"
#include <chrono>
#include <ctime>
#include <experimental/source_location>
#include <iostream>

std::string Logger::CurrentDate() {
  std::time_t now =
      std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

  std::string output(30, '\0');
  std::strftime(&output[0], output.size(), "%y-%m-%d %H:%M:%S",
                std::localtime(&now));

  return output;
}

void Logger::Log(const std::experimental::string_view message) {
  std::cout << GREEN << "LOG: " << CurrentDate() << " - " << message << RESET
            << "\n";
}

void Logger::Error(const std::experimental::string_view message,
                   std::experimental::source_location location) {
  std::cout << RED << "ERROR: " << CurrentDate() << " - " << message
            << " FILE: " << location.file_name()
            << " FUNC: " << location.function_name()
            << " LINE: " << location.line() << RESET << "\n";
}
