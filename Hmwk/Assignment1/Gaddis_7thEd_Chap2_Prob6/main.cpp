/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on June 26, 2014, 11:22 PM
 */

#include <iostream>
using namespace std;

int main() {

  float payAmount = 1.7e3, payPeriods = 26, annualPay;
  annualPay = payAmount * payPeriods;
  
  cout << "The total amount Shannon made this year was $ " << annualPay<< endl;
          
  return 0;
}
