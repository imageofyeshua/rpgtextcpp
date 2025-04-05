#ifndef LOGGER_H
#define LOGGER_H
#include <experimental/source_location>
#include <iostream>
#include <string_view>

class Logger {
private:
  static std::string CurrentDate();

public:
  Logger() {};
  ~Logger() = default;

  static void Log(const std::string_view message);
  static void Error(const std::string_view message,
                    std::experimental::source_location location =
                        std::experimental::source_location::current());
};

#endif // !LOGGER_H
