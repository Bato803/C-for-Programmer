class Board{
    char positionSelected[16]; 
    char winner; 
    
public:
    Board(){
        for(int i=0;i<16; i++){
            positionSelected[i] = '_'; 
        }
    };
    
    char* getPositions(){
        return positionSelected; 
    }
    
    int setPosition(int loc, char chr){
        
        if(positionSelected[loc]=='_'){
            positionSelected[loc] = chr;
        } else{
            //cout << "This position was already taken. ";
            return -1; 
        }
        
        return 0; 
    }
    
    
    char checkRows(char chr){
        
        for(int i=0; i<16; i+=4){
            int num=0;
            for(int j=0; j<4; j++){
                if(positionSelected[i+j]==chr) num+=1;
            }
            if(num==4) return chr;
        }
        
        return 'z';
    }
    
    char checkCols(char chr){
        for(int i=0; i<4; i++){
            int num=0;
            for(int j=0; j<16; j+=4){
                if(positionSelected[i+j]==chr) num+=1;
            }
            if(num==4) return chr;
        }
        
        return 'z';
    }
    
    char checkDiag(char chr){
        int num=0;
        for(int i=0; i<4; i++){
            if(positionSelected[i+4*i]==chr) num+=1;
        }
        if(num==4) return chr;
        
        num=0; 
        for(int i=3; i>=0; i--){
            if(positionSelected[i+4*i]==chr) num+=1;
        }
        if(num==4) return chr;
        
        return 'z';
    }
    
    char determineWinner(char chr){
        char winner = 'z'; 
        if(winner=='z') winner=checkRows(chr); 
        if(winner=='z') winner=checkCols(chr);
        if(winner=='z') winner=checkDiag(chr); 
        return winner; 
    }
    
};
