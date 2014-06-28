/*
 * File:   main.cpp
 * Author: Stewart, Zach
 *Class: 46024
 * Created on June 26, 2014, 10:52 PM
 */

#include <iostream>
using namespace std;

int main() {

  double price = 52, salesPrice, totalPrice, countyPrice;
  salesPrice = price * 0.04;
  countyPrice =price * 0.02;
  totalPrice = price + salesPrice + countyPrice;
  
          
  cout << "The total of the shirt is $" << totalPrice << endl;
  
  
  
  
  
  return 0;
}
