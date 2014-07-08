/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 7, 2014, 7:18 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    int a, b, c;
    
    cout << "I will determine which number is smaller and which is larger." << endl;
    cout << "Enter the first number." << endl;
    cin >> a;
    cout << "Enter the second number." << endl;
    cin >> b;
            
    c = a < b ? a : b;
    cout << "The smaller number is " << c << "." << endl;
    
    c = a > b ? a : b;
    cout << "The larger number is " << c << "." << endl;
    
    
    return 0;
}

