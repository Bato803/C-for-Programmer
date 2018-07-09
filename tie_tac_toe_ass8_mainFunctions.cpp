#include <string>
#include <iostream>

using namespace std;

// Declaration 
void getUserNames(string& player1, string& player2);
void printBlankBoard(); 
void checkResponse(Board& board, char chr); 
int getValidPosition(); 


// Definition 
void getUserNames(string& player1, string& player2) {
	cout << "Name1: ";
	cin >> player1;
	cout << player1 << endl; 

	cout << "Name2: ";
	cin >> player2; 
	cout << player2 << endl; 
}

void printBlankBoard(){
    cout << "Here is an overlook of board and its indexes" << endl;
    
    for(int i=0; i<16; i++){
        cout << '|' << i << ":"; 
        if(i<=9) cout<<" "; 
        if(i%4==3) cout<<'\n'; 
    }
}

void printSelectedBoard(Board board){
    printBlankBoard(); 
    
    for(int i=0; i<16; i++){
        cout << '|' << board.getPositions()[i] << '|'; 
        if(i%4==3) cout<<'\n'; 
    }
    cout << "\n\n\n"; 
};

void printUserPrompt(string user, char chr){
    cout << user << ", Where would you like to enter " << chr << "?:"<< endl;
};

void checkResponse(Board& board, char chr){
    int position; 
    int isTaken; 
    
    position = getValidPosition();
    do{
        isTaken = board.setPosition(position, chr); 
        if(isTaken==-1) cout << "That position is taken. "; 
        
    } while(isTaken==-1);
};

int getValidPosition(){
    int loc = -1; 
    
    cout<< "Please enter a number between [0, 16)" << endl;
    cin >> loc; 
    
    while(loc<0 || loc >=16 || !cin){
        cin.clear();
        cout << "Please enter a number between [0, 16)" << endl;
        cin >> loc; 
    }
    
    return loc; 
    
};
