#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main() {
    const double PoundPerDollar {0.72};
    
    cout << "Welcome to the Pound to Dollar Converter!" << endl;
    cout << "Enter the value in pounds: ";
    
    double Pounds {0.0};
    double Dollars {0.0};
    
    cin>> Pounds;
    Dollars = Pounds * PoundPerDollar;
    
    cout << Pounds << " pounds is equivalent to " << Dollars << " dollars" << endl;
    
    return 0;
}
