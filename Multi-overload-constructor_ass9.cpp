/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog{
    string name;
    int licenseid;
    
public:
    Dog(){
        name = "NA";
        licenseid = 0;
    }
    
    Dog(string nameIn){
        name = nameIn;
        licenseid = 0;
    }
    
    Dog(int license){
        name = "NA";
        licenseid = license; 
    }
    
    Dog(string nameIn, int license){
        name = nameIn;
        licenseid = license;
    }
    
    string getName(){
        return name;
    }
    
    int getLicense(){
        return licenseid;
    }
};
