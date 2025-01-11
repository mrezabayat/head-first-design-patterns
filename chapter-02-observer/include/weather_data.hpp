#pragma once

#include "isubject.hpp"
#include "iobserver.hpp"

#include <list>

namespace ws {
class WeatherData : public ISubject {
public:
  WeatherData() = default;
  ~WeatherData() override = default;

  void registerObserver(std::shared_ptr<IObserver> observer) override {
    observers.push_back(observer);
  }
  void removeObserver(std::shared_ptr<IObserver> observer) override {
    observers.remove(observer);
  }
  
  void notifyObservers() override {
    for (auto &observer : observers) {
      observer->update(m_temperature, m_humidity, m_pressure);
    }
  }

  void setMeasurements(double temperature, double humidity, double pressure) {
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    notifyObservers();
  }

private:
  std::list<std::shared_ptr<IObserver>> observers;
  double m_temperature;
  double m_humidity;
  double m_pressure;
};
} // namespace ws
