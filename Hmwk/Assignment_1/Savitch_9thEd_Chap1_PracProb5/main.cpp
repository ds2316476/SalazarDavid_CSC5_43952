/* 
 * File:   main.cpp
 * Author: David Salazar
 * Created on March 16, 2015, 10:12 AM
 * Purpose: Multiplying peas in pods to get a total pea count
 * 
 * Purpose 2: Add Hello and Goodbye
 * 
 * Purpose 3: Change multiplication to a division sign to get 
 * a runtime error
 * 
 * Purpose 4: Change division sign to an addition sign to get 
 * a logic error
 * 
 * Purpose 5: Changing the problem from counting peas to
 * calculating the length of fence needed to enclose a
 * rectangle
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    //Declare variables/variable declarations 
    int rctLng; //Length of rectangle 
    int rctWdt; //Width of rectangle
    int totFenc; //Total length of fence
    
    //prompt user for length of rectangle
    cout<<"Hello\n";
    cout<<"Press return after entering numbers.\nMeasurements are in feet.\n";
    cout<<"We are going to figure out the length of fence needed\n";
    cout<<"to fence off my backyard.\n\n";
    cout<<"Enter the length of my yard first:\n";
    
    cin>>rctLng;
    
    //prompt user for width of rectangle
    cout<<"Now enter the width of my yard: \n";
    
    cin>>rctWdt;
    
    //Calculate the results
    totFenc=2*rctLng+2*rctWdt;
    
    //output the results
    cout<<"If you have "<<rctLng<<" feet in height\n";
    cout<<"and "<< rctWdt << " feet in width\n";
    cout<<"then we will need a "<<totFenc<<" foot fence in length\n";
    cout<<"to surround my backyard.\n";
    
    cout<<"Goodbye\n";
    
    //Exit stage right!
    
    
    return 0;
}

