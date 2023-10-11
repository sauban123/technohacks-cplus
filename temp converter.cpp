#include <iostream>
 
 double fahrenheitToCelsius(double fahrenheit)
 {
     double celsius;
 
     celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
     return celsius;
 }
 
 int main()
 {
     double fahrenheit;
    std::cout<<"\n\t\t***Temprature Convertor***";
     std::cout << "\n\nEnter temperature in fahrenheit :  ";
     std::cin  >> fahrenheit;
     std::cout << "\nTemperature in Celsius  = "
               << fahrenheitToCelsius(fahrenheit) << std::endl;
 }