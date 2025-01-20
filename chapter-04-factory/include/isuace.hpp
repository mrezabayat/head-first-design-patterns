#pragma once

#include <string>

namespace ps {

class ISauce {
public:
  virtual ~ISauce() = default;
  virtual operator std::string() const = 0;
};

} // namespace ps