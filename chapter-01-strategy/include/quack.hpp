#pragma once

#include "iquack_behavior.hpp"

#include <iostream>

namespace duck {

class Quack : public iQuackBehavior {
public:
  Quack() = default;
  Quack(const Quack &) = delete;
  Quack(Quack &&) = delete;
  Quack &operator=(const Quack &) = delete;
  Quack &operator=(Quack &&) = delete;
  ~Quack() override = default;

  void quack() override { std::cout << "I say Quack.\n"; }
};

} // namespace duck