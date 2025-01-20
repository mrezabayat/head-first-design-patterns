#pragma once

#include <string>

namespace ps {

class IDough {
public:
  virtual ~IDough() = default;
  virtual operator std::string() const = 0;
};

} // namespace ps
