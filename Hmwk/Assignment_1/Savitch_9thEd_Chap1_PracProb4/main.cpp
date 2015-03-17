/* 
 * File:   main.cpp
 * Author: David Salazar
 * Created on March 16, 2015, 10:12 AM
 * Purpose: Multiplying peas in pods to get a total pea count
 * PurposeTwo: Add Hello and Goodbye
 * PurposeThree: Change multiplication to a division sign to get 
 * a runtime error
 * PurposeFour: Change division sign to an addition sign to get 
 * a logic error
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
    int numPods; //number of pods 
    int peasPods; //peas per pods 
    int totPeas; //total peas
    
    //prompt user for number of pods
    cout<<"Hello\n";
    cout<<"Press return after entering number.\nEnter the number of pods:\n";
    
    cin>>numPods;
    
    //prompt user for peas in a pod
    cout<<"Enter the number of peas in a pod: \n";
    
    cin>>peasPods;
    
    //Calculate the results
    totPeas=numPods+peasPods;
    
    //output the results
    cout<<"If you have "<<numPods<<" pea pods\n";
    cout<<"and "<< peasPods << " peas in each pod, then\nyou have ";
    cout<<totPeas<<" peas in all the pods.\n";
    
    cout<<"Goodbye\n";
    
    //Exit stage right!
    
    
    return 0;
}

