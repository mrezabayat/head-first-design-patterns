#pragma once

#include "idisplay_element.hpp"
#include "iobserver.hpp"
#include "weather_data.hpp"

#include <iostream>

namespace ws {
class CurrentConditionDisplay : public IObserver, IDisplayElement {
public:
  void update(double temperature, double humidity, double pressure) override {
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    display();
  }

  void display() override {
    std::cout << "Current conditions: " << m_temperature << "F degrees and "
              << m_humidity << " humidity" << std::endl;
  }

private:
  double m_temperature{};
  double m_humidity{};
  double m_pressure{};
};
} // namespace ws