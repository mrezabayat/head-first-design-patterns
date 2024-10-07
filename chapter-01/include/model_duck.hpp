#pragma once

#include "duck.hpp"
#include "fly_no_way.hpp"
#include "quack.hpp"

#include <memory>

namespace duck {
class ModelDuck final : public Duck {
public:
  ModelDuck() {
    m_flyBehavior = std::make_unique<FlyNoWay>();
    m_quackBehavior = std::make_unique<Quack>();
  }
  ~ModelDuck() override = default;

  void display() override { std::cout << "I'm a model duck.\n"; }
};

} // namespace duck