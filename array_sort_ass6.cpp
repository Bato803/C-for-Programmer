/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int userInput[40];

    for(int i = 0; i <40; i++)
    {
        cin >> userInput[i];
    }
    
    // Print the array
    cout << "Print the array" << endl;
    for(int i=0; i<40; i++){
        cout << userInput[i] << " "; 
    }
    
    // Reverse order. 
    cout << "\nReverse Order" << endl;
    for(int i=39; i>=0; i--){
        cout << userInput[i] << " ";
    }
    
    // Ascending order. Bubble sort. 
    for(int i=0; i<40; i++){
        for(int j=0; j<40-i; j++){
            
            if(userInput[j]>userInput[j+1]){
                int temp=userInput[j];
                userInput[j] = userInput[j+1];
                userInput[j+1] = temp;
            }
        }
    }
    
    cout << "\n";
    for(int i=0; i<40; i++){
        cout << userInput[i] << " ";
    }
    
}
