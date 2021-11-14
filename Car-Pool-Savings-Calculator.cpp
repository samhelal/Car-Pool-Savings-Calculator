/*Create an application that calculates your
daily driving cost, so that you can estimate how much money
could be saved by car pooling, which also has other
advantages such as reducing carbon emissions and reducing
traffic congestion. The application should input the following
information and display the user’s cost per day of driving to
work:
A. Total miles driven per day.
B. Cost per gallon of gasoline.
C. Average miles per gallon.
D. Parking fees per day.
E. Tolls per day.
(c++ how to program) */
// program calculate car-pooling
#include <iostream>
using namespace std ;
int main () {
    int mailes(0),costPerGallon(0),average(0),parkingFees(0),tolls(0);
    cout << " Enter the miles per day : " ;
    cin >> mailes ;
    cout << " Enter cost per gallon of gasolin : " ;
    cin >> costPerGallon ;
    average = mailes * 5 ;
    cout << " You spend average " << average << "$ for gasoline per day \n" ;
    cout << " Enter the parking fees per day : " ;
    cin >> parkingFees ;
    tolls = average + parkingFees ;
    cout << " The total expenses per day is : " << tolls << endl ;



}