#pragma once

#include <string>

namespace ps {

class IClams {
public:
  virtual ~IClams() = default;
  virtual operator std::string() const = 0;
};

} // namespace ps
