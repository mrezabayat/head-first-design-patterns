#pragma once

#include <string>

namespace ps {

class IVeggies {
public:
  virtual ~IVeggies () = default;
  virtual operator std::string() const = 0;
};

} // namespace ps