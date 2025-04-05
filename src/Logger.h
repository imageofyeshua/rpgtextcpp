#ifndef LOGGER_H
#define LOGGER_H
#include <experimental/source_location>
#include <experimental/string_view>
#include <string>

#define TRPG_LOG(x) Logger::Log(x);
#define TRPG_ERROR(x) Logger::Error(x);

class Logger {
private:
  static std::string CurrentDate();

public:
  Logger() {};
  ~Logger() = default;

  static void Log(const std::experimental::string_view message);
  static void Error(const std::experimental::string_view message,
                    std::experimental::source_location location =
                        std::experimental::source_location::current());
};

#endif // !LOGGER_H
