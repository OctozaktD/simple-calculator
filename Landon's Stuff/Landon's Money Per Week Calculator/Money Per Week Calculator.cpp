#include <iostream>

int main() {
    int hoursWorkedPerDay;
    std::cout << "Hours Worked Per Day out of 24 = ";
    std::cin >> hoursWorkedPerDay;
    
    
    int daysWorkedPerWeek;
    std::cout << "Days Worked Per Week out of 7 = ";
    std::cin >> daysWorkedPerWeek;
    
    
    int hoursWorkedAWC =  hoursWorkedPerDay * daysWorkedPerWeek;
    std::cout << "Hours worked after calculation: " << hoursWorkedAWC << std::endl; //AWC = After Week Calculation
    
    int moneyMade;
    std::cout << "Money Made Per Hour $: ";
    std::cin >> moneyMade;
    
    int gIPerWeek = hoursWorkedAWC * moneyMade;
    std::cout << "Gross Income Per Week: "<< gIPerWeek << std::endl; // gIPerWeek = Gross Income Per Week
    
    
    return 0;
}
