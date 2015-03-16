/* 
 * File:   main.cpp
 * Author: David Salazar
 * Created on March 16, 2015, 8:12 AM
 * Purpose: Paycheck->Ternary
 */

//System Libraries

#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!!
int main(int argc, char** argv) {

    //Declare Variables
    ofstream output; //Output the results in a file
    
    float hrsWkd; //Hours Worked (hrs)
    float payRate; //Pay Rate ($'s/hr)
    float oRate=1.5f; //Multiplicative factor of payRate
    float oTime=40.0f; // Where overtime begins (hr)
    float payCheck; //Gross Pay ($'s)
    
    //open the file
    out.open("Payroll.dat");
    //Prompt the user for inputs
    cout << "How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"what is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    
    //Calculate the paycheck
    payChk=hrsWk<oTime?;;
    payRate*hrsWkd:;
    cout<< "what is you pryratre"
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    payRate*(hrsWkd+(oRate-1)*(hsWkd- oTime));
    
    
    
    //close the file
    output.close();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

