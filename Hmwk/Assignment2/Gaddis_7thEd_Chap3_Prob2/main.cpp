/* 
  * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 10:47 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main() {

  int a, b, c;
  float classA, classB, classC, sales;
  
  cout << "This program calculates the total amount of ticket sales. \n";
  cout << "Enter the amount of Class A tickets sold. \n";
  cin >> a;
         
  cout << "Enter the amount of Class B tickets sold. \n";
  cin >> b;
  
  cout << "Enter the amount of Class C tickets sold. \n";
  cin >> c;
  
  classA = a * 15.00;
  classB = b * 12.00;
  classC = c * 9.00;
  
  sales = classA + classB + classC;
   
  cout << setprecision(6) << showpoint;
  cout << "The total amount is $ " << sales << "." << endl;
  
  return 0;
}

