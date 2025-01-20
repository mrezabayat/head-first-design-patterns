#pragma once

#include <string>

namespace ps {

class IPepperoni {
public:
  virtual ~IPepperoni() = default;
  virtual operator std::string() const = 0;
};

} // namespace ps
