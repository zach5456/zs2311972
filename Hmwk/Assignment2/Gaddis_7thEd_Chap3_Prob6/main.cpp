/* 
   * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 12:28 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main() {

  float pallet, widget = 9.2, totalWeight, amount;
  
  cout << "What is the total weight of the pallet with widgets?" << endl;
  cin >> totalWeight;
          
  cout << "How much does the pallet weigh by itself?" << endl;
  cin >> pallet;
  
  amount = (totalWeight - pallet) / widget;
  cout << "The amount of widgets on the pallet is " << amount << "." << endl;
  
  return 0;
}

