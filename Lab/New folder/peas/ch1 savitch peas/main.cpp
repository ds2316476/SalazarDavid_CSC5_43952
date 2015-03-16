/* 
 * File:   main.cpp
 * Author: David Salazar
 * Created on March 16, 2015, 10:12 AM
 * Purpose: to count peas
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
    int nPods; //number of pods 
    int pPods; //peas per pods 
    int tPeas; //total peas
    
    //prompt user for number of pods
    cout<<"press return after entering number.\nEnter the number of pods:\n";
    
    //prompt for pods
    cin>>nPods;
    
    //prompt user for peas in a pod
    cout<<"Enter the number of peas in a pod: \n";
    
    //prompt for peas in a pod
    cin>>pPods;
    
    //math using declared variables
    tPeas=nPods*pPods;
    
    //output the results
    cout<<"if you have "<<nPods<<" pea pods\n";
    cout<<"and "<< pPods << " peas in each pod, then\nyou have ";
    cout<<tPeas<<" peas in all the pods.\n";
    
    //Exit stage right!
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

