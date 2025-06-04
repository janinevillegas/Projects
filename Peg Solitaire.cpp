/*
Solitaire Peg Game
Janine Villegas
02/17/2025

Description: A solitaire peg-based game where the user can input a move (based on
the alphabet A-O), where a peg 'T' can jump over another peg, removing it. Based
off of the popular game at Cracker Barrel, the user can win if one peg remains

Notes: No arrays or vectors were used, only functions
*/


#include <iostream>

using namespace std;


int row(char peg);
int col(char peg);

// global variables to keep track of pegs
char pegA = '.'; char pegB = 'T'; char pegC = 'T'; char pegD = 'T'; char pegE = 'T'; char pegF = 'T'; char pegG = 'T'; char pegH = 'T'; char pegI = 'T'; char pegJ = 'T'; char pegK = 'T'; char pegL = 'T'; char pegM = 'T'; char pegN = 'T'; char pegO = 'T';

// function to draw board
void drawBoard() {
    cout << "    " << pegA << "      " << "       A" << endl;
    cout << "   " << pegB << " " << pegC << "           B C" << endl;
    cout << "  " << pegD << " " << pegE << " " << pegF << "         D E F" << endl;
    cout << " " << pegG << " " << pegH << " " << pegI << " " << pegJ << "       G H I J" << endl;
    cout << pegK << " " << pegL << " " << pegM << " " << pegN << " " << pegO << "     K L M N O" << endl;
}

// function to move pegs
void movePegs(char first, char over, char end) {
    // move first peg and turn it into '.'
    if (first == 'A') {
        pegA = '.';
    }
    else if (first == 'B') {
        pegB = '.';
    }
    else if (first == 'C') {
        pegC = '.';
    }
    else if (first == 'D') {
        pegD = '.';
    }
    else if (first == 'E') {
        pegE = '.';
    }
    else if (first == 'F') {
        pegF = '.';
    }
    else if (first == 'G') {
        pegG = '.';
    }
    else if (first == 'H') {
        pegH = '.';
    }
    else if (first == 'I') {
        pegI = '.';
    }
    else if (first == 'J') {
        pegJ = '.';
    }
    else if (first == 'K') {
        pegK = '.';
    }
    else if (first == 'L') {
        pegL = '.';
    }
    else if (first == 'M') {
        pegM = '.';
    }
    else if (first == 'N') {
        pegN = '.';
    }
    else if (first == 'O') {
        pegO = '.';
    }

    // jump over middle peg and make it a '.'
    if (over == 'A') {
        pegA = '.';
    }
    else if (over == 'B') {
        pegB = '.';
    }
    else if (over == 'C') {
        pegC = '.';
    }
    else if (over == 'D') {
        pegD = '.';
    }
    else if (over == 'E') {
        pegE = '.';
    }
    else if (over == 'F') {
        pegF = '.';
    }
    else if (over == 'G') {
        pegG = '.';
    }
    else if (over == 'H') {
        pegH = '.';
    }
    else if (over == 'I') {
        pegI = '.';
    }
    else if (over == 'J') {
        pegJ = '.';
    }
    else if (over == 'K') {
        pegK = '.';
    }
    else if (over == 'L') {
        pegL = '.';
    }
    else if (over == 'M') {
        pegM = '.';
    }
    else if (over == 'N') {
        pegN = '.';
    }
    else if (over == 'O') {
        pegO = '.';
    }

    // move peg to end and make it a 'T'
    if (end == 'A') {
        pegA = 'T';
    }
    else if (end == 'B') {
        pegB = 'T';
    }
    else if (end == 'C') {
        pegC = 'T';
    }
    else if (end == 'D') {
        pegD = 'T';
    }
    else if (end == 'E') {
        pegE = 'T';
    }
    else if (end == 'F') {
        pegF = 'T';
    }
    else if (end == 'G') {
        pegG = 'T';
    }
    else if (end == 'H') {
        pegH = 'T';
    }
    else if (end == 'I') {
        pegI = 'T';
    }
    else if (end == 'J') {
        pegJ = 'T';
    }
    else if (end == 'K') {
        pegK = 'T';
    }
    else if (end == 'L') {
        pegL = 'T';
    }
    else if (end == 'M') {
        pegM = 'T';
    }
    else if (end == 'N') {
        pegN = 'T';
    }
    else if (end == 'O') {
        pegO = 'T';
    }
}

