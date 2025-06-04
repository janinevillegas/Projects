    /* 
    ASCII Art House Builder
    Janine Villegas
    01/29/2025
    
    Description: The user can select an input (1 to build a house, 2 to build the original art). If the user
    selects 1, then it prompts the user to choose how many floor they would like, which would create a house
    with the same number of floors and the same number of windows based on user preference. If the user selects
    2, an original ASCII image will appear, as seen below.
    
    Notes:
    Original ASCII Art
 <3 <3 <3 <3 <3 <3 <3 <3 <3
 ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥

       (`_'`````'_`)       
       /           \      
      /    .   .    \     
      \    ( * )    /     
      _''-..___..-''_      
    /`;#'#'#. .#'#'#;`\   
    \_)      ,      (_/   
     #               #
      #             #
       #           #
        #         #
         #       #
          #     #
           #   #
            # #

 ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥ ➳♥
 <3 <3 <3 <3 <3 <3 <3 <3 <3


    */

#include <iostream>
#include <iomanip>
    

using namespace std;

int main() {
    // The menu output
    cout << "Program 1: House" << endl;
    cout << "Which option would you like?" << endl;
    cout << "1. Display house" << endl;
    cout << "2. Display original art" << endl;
    cout << "Your choice: ";
    
    // initializes userInput variable 
    int userInput;
    cin >> userInput;

    // if user selects 1, starts asking about the house
    if (userInput == 1) {
        // The prompt for entering the number of floors, if the user chooses the house
        cout << "How many floors should the house have? ";


        // initialized numFloors variable
        int numFloors;
        cin >> numFloors;


        // while loop to make roof & top of roof
        int roofSides = 0;
        //top of roof
        cout << string(numFloors, ' ') << string(numFloors * 3 + roofSides + 4, '_') << endl;
        
        //sides of roof
        while (numFloors > roofSides) {
            cout << string(numFloors - roofSides - 1, ' ') << '/' << string(roofSides * 2 + numFloors * 3 + 4, ' ') << '\\' << endl;
            roofSides++;
        }


        // while loop for repeating floors and windows
        int initialFloors = 1;
        while (initialFloors < numFloors) {

            // while loop to make top of window to repeat based on numFloors
            int initialTopWindow = 1;
            cout << "|  ";
            while (initialTopWindow <= numFloors) {
                cout << " _   ";
                initialTopWindow++;
            }
            cout << "|"; 
            cout << endl;
            
            // while loop to make base of windows and sides based on numFloors
            cout << "|  ";
            int initialWindow = 1;
            while (initialWindow <= numFloors) {
                cout << "|_|  "; 
                initialWindow++;
            }
            cout << "|";
            cout << endl;

            // while loop to add extra space under windows based on numFloors
            int extraSpace = 1;
            cout << "|  ";
            while (extraSpace <= numFloors) {
                cout << "     ";
                extraSpace++;
            }
            cout << "|"; 
            cout << endl;


            initialFloors++;
        }


        // making first floor door/windows

        // building top of door and windows
        int floor1WindowDoor = 1;
        cout << "|  ";
        while (floor1WindowDoor <= numFloors) {
            cout << " _   ";
            floor1WindowDoor++;
        }
        cout << "|" << endl;

        // building door
        cout << "|  | |";

        // building first floor windows
        int firstFloorWindow = 1;
        cout << "  ";
        while (firstFloorWindow <= numFloors - 1) {
            cout << "|_|  ";
            firstFloorWindow++;
        }

        // making first floor door and adding wall at the end of the last window
        cout << "|" << endl;
        cout << "|  | | " << string((2 * (numFloors - 1)) + (3 * (numFloors - 1)), ' ' ) << " |" << endl;
        

        // building house base
        cout << string((2 * (numFloors + 1)) + (3 * (numFloors + 1)) - 1, '/' );
    }


    // starts if user selects 2 and decides to view original artwork
    else if (userInput == 2) {

        // for loops for top border
        // for loop for <3 border
        int heartTopLine;
        for (heartTopLine = 0; heartTopLine < 9; heartTopLine++) {
            cout << string(1, ' ') << "<3";
        }
        cout << endl;

        // for loop for ➳♥ border
        int border1;
        for (border1 = 0; border1 < 9; border1++) {
            cout << string(1, ' ') << "➳♥";
        }
        cout << endl;


        // hard code of the base of the ASCII artwork
        cout << endl;
        cout << "       (`_'`````'_`)       " << endl;
        cout << "       /           \\      " << endl;
        cout << "      /    .   .    \\     " << endl;
        cout << "      \\    ( * )    /     " << endl;
        cout << "      _''-..___..-''_      " << endl;
        cout << "    /`;#'#'#. .#'#'#;`\\   " << endl;
        cout << "    \\_)      ,      (_/   " << endl;
        
        // while loop to build the bottom of the heart
        int heartLoop = 7;
        int whitespace = 5;
        while (heartLoop >= 0) {
            cout << string(whitespace, ' ') << "#" << string(heartLoop * 2, ' ') << " #" << endl;
            whitespace += 1;
            heartLoop--;
        }


        // for loops for bottom border
        // for loop for ➳♥ border
        cout << endl;
        int border2;
        for (border2 = 0; border2 < 9; border2++) {
            cout << string(1, ' ') << "➳♥";
        }

        // for loop for <3 border
        cout << endl;
        int heartBottomLine;
        for (heartBottomLine = 0; heartBottomLine < 9; heartBottomLine++) {
            cout << string(1, ' ') << "<3";
        }

    }

}