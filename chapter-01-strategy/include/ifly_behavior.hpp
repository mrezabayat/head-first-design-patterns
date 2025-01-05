#pragma once

namespace duck {

class iFlyBehavior {
public:
  virtual ~iFlyBehavior() = default;
  iFlyBehavior(const iFlyBehavior &) = delete;
  iFlyBehavior(iFlyBehavior &&) = delete;
  iFlyBehavior &operator=(const iFlyBehavior &) = delete;
  iFlyBehavior &operator=(iFlyBehavior &&) = delete;

  virtual void fly() = 0;

protected:
  iFlyBehavior() = default;
};

} // namespace duck