// function check if user wins
bool checkWin() {
    // initializes count to keep track of each peg
    int count = 0;
    if (pegA == 'T') {
        count += 1;
    }
    if (pegB == 'T') {
        count += 1;
    }
    if (pegC == 'T') {
        count += 1;
    }
    if (pegD == 'T') {
        count += 1;
    }
    if (pegE == 'T') {
        count += 1;
    }
    if (pegF == 'T') {
        count += 1;
    }
    if (pegG == 'T') {
        count += 1;
    }
    if (pegH == 'T') {
        count += 1;
    }
    if (pegI == 'T') {
        count += 1;
    }
    if (pegJ == 'T') {
        count += 1;
    }
    if (pegK == 'T') {
        count += 1;
    }
    if (pegL == 'T') {
        count += 1;
    }
    if (pegM == 'T') {
        count += 1;
    }
    if (pegN == 'T') {
        count += 1;
    }
    if (pegO == 'T') {
        count += 1;
    }

    // if two pegs are left on the board, the user wins, returning true
    if (count == 2) {
        return true;
    }
    else {
        return false;
    }
}

// function to return the value of the peg based on the character the user inputs
char pegValue(char peg) {
    if (peg == 'A') {
        return pegA;
    }
    else if (peg == 'B') {
        return pegB;
    }
    else if (peg == 'C') {
        return pegC;
    }
    else if (peg == 'D') {
        return pegD;
    }
    else if (peg == 'E') {
        return pegE;
    }
    else if (peg == 'F') {
        return pegF;
    }
    else if (peg == 'G') {
        return pegG;
    }
    else if (peg == 'H') {
        return pegH;
    }
    else if (peg == 'I') {
        return pegI;
    }
    else if (peg == 'J') {
        return pegJ;
    }
    else if (peg == 'K') {
        return pegK;
    }
    else if (peg == 'L') {
        return pegL;
    }
    else if (peg == 'M') {
        return pegM;
    }
    else if (peg == 'N') {
        return pegN;
    }
    else if (peg == 'O') {
        return pegO;
    }
    else {
        return -1;
    }
}

// function to check if the move is valid
bool checkValid(char first, char over, char end) {
    // checks to see if the move is valid as long as first and over has a value of 'T' and end has a value of '.'
    if (pegValue(first) != 'T' || pegValue(over) != 'T' || pegValue(end) != '.') {
        return false;
    }


    // if the value of the peg are all the same, returns false
    if (pegValue(first) == pegValue(over) && pegValue(over) == pegValue(end)) {
        return false;
    }
    

    // if an input is = 'Q' with other characters, output an invalid move
    if (first == 'Q' || over == 'Q' || end == 'Q') {
        return false;
    }


    // checks to see if user enters whitespace instead of a letter
    if (isspace(first) || isspace(over) || isspace(end)) {
        return false;
    }


    // checks to see if the user only enters alphabetical characters
    if (isalpha(first) == false || isalpha(over) == false || isalpha(end) == false) {
        return false;
    } 


    // checks to see if move is valid based on if it is in the same row
    if (row(first) == row(over) && row(over) == row(end) && row(first) == row(end)) {
        // checks to see if columns are valid
        if ((col(first) + 1 == col(over) && col(over) + 1 == col(end)) || (col(first) - 1 == col(over) && col(over) - 1 == col(end))) {
            // if columns are valid, checks ASCII value
            if (int(first) > int('O') || int(over) > int('O') || int(end) > int('O')) {
                return false;
            }
            else {
                return true;
            }
        }
        else {
            return false;
        }
    }
    else {
        // checks the difference of the rows, if equal move is valid
        if (row(first) - row(over) != row(over) - row(end)) {
            return false;
        }
    }

    // checks to see if move is valid based on if it is in the same column
    if (col(first) == col(over) && col(over) == col(end) && col(first) == col(end)) {
        // checks to see if rows are valid
        if ((row(first) + 1 == row(over) && row(over) + 1 == row(end)) || (row(first) - 1 == row(over) && row(over) - 1 == row(end))) {
            // checks to see if ASCII value is valid
            if (int(first) > int('O') || int(over) > int('O') || int(end) > int('O')) {
                return false;
            }
            else {
                return true;
            }
        }
        else {
            return false;
        }
    }


    // checks to see if move is valid if it is in different columns
    if (col(first) != col(over) && col(over) != col(end)) {
        if ((col(first) - 1 == col(over) && col(over) - 1 == col(end)) && (row(first) - 1 == row(over) && row(over) - 1 == row(end))) {
            return true;
        }
        else if ((col(first) + 1 == col(over) && col(over) + 1 == col(end)) && (row(first) + 1 == row(over) && row(over) + 1 == row(end))){
            return true;
        }
        else {
            return false;
        }


    }
    

    // checks to see if ascii value is in range
    if (int(first) > int('O') || int(over) > int('O') || int(end) > int('O')) {
        return false;
    }
    else {
        return true;
    }


}


