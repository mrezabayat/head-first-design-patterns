#pragma once

#include "beverage.hpp"

namespace sb {
class HouseBlend : public Beverage {
public:
  HouseBlend() { m_description = "House Blend Coffee"; }
  double GetCost() const override { return 1.89; }
};
} // namespace sb
