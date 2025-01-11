#pragma once

#include <iostream>
#include "idisplay_element.hpp"
#include "iobserver.hpp"

namespace ws {
class StatisticsDisplay : public IObserver, IDisplayElement {
public:
    void update(double temperature, double humidity, double pressure) override {
        ++m_numberOfReadings;
        m_avgTemperature = (m_avgTemperature * (m_numberOfReadings - 1) + temperature) / m_numberOfReadings;
        if (temperature > m_maxTemperature) {
            m_maxTemperature = temperature;
        }
        if (temperature < m_minTemperature) {
            m_minTemperature = temperature;
        }
        display();
    }
    void display() override {
        std::cout << "Avg/Max/Min temperature = " << m_avgTemperature << "/" << m_maxTemperature << "/" << m_minTemperature << std::endl;
    }
private:
    int m_numberOfReadings{};
    double m_maxTemperature = std::numeric_limits<double>::min();
    double m_minTemperature = std::numeric_limits<double>::max();
    double m_avgTemperature{};
};

} // namespace ws