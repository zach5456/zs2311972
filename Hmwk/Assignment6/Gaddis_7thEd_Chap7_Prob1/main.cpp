/* 
 * File:   main.cpp
 * Author: Stewart, Zach
 * Class: 46024
 *
 * Created on July 25, 2014, 2:04 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

  int min, max;
  const int NUM = 10;
  int x[NUM];
  
  cout << "Enter any 10 numbers you'd like.\n";
  for(int e = 0; e < 10; e++)
  {
    cin >> x[e];
  }
  
  min = x[0];
  max = x[0];
  for(int e = 1; e < 10; e++)
	{
		if(min > x[e])
		{
			min = x[e];
		}
		else if(max < x[e])
		{
			max = x[e];
		}
	}
  
  cout << "The largest number you entered is " << max << endl;
  cout << "The smallest number you entered is " << min << endl;
  return 0;
}

