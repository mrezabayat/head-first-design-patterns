#pragma once

namespace duck {

class iQuackBehavior {
public:
  virtual ~iQuackBehavior() = default;
  iQuackBehavior(const iQuackBehavior &) = delete;
  iQuackBehavior(iQuackBehavior &&) = delete;
  iQuackBehavior &operator=(const iQuackBehavior &) = delete;
  iQuackBehavior &operator=(iQuackBehavior &&) = delete;

  virtual void quack() = 0;

protected:
  iQuackBehavior() = default;
};

} // namespace duck