#pragma once

#include "iquack_behavior.hpp"

#include <iostream>

namespace duck {

class Squeak : public iQuackBehavior {
public:
  Squeak() = default;
  Squeak(const Squeak &) = delete;
  Squeak(Squeak &&) = delete;
  Squeak &operator=(const Squeak &) = delete;
  Squeak &operator=(const Squeak &&) = delete;
  ~Squeak() override = default;

  void quack() override { std::cout << "I say Squeak.\n"; }
};

} // namespace duck