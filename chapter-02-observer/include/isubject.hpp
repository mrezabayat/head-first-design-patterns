#pragma once

#include <memory>

namespace ws {
class IObserver;

class ISubject {
public:
  virtual ~ISubject() = default;

  virtual void registerObserver(std::shared_ptr<IObserver> observer) = 0;
  virtual void removeObserver(std::shared_ptr<IObserver> observer) = 0;
  virtual void notifyObservers() = 0;
};
} // namespace ws
