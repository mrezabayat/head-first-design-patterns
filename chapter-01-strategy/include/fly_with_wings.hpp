#pragma once

#include "ifly_behavior.hpp"

#include <iostream>

namespace duck {

class FlyWithWings : public iFlyBehavior {
public:
  FlyWithWings() = default;
  FlyWithWings(const FlyWithWings &) = delete;
  FlyWithWings(FlyWithWings &&) = delete;
  FlyWithWings &operator=(const FlyWithWings &) = delete;
  FlyWithWings &&operator=(const FlyWithWings &&) = delete;
  ~FlyWithWings() override = default;

  void fly() override { std::cout << "I am flying with my wings.\n"; }
};

} // namespace duck