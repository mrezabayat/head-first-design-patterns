#include "beverage.hpp"
#include "dark_roast.hpp"
#include "espresso.hpp"
#include "house_blend.hpp"
#include "milk.hpp"
#include "mocha.hpp"
#include "soya.hpp"

#include <iostream>
#include <memory>

int main() {
  using namespace sb;

  std::shared_ptr<Beverage> beverage = std::make_shared<Espresso>();
  std::cout << beverage->GetDescription() << " £" << beverage->GetCost()
            << std::endl;

  std::shared_ptr<Beverage> beverage2 = std::make_shared<DarkRoast>();
  beverage2 = std::make_shared<Mocha>(beverage2);
  beverage2 = std::make_shared<Mocha>(beverage2);
  beverage2 = std::make_shared<Milk>(beverage2);
  std::cout << beverage2->GetDescription() << " £" << beverage2->GetCost()
            << std::endl;

  std::shared_ptr<Beverage> beverage3 = std::make_shared<HouseBlend>();
  beverage3 = std::make_shared<Soya>(beverage3);
  beverage3 = std::make_shared<Mocha>(beverage3);
  beverage3 = std::make_shared<Milk>(beverage3);
  std::cout << beverage3->GetDescription() << " £" << beverage3->GetCost()
            << std::endl;
            
  return 0;
}