#pragma once

#include <memory>
#include <vector>

namespace ps {

class IDough;
class ISauce;
class IVeggies;
class IChess;
class IPepperoni;
class IClams;

class IIngredientFactory {
public:
  virtual ~IIngredientFactory() = default;

  virtual std::unique_ptr<IDough> createDough() const = 0;
  virtual std::unique_ptr<ISauce> createSauce() const = 0;
  virtual std::vector<std::unique_ptr<IVeggies>> createVeggies() const = 0;
  virtual std::unique_ptr<IChess> createChess() const = 0;
  virtual std::unique_ptr<IPepperoni> createPepperoni() const = 0;
  virtual std::unique_ptr<IClams> createClams() const = 0;
};

} // namespace ps
