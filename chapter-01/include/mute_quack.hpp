#pragma once

#include "iquack_behavior.hpp"

#include <iostream>

namespace duck {

class MuteQuack : public iQuackBehavior {
public:
  MuteQuack() = default;
  MuteQuack(const MuteQuack &) = delete;
  MuteQuack(MuteQuack &&) = delete;
  MuteQuack &operator=(const MuteQuack &) = delete;
  MuteQuack &operator=(const MuteQuack &&) = delete;
  ~MuteQuack() override = default;

  void quack() override { std::cout << "I say nothing.\n"; }
};

} // namespace duck