#include "mallard_duck.hpp"
#include "model_duck.hpp"
#include "fly_rocket_powered.hpp"

int main() {
    duck::MallardDuck myDuck;
    myDuck.display();
    myDuck.performQuack();
    myDuck.swim();
    myDuck.performFly();

    duck::ModelDuck modelDuck;
    modelDuck.display();
    modelDuck.performFly();
    modelDuck.performQuack();
    modelDuck.swim();
    modelDuck.setFlyBehavior(std::make_unique<duck::FlyRocketPowered>());
    modelDuck.performFly();
    return 0; 
}