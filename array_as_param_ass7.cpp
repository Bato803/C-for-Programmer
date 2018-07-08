/*Goal: create a function that searches an array for 
**a given value. 
*/

#include<iostream>


int search(int* array, const int size, int searchKey){
    for(int i=0; i<size; i++){
        if(array[i]==searchKey){
            return i;
        }
    }
    
    return -1; 
}

int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    return 0;
}
