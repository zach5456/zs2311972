/* 
    * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 2, 2014, 12:59 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main() {

  float loan, insurance, gas, oil, tires, maintenance, total;
  
  cout << "Enter the amount you pay for your loan per month." << endl;
  cin >> loan;
  cout << "Your total monthly expenses for loans are are,";
  cout << " $" << loan << "." << endl;
  
  cout << "Enter the amount you pay for your insurance per month." << endl;
  cin >> insurance;
  cout << "Your total monthly expenses for insurance is are,";
  cout << " $" << insurance << "." << endl;
  
  cout << "Enter the amount you pay for your gas per month." << endl;
  cin >> gas;
  cout << "Your total monthly expenses for gas is,";
  cout << " $" << gas << "." << endl;
   
  cout << "Enter the amount you pay for your oil per month." << endl;
  cin >> oil;
  cout << "Your total monthly expenses for oil is,";
  cout << " $" << oil << "." << endl;
           
  cout << "Enter the amount you pay for your tires per month." << endl;
  cin >> tires;
  cout << "Your total monthly expenses for tires are,";
  cout << " $" << tires << "." << endl;
          
  cout << "Enter the amount you pay for your maintenance per month." << endl;
  cin >> maintenance;
  cout << "Your total monthly expenses for maintenance is,";
  cout << " $" << maintenance << "." << endl;
  
  total = loan + insurance + gas + oil + tires + maintenance;
  cout << "Your total monthly expenses are $" << total << "." << endl;
  
  return 0;
}

