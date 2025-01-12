#pragma once

#include "beverage.hpp"

namespace sb {
class DarkRoast : public Beverage {
public:
  DarkRoast() { m_description = "Dark Roast Coffee"; }
  double GetCost() const override { return 1.99; }
};
} // namespace sb
