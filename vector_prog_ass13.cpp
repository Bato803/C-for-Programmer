/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

//TODO: include the necessary libraries
#include <vector>
#include <iostream>

using namespace std;
int main ()
{
  //TODO: instantiate vFloat vector
  vector<float> vFloat;
  
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  
  //Changing the size of vectorInts to 6
  //TODO: Change the size of vFloat to 10 elements
  vFloat.resize(10);
  
  
  std::cout<<"\n\n vFloat now has "<<vFloat.size()<<" elements\n";
 
  return 0;
}

