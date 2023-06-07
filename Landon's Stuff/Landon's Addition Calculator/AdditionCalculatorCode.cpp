#include <iostream>


int main() {
    std::cout << "Welcome to the addition calculator." << std::endl; 
    std::cout << "Insert the numbers below" << std::endl;
    std::cout << "THIS WILL ONLY ADD NUMBERS" << std::endl;
    std::cout << "This will round to the nearest thousandth" << std::endl;
    double numberOne; 
    double numberTwo;
    std::cout << "Enter the first number: ";
    std::cin >> numberOne;
    std::cout << "Enter the second number: ";
    std::cin >> numberTwo;
    double sum = numberOne + numberTwo;
    std::cout << "The total is: " << sum;
    
    
    return 0;
}
