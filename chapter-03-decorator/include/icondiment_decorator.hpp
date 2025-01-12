#pragma once

#include "beverage.hpp"

#include <memory>

namespace sb {
class ICondimentDecorator : public Beverage {
public:
  ICondimentDecorator(std::shared_ptr<Beverage> beverage) : m_beverage(std::move(beverage)) {}
  virtual ~ICondimentDecorator() = default;
  virtual std::string GetDescription() const = 0;
protected:
  std::shared_ptr<Beverage> m_beverage; 
};
} // namespace sb