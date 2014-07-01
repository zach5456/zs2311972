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

  float shirt = 12.95, pants = 24.95, shoes = 6.95, socks = 14.95;
  float briefs = 3.95, tax = 0.06, shirtTotal, pantsTotal, shoesTotal;
  float socksTotal, briefsTotal, shirtTax, pantsTax, shoesTax, socksTax;
  float briefsTax;
  
  shirtTax = shirt * tax;
  pantsTax = pants * tax;
  shoesTax = shoes * tax;
  socksTax = socks * tax;
  briefsTax = briefs * tax;

  shirtTotal = shirtTax + shirt;
  pantsTotal = pantsTax + pants;
  shoesTotal = shoesTax + shoes;
  socksTotal = socksTax + socks;
  briefsTotal = briefsTax + briefs;
  
  cout << "The price of the shirt is " << shirt << ". The amount of the ";
  cout << "shirts tax is " << shirtTax << ". The total of the shirt is ";
  cout << shirtTotal << "." << endl;
  cout << "The price of the pants are " << pants << ". The amount of the ";
  cout << "pants tax is " << pantsTax << ". The total of the pants are ";
  cout << pantsTotal << "." << endl;
  cout << "The price of the shoes are " << shoes << ". The amount of the ";
  cout << "shoes tax is " << shoesTax << ". The total of the shoes are ";
  cout << shoesTotal << "." << endl;
  cout << "The price of the socks are " << socks << ". The amount of the ";
  cout << "socks tax is " << socksTax << ". The total of the socks are ";
  cout << socksTotal << "." << endl;
  cout << "The price of the briefs are " << briefs << ". The amount of the ";
  cout << "briefs tax is " << briefsTax << ". The total of the briefs are ";
  cout << briefsTotal << "." << endl;
  
  return 0;
}
