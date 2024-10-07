#pragma once

#include "duck.hpp"
#include "fly_with_wings.hpp"
#include "quack.hpp"

#include <iostream>
#include <memory>

namespace duck {

class MallardDuck final : public Duck {
public:
  MallardDuck() {
    m_quackBehavior = std::make_unique<Quack>();
    m_flyBehavior = std::make_unique<FlyWithWings>();
  }
  ~MallardDuck() override = default;
  MallardDuck(const MallardDuck&) = delete;

  void display() override { std::cout << "I'm a mallard duck.\n"; }
};

} // namespace duck