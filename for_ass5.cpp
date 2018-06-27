/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main(){
    
    float num, sum=0;
    for(int i=0;i<5;i++){
        std::cout<<"Write a number? ";
        std::cin>>num;
        sum += num;
    }

    std::cout << sum/5 << std::endl;
    return 0;

}
