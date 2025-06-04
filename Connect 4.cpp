/*
Connect Four
Janine Villegas
04/15/2025

Description: A simplified version of connect four where each player can be the yellow checker (Y) or Red
checker (R). The user inputs where they want to place their checker based on the column, then the row is 
selected based on how many are currently in a column. The user wins if the user's checkers are four in
a row. There is a tie if all checkers are filled on the board without four in a row of the same user.

Notes: One singular class was used to keep track of all board and player movements
*/
#include <iostream>

using namespace std;

// starts initial functions

// function to check if move is valid
bool isValidMove(int column, char board[6][7]) {
    if (column == -1) {
        return true;
    }
    if (column < 1 || column > 7) {
        return false;
    }

    if (board[0][column - 1] != '-') {
        return false;
    }
    
    return true;
}

// function to check if there is a tie
bool isTieGame(char board[6][7]) {
    for (int j = 0; j < 7; j++) {
        if (board[0][j] == '-') {
            return false;
        }
    }
    return true;
}

// function to check if there is a horizontal win
bool horizontalWin(char board[6][7], char currentPlayer) {
    for (int i = 0; i < 6; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer && board[i][3] == currentPlayer) {
            return true;
        }
        else if ((board[i][1] == currentPlayer && board[i][2] == currentPlayer && board[i][3] == currentPlayer && board[i][4] == currentPlayer)) {
            return true;
        }
        else if (board[i][2] == currentPlayer && board[i][3] == currentPlayer && board[i][4] == currentPlayer && board[i][5] == currentPlayer) {
            return true;
        }
        else if (board[i][3] == currentPlayer && board[i][4] == currentPlayer && board[i][5] == currentPlayer && board[i][6] == currentPlayer) {
            return true;
        }
    }

    return false;
}

// function to check if there is a vertical win
bool verticalWin(char board[6][7], char currentPlayer) {
    for (int i = 0; i < 7; i++) {
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer && board[3][i] == currentPlayer) {
            return true;
        }
        else if (board[1][i] == currentPlayer && board[2][i] == currentPlayer && board[3][i] == currentPlayer && board[4][i] == currentPlayer) {
            return true;
        }
        else if (board[2][i] == currentPlayer && board[3][i] == currentPlayer && board[4][i] == currentPlayer && board[5][i] == currentPlayer) {
            return true;
        }
    }
    return false;
}

// function to check if there is a diagonal win
bool diagonalWin(char board[6][7], char currentPlayer) {
    // checks for a diagonal / (bottom to top-right)
    for (int i = 3; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == currentPlayer && board[i - 1][j + 1] == currentPlayer && board[i - 2][j + 2] == currentPlayer && board[i - 3][j + 3] == currentPlayer) {
                return true;
            }
        }
    }

    // checks for a diagnoal \ (top to bottom-left)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == currentPlayer && board[i + 1][j + 1] == currentPlayer && board[i + 2][j + 2] == currentPlayer && board[i + 3][j + 3] == currentPlayer) {
                return true;
            }
        }
    }

    return false;
}

class GameBoard {
    public:
        // creates 2D array with initial dashes
        GameBoard() {
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 7; j++) {
                    board[i][j] = '-';
                }
            }
        }

        // displays the board 
        void DisplayBoard() {
            for (int i = 0; i < 6; i++) {
                for (int j = 0; j < 7; j++) {
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
            cout << "=============" << endl;

            for (int i = 1; i <= 7; i++) {
                cout << i << " ";
            }
            cout << endl;
        }

        // function to switch player
        void switchPlayer() {
            if (currentPlayer == 'Y') {
                currentPlayer = 'R';
            }
            else {
                currentPlayer = 'Y';
            }
        }

        // function to "drop" the checker
        void DropChecker(int column, char currentPlayer) {
            for (int i = 5; i >= 0; i--) {
                if (board[i][column - 1] == '-') {
                    board[i][column - 1] = currentPlayer;
                    break;
                }
            }
        }

        // function that plays the game
        void GamePlay() {
            // initalizes column number
            int column;

            // initializes first player
            currentPlayer = 'R';

            // loop to keep track of each user movement
            while (true) {
                // breaks if the user input -1 to exit
                if (column == -1) {
                    break;
                }

                // displays original board
                DisplayBoard();
                cout << endl;

                // outputs who's turn it is
                if (currentPlayer == 'Y') {
                    cout << "It is Yellow's turn." << endl;
                }
                else {
                    cout << "It is Red's turn." << endl;
                }

                // asks for user to input which column they would like
                cout << "In which column would you like to move (-1 to exit)? ";
                cin >> column;

                // checks to see if the user move is valid
                while (!isValidMove(column, board)) {
                    cout << "Invalid move, try again." << endl;
                    if (currentPlayer == 'Y') {
                        cout << "It is Yellow's turn." << endl;
                    }
                    else {
                        cout << "It is Red's turn." << endl;
                    }
                    cout << "In which column would you like to move (-1 to exit)? ";
                    cin >> column;
                }

                // "drops" the checker for the player
                DropChecker(column, currentPlayer);

                // checks to see if the user won
                if (horizontalWin(board, currentPlayer) || verticalWin(board, currentPlayer) || diagonalWin(board, currentPlayer)) {
                    if (currentPlayer == 'Y') {
                        DisplayBoard();
                        cout << "Yellow wins!" << endl;
                        break;
                    }
                    else {
                        DisplayBoard();
                        cout << "Red wins!" << endl;
                        break;
                    }
                    break;
                }

                // checks to see if there is a tie
                if (isTieGame(board)) {
                    DisplayBoard();
                    cout << "Game over. Tie game." << endl;
                    break;
                }

                // switches current player
                switchPlayer();
            }

        }

    private:
        char board[6][7];
        char currentPlayer;
        int column;

};



int main() {
    // initalizes gameplay
    GameBoard board;

    // actually plays the game
    board.GamePlay();
    return 0;
}
