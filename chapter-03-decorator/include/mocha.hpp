#pragma once

#include "icondiment_decorator.hpp"

#include <string>

namespace sb {
class Mocha : public ICondimentDecorator {
public:
  Mocha(std::shared_ptr<Beverage> beverage) : ICondimentDecorator(std::move(beverage)) {}
  std::string GetDescription() const override {
    return m_beverage->GetDescription() + m_description;
  }
  double GetCost() const override { return m_beverage->GetCost() + m_cost; }

private: 
  std::string m_description = ", Mocha";
  const double m_cost = 0.20;
};
}