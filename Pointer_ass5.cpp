/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    
    std::cin >> givenInt;
    std::cout << givenInt << " " << &givenInt << std::endl;
    
    std::cin >> givenFloat;
    std::cout << givenFloat << " " << &givenFloat << std::endl;
    
    std::cin >> givenDouble;
    std::cout << givenDouble << " " << &givenDouble << std::endl;
    
    std::cin >> givenChar;
    std::cout << givenChar << " " << &givenString << std::endl;
    
    std::cin.ignore();
    std::getline(std::cin, givenString);
    std::cout << givenString << " " << &givenString << std::endl;
    
    
    
    return 0;
}
