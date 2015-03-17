/* 
 * File:   main.cpp
 * Author: David Salazar
 * Created on February 23, 2015, 9:55 AM
 * Purpose: Input/Process/Output and Flowchart!!!
 * 
 */

//System Libraries

#include <iostream> // I/O Library
using namespace std;// I/O Library under std namespace

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!!!

int main(int argc, char** argv) {
    
    //Declare Variables
    
    //Inputs:
    //  Pay Rate = payRate -> $'s/hr
    //  Hours Worked = hrsWrkd -> hrs
    
    //Output:
    //  Gross Pay Check Amount = payChk -> $'s
    
    float payRate, hrsWrkd, payChk;
    
    //Prompt the user for inputs
    cout << "This program calculates your Gross Paycheck" << endl;
    
    //Don't just tell someone to input pay rate, but include what kind of
    //format to put it in ie. $xx.xx
    cout << "Input your Pay Rate as $xx.xx" << endl; 
    
    cin >> payRate;
    
    cout << "Input your Hours Worked this pay period." << endl;
    cout << "Format xxx.x, provide the x's" << endl;
    
    cin >> hrsWrkd;
    
    //Calculate the paycheck
    payChk = payRate * hrsWrkd;
    
    
    cout << "$" 
            << payChk <<" = $" 
            << payRate << "/hr *" 
            << hrsWrkd << "(hrs)" << endl;
    
    //Exit Stage Right !!!!
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

