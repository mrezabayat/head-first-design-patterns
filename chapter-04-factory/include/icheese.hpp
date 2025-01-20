#pragma once

#include <string>

namespace ps {

class ICheese {
public:
  virtual ~ICheese() = default;
  virtual operator std::string() const = 0;
};

} // namespace ps
