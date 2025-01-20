#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

namespace ps {

class IDough;
class ISauce;
class IVeggies;
class ICheese;
class IPepperoni;
class IClams;

class IPizza {
public:
  virtual ~IPizza() = default;

  virtual void prepare() = 0;
  virtual void bake() {
    std::cout << "Bake for 25 minutes at 350" << std::endl;
  };
  virtual void cut() {
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
  };
  virtual void box() {
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
  };

protected:
  std::string m_name;
  std::unique_ptr<IDough> m_dough;
  std::unique_ptr<ISauce> m_sauce;
  std::vector<std::unique_ptr<IVeggies>> m_veggies;
  std::unique_ptr<ICheese> m_cheese;
  std::unique_ptr<IPepperoni> m_pepperoni;
  std::unique_ptr<IClams> m_clams;
};

} // namespace pizza_store