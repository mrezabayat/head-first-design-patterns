#pragma once

#include "ifly_behavior.hpp"

#include <iostream>

namespace duck {
    
class FlyRocketPowered : public iFlyBehavior {
public:
  FlyRocketPowered() = default;
  ~FlyRocketPowered() override = default;

  void fly() override { std::cout << "I'm flying using a rocket.\n"; }
};

} // namespace duck