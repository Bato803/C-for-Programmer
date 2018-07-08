/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    
    int multi[4][4];
    int vec[4], pro[4];
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            std::cin >> multi[i][j];
        }
    }
    
    for(int k=0; k<4; k++){
        std::cin >> vec[k];
    }
    
    int sum=0;
    
    for(int i=0; i<4; i++){
        sum = 0; 
        for(int j=0; j<4; j++){
            sum+=multi[i][j]*vec[i];
        }
        pro[i] = sum; 
        std::cout << pro[i] << std::endl;
    }
    
    
    
    
    return 0;
}
