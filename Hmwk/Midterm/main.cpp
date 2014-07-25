/* 
 * File:   main.cpp
 * Author: zach5456
 *
 * Created on July 18, 2014, 5:48 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {

  int prob, l, z, x, p;
  int fir, sec, thi, fou;
  unsigned short pin = 5423, balance = 100, over = 27.75, charge = 200;
  unsigned short credit = 50;
  float pay, hours, total, tPay, dPay, limit = 40, overtime = 50;
  
  cout << "What problem would you like to display?\n";
  cin >> prob;
  
  if (prob == 1){
    cout << "How many lines would you like?\n";
    cin >> x;
      for (l = x; l >= 1; l--){
        for (z = l; z >= 1; z--)
        cout << " ";
        cout << l;
        cout <<"\n";}
  }
  else if (prob == 2){
    cout << "Enter a single number.\n";
    cin >> fir;
    cout << "Enter a single number.\n";
    cin >> sec;
    cout << "Enter a single number.\n";
    cin >> thi;
    cout << "Enter a single number.\n";
    cin >> fou;
    for (int aska = fir; aska < fir; aska ++){
      for (int askt = sec; askt < sec; askt ++){
        for (int askte = thi; askte < thi; askte ++){
          for (int askter = fou; askter < fou; askter ++){
            cout << fou << askter << endl;
            cout << "*" << endl;}
        cout << thi << askte << endl;
        cout << "*" << endl;}
      cout << sec << askt << endl;
      cout << "*" << endl;}   
    cout << fir << aska << endl;
    cout << "*" << endl;}
  }
  
  else if (prob == 3){
    cout << "Please enter your PIN.\n";
    cin >> pin;
    static_cast<float>(balance);
    p = balance + credit - charge;
    if (p < 0){
        p = p - over;
        cout << setprecision(2) << balance << endl;
        cout << "Your account has been charged an overdraft fee.\n";
        cout << "If any more charges are to be added to the card, the balance";
        cout << " must be brought to 0.\n";
    }
  }
  else if (prob == 4){
    int hours, axHours, axxHours, bxHours, bxxHours, cxHours, cxxHours;
    float total;
    float a = 19.95, b = 24.95, c = 29.75, aAdd = 0.75, aOver = 1, bAdd = 0.75;
    float bOver = 0.50;
    char package;
    
    cout << "Enter which package you use: A, B, C.\n";
    cin >> package;
    cout << "How many hours were used?\n";
    cin >> hours;
    switch (package)
    {
      case 'a':
      case 'A': if (hours > 5 && hours <= 20){
                  axHours = hours - 5;
                  total = a + (aAdd * axHours);
                  cout << "$" << total << endl;
                }
                else if (hours > 20){
                  axHours = hours - 5;
                  if (axHours > 20)
                    axHours = 20;
                    axxHours = hours - 20;
                    total = a + (aOver * axxHours) + (aAdd * axHours);
                    cout << "$" << total << endl;
            }
                else cout << "$" << a << endl;
      if (total > 29.75){
        cout << "You should think about switching to the C package. The C";
        cout << " package is only $29.75 for unlimited monthly use.\n";
      }
      break;
      case 'b':
      case 'B': if (hours > 15 && hours <= 25){
                  bxHours = hours - 15;
                  total = b + (bAdd * bxHours);
                  cout << "$" << total << endl;
                }
                else if (hours > 25){
                  bxHours = hours - 15;
                  if (bxHours > 25)
                    bxHours = 25;
                    bxxHours = hours -25;
                    total = b + (bOver * bxxHours) + (bAdd * bxHours);
                    cout << "$" << total << endl;
            }
                else cout << "$" << b << endl; 
      if (total > 29.75){
        cout << "You should think about switching to the C package. The C";
        cout << " package is only $29.75 for unlimited monthly use.\n";
      }
      break;
      case 'c':
      case 'C': cout << "$" << c << endl;
      break;
      
      default: cout << "Enter an available package.\n";
               cin >> package;
    }
  }
   
  else if (prob == 5){
    cout << "Enter the numbers of hours worked.\n";
    cin >> hours;
    cout << "Enter the pay rate.\n";
    cin >> pay;
    
    if (hours > 40 && hours <= 50) {
      dPay = hours - limit;
      hours = 40;
    }
    else if (hours > 50) {
      dPay = hours - limit;
      if (dPay > 10)
        dPay = 10;
      tPay = hours - overtime;
      hours = 40;
}
    
      total = (limit * pay) + (dPay * pay * 2) + (tPay * pay *3);
      cout << "$" << total << endl;
  }
  else if (prob == 6){
    int count =1, term;
    double total = 1, x = 1, y = 1, z;
    
    cout << "Enter a value for z you'd like.\n";
    cin >> z;
    cout << "Enter the number of terms you'd like.\n";
    cin >> term;
    
    while (count <= term)
    {
      x *= z;
      y *= count;
      total += (x/y);
      count++;
    }
    cout << "Total = " << total << endl;
  }
  else cout << "Enter a valid number.\n";
  cin >> prob;
  return 0;
}

