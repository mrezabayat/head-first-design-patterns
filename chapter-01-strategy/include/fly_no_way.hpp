#pragma once

#include "ifly_behavior.hpp"

#include <iostream>

namespace duck {

class FlyNoWay : public iFlyBehavior {
public:
  FlyNoWay() = default;
  FlyNoWay(const FlyNoWay &) = delete;
  FlyNoWay(FlyNoWay &&) = delete;
  FlyNoWay &operator=(const FlyNoWay &) = delete;
  FlyNoWay &operator=(const FlyNoWay &&) = delete;
  ~FlyNoWay() override = default;

  void fly() override { std::cout << "I cannot fly.\n"; }
};

} // namespace duck
