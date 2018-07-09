#include "mainClasses.cpp"
#include "mainFunctions.cpp"
#include <iostream>

int main(){
    string nameX, nameO;
    char gameWinner='z';
    Board boardIn; 
    
    int numTurns=0; 
    
    getUserNames(nameX, nameO);
    
    while(numTurns<8){
        
        printSelectedBoard(boardIn); 
        printUserPrompt(nameX, 'x'); 
        checkResponse(boardIn, 'x');
        gameWinner = boardIn.determineWinner('x'); 
        
        if(gameWinner=='x'){
            printSelectedBoard(boardIn);
            cout << "x wins!" << endl;
            break; 
        }
        
        printSelectedBoard(boardIn); 
        printUserPrompt(nameX, 'o'); 
        checkResponse(boardIn, 'o');
        gameWinner = boardIn.determineWinner('o'); 
        
        if(gameWinner=='o'){
            printSelectedBoard(boardIn);
            cout << "o wins!" << endl;
            break; 
        }
        
        numTurns++; 
    }
    
    if(numTurns>=8) cout << "Tie!" << endl; 
    
    return 0;
}
