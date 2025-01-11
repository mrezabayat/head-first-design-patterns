#include "weather_data.hpp"
#include "current_condition_display.hpp"
#include "statistics_display.hpp"

int main() {
    auto currentConditionDisplay = std::make_shared<ws::CurrentConditionDisplay>();
    auto statisticsDisplay = std::make_shared<ws::StatisticsDisplay>();

    ws::WeatherData weatherData;
    weatherData.registerObserver(currentConditionDisplay);
    weatherData.registerObserver(statisticsDisplay);
    weatherData.setMeasurements(80, 65, 30.4);
    weatherData.setMeasurements(82, 70, 29.2);
    weatherData.setMeasurements(78, 90, 29.2);
    weatherData.setMeasurements(85, 80, 30.4);
    return 0;
}