int main() {
    // initilizes userMove variable
    string userMove;

    // draws board when user first sees it and asks for a move
    drawBoard();
    cout << "Enter move (for example FCA) or Q to quit: ";
    cin >> userMove;



    // while loop as long as user does not enter "Q"
    while (userMove != "Q") {
        if (userMove.size() != 3) {
            cout << "Move is not valid. Try again." << endl;
            drawBoard();
            cout << "Enter move (for example FCA) or Q to quit: ";
            cin >> userMove; 
        }

        // checks to see if user move is valid
        // if invalid, displays error message
        if (checkValid(userMove[0], userMove[1], userMove[2]) == false) {
            cout << "Move is not valid. Try again." << endl;
            drawBoard();
            cout << "Enter move (for example FCA) or Q to quit: ";
            cin >> userMove;  
        }

        // if valid, continues with game
        else {
            // draws board based on user input (userMove)
            movePegs(userMove[0], userMove[1], userMove[2]);
            drawBoard();

            // checks to see if user won, if they won the loop breaks
            if (checkWin()) {
                cout << "Enter move (for example FCA) or Q to quit: " << endl;
                cout << "You win! Congratulations!";
                break;
            }
            

            // continues to ask user to enter a move
            cout << "Enter move (for example FCA) or Q to quit: ";
            cin >> userMove;
        }

    }     
}




// row returns the row of the given peg location
// Parameter peg is a character, with the letter of the peg (A-O)
// Letter should be upper case, between A and O
// Returns the row (1 through 5). 
// Row 1 is the top row (with one peg), row 5 is the bottom (with 5 pegs)
int row(char peg) {
	if (peg >= 'K') {
		return 5;
	}
	else if (peg >= 'G') {
		return 4;
	}
	else if (peg >= 'D') {
		return 3;
	}
	else if (peg >= 'B') {
		return 2;
	}
	else if (peg == 'A') {
		return 1;
	}
	else {
		//cout << "Error - row: Invalid peg: " << peg << endl;
		return -1;
	}
}

// col returns the column of the given peg location
// Parameter peg is a character, with the letter of the peg (A-O)
// Letter should be upper case, between A and O
// Returns the column (1 through 5). 
// At each level, the first letter is column 1, the second letter is column 2, etc.
int col(char peg) {
	if (peg >= 'K') {
		return peg - 'K' + 1;
	}
	else if (peg >= 'G') {
		return peg - 'G' + 1;
	}
	else if (peg >= 'D') {
		return peg - 'D' + 1;
	}
	else if (peg >= 'B') {
		return peg - 'B' + 1;
	}
	else if (peg == 'A') {
		return 1;
	}
	else {
		//cout << "Error - col: Invalid peg: " << peg << endl;
		return -1;
	}
}