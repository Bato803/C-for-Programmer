/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

using namespace std;
int main(){
    
    int maxnum=0, minnum=100, sumnum=0;
    int usernum;
    
    for(int i=0; i<15; i++){
        cin >> usernum;
        if(usernum>maxnum) maxnum=usernum;
        if(usernum<minnum) minnum=usernum;
        sumnum += usernum;
    }
    
    cout << "Max: " << maxnum << endl;
    cout << "Min: " << minnum << endl;
    cout << "Avg: " << sumnum/15.0 << endl;
}
