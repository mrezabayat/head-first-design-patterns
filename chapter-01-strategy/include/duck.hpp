#pragma once

#include "ifly_behavior.hpp"
#include "iquack_behavior.hpp"

#include <iostream>
#include <memory>

namespace duck {

class Duck {
public:
  virtual ~Duck() = default;
  Duck(const Duck &) = delete;
  Duck(Duck &&other) noexcept
      : m_flyBehavior(std::move(other.m_flyBehavior)),
        m_quackBehavior(std::move(other.m_quackBehavior)) {}
  Duck &operator=(const Duck &) = delete;
  Duck &operator=(Duck &&other) noexcept {
    if (this != &other) {
      m_flyBehavior = std::move(other.m_flyBehavior);
      m_quackBehavior = std::move(other.m_quackBehavior);
    }
    return *this;
  }

  void swim() const { std::cout << "I'm swimming.\n"; }
  virtual void display() const = 0;

  void performQuack() {
    if (m_quackBehavior) {
      m_quackBehavior->quack();
    } else {
      std::cerr << "Quack behavior not set.\n";
    }
  }
  void performFly() {
    if (m_flyBehavior) {
      m_flyBehavior->fly();
    } else {
      std::cerr << "Fly behavior not set.\n";
    }
  }

  void setFlyBehavior(std::unique_ptr<iFlyBehavior> flyBehavior) {
    m_flyBehavior = std::move(flyBehavior);
  }
  void setQuackBehavior(std::unique_ptr<iQuackBehavior> quackBehavior) {
    m_quackBehavior = std::move(quackBehavior);
  }

protected:
  Duck() = default;

  std::unique_ptr<iFlyBehavior> m_flyBehavior;
  std::unique_ptr<iQuackBehavior> m_quackBehavior;
};

} // namespace duck