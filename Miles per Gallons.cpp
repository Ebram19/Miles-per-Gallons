// title: miles per galon
// name of programmer Ebram Azer
// requiements: A car holds 15 gallons of gasoline and can travel 375 miles before refueling.Write a program that calculates 
// the number of miles per gallon the car gets.Display the result on the screen.
//

#include <iostream> 
using namespace std;


int main()
{

    const double gallonsofgas = 15.0;//gallons 
    const double milesdriven = 375.0;//miles 

    cout << "calculate miles per gallon";
    double mpg = milesdriven / gallonsofgas;
    "Display the result"
        ; std::cout << "The car gets " << mpg << " miles per gallon." << std::endl;

    return 0;
}
