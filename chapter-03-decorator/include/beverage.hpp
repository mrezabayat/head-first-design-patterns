#pragma once

#include <string>

namespace sb {
class Beverage {
public:
  virtual ~Beverage() = default;
  virtual std::string GetDescription() const {return m_description;};
  virtual double GetCost() const = 0;

protected:
  std::string m_description = "Unknown Beverage";
};
} // namespace sb