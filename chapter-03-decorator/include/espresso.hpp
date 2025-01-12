#pragma once

#include "beverage.hpp"

namespace sb {
class Espresso : public Beverage {
public:
  Espresso() { m_description = "Espresso"; }
  double GetCost() const override { return 1.99; }
};
} // namespace sb
