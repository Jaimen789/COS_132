#include <iostream>

using namespace std;


    char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    
    int game_counter = 1;
    bool ongoing = true;

    int choice;

    int row, col;

    int player_w;
    int player_b;

void display_board(){
    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < 3 ; j++){
            cout << board[i][j] ;
        }
        cout << endl;
    }
}

void printFreeFields(char** board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'w' && board[i][j] != 'b') {
                // Field is empty, so it's a free field
                cout << i * 3 + j + 1 << " " ;
            }
            
            
        }
        cout << endl;
    }
    cout << endl;
}

bool gameover() {
    bool draw = false;  // Declare draw within the function scope.

    // Checking the win for Simple Rows and Simple Column
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            cout << "Player " << board[i][0] << " wins!" << endl;
            return true;  // Player has won
        }
    }

    // Checking the win for both diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        cout << "Player " << board[1][1] << " wins!" << endl;
        return true;  // Player has won
    }

    // Checking if the game is in continue mode or not
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;  // Game is still ongoing
            }
        }
    }

    // Checking if the game already ended in a draw
    draw = true;
    cout << "The game ended in a draw!" << endl;
    return true;  // Game is a draw
}


void sub_value_in_board(int pos, int turn){
    switch(pos){
        case 1: row = 0 ; col = 0; break;
        case 2: row = 0 ; col = 1; break;
        case 3: row = 0 ; col = 2; break;
        case 4: row = 1 ; col = 0; break;
        case 5: row = 1 ; col = 1; break;
        case 6: row = 1 ; col = 2; break;
        case 7: row = 2 ; col = 0; break;
        case 8: row = 2 ; col = 1; break;
        case 9: row = 2 ; col = 2; break;
        default:
            cout << "Invalid Move" ;
         
    }

    if(turn % 2 == 0 && board[row][col] != 'w' && board[row][col] != 'b'){
        board[row][col] = 'b';
        display_board();
        gameover();
    }
    else if(turn % 2 != 0 && board[row][col] != 'b' && board[row][col] != 'w'){
        //updating the position for 'O' symbol if
        //it is not already occupied
        board[row][col] = 'w';
        display_board();
        gameover();
        //turn = 'X';
    }else {
        //if input position already filled
        cout<<"Box already filled!n Please choose another!!nn";
    }

    gameover();
}


int main(){

    int player_b;
    int player_w;

    char** arr = new char*[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = board[i];
    }

    //cout << "game_counter" << game_counter << endl;

    while(game_counter < 10 && ongoing == true){
        // cout << "game_counter" << game_counter << endl;
        cout << "The fieds with the following field ID numbers are still free: " << endl;
        printFreeFields(arr);

        

        if(game_counter % 2 == 0){
            cout << "Black choose an empty field" << endl;
            cin >> player_b;

            sub_value_in_board(player_b, game_counter);
            if (gameover()) {
                return 0;
            }

        }else{
            cout << "White choose an empty field" << endl;
            cin >> player_w;

            sub_value_in_board(player_w, game_counter);

            if (gameover()) {
                return 0;
            }
        }

        game_counter++;
        
        
    }
    return 0;
}
