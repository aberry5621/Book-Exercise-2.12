//
//  main.cpp
//  Book Exercise 2.12
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Finding runway length with physics
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Find Runway Length \n";
    
    // D
    double speed_input = 0.0;
    double accel_input = 0.0;
    double runway_length_calc = 0.0;
    
    // I
    cout << "Enter speed and acceleration: ";
    cin >> speed_input >> accel_input;
    
    // P
    // multiply years by 7 births per minute, 13 deaths and 45 immigrations; add to current pop
    runway_length_calc = pow(speed_input, 2.0) / (2 * accel_input);
    
    // O
    cout << "The minimum runway length for this airplane is " << runway_length_calc << endl;
    
    return 0;
    
}