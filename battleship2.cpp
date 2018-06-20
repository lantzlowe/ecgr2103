#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
     
using namespace std;
     
	int i = 0;
    	int j = 0;
    	int row = 0; // Rows of each game board
    	int col = 0; // Columns of each game board
    	int board1[7][7] = {0};
    	int board2[7][7] = {0};
	int numHit1 = 0;
    	int numHit2 = 0;
    	int gameEnd = 0;
    	int f;
    	int g;
     
    	void printBoard1();
    	void printBoard2();
     
    	int main(){
		int easyBoard1 = 0;
		int easyBoard2 = 0;
		int medBoard1 = 0;
		int medBoard2 = 0;
		int hardBoard1 = 0;
		int hardBoard2 = 0;
	
		easyBoard1 = (rand() % 3) + 1;
		easyBoard2 = (rand() % 3) + 1;
		medBoard1 = (rand() % 3) + 1;
		medBoard2 = (rand() % 3) + 1;
		hardBoard1 = (rand() % 3) + 1;
		hardBoard2 = (rand() % 3) + 1;

      		string player1; // used to input player 1's name
      		string player2; // used to input player 2's name
     
    		char gameMode = '?'; // The letters that will be used to select difficulty level
     
    		cout << "Select difficulty.\n\n"; // Prompts the user to select difficulty level
    		cout << "For easy:\t type 'E'\n"; 
    		cout << "For medium:\t type 'M'\n";
    		cout << "For hard:\t type 'H'\n\n";
     
    		cin >> gameMode; // User enters preferred game mode
     
    		if(gameMode == 'E') { // Dimensions of the board with Easy difficulty level selected
    			cout << "Difficulty: Easy\n";
    			row = 5; // An additional row was added to the required 5 rows to allow for the labeling of each row with numbers
    			col = 5; // An additional column was added to the required 5 columns to allow for the labeling of each column with capital 						letters
        		i = 5;
        		j = 5;
     

			// 1st possible default Easy Game board1
			if (easyBoard1 == 1) {
    				board1[0][0] = 1;	//A1
    				board1[1][0] = 1;	//A2
    				board1[2][0] = 1;	//A3
    				board1[1][2] = 1;	//C2
    				board1[2][2] = 1;	//C3
    				board1[3][1] = 1;	//B4
    				board1[3][2] = 1;	//C4
    				board1[3][3] = 1;	//D4
    				board1[3][4] = 1;	//E4
			}
			// 2nd possible default Easy Game board1
			else if (easyBoard1 == 2) {
    				board1[0][1] = 1;	//B1
    				board1[0][2] = 1;	//C1
    				board1[0][3] = 1;	//D1
    				board1[0][4] = 1;	//E1
    				board1[3][0] = 1;	//A4
    				board1[4][0] = 1;	//A5
    				board1[4][2] = 1;	//C5
    				board1[4][3] = 1;	//D5
    				board1[4][4] = 1;	//E5
			}
			// 3rd possible default Easy Game board1
			else if (easyBoard1 == 3) {
    				board1[2][1] = 1;	//B3
    				board1[2][2] = 1;	//C3
    				board1[2][3] = 1;	//D3
    				board1[2][4] = 1;	//E3
    				board1[1][0] = 1;	//A1
    				board1[2][0] = 1;	//A2
    				board1[3][0] = 1;	//A3
    				board1[4][1] = 1;	//B5
    				board1[4][2] = 1;	//C5
			}


			// 1st possible default Easy Game board2
			if (easyBoard2 == 1) {
    				board2[0][0] = 1;	//A1
    				board2[1][0] = 1;	//A2
    				board2[2][0] = 1;	//A3
    				board2[1][2] = 1;	//C2
    				board2[2][2] = 1;	//C3
    				board2[3][1] = 1;	//B4
    				board2[3][2] = 1;	//C4
    				board2[3][3] = 1;	//D4
    				board2[3][4] = 1;	//E4
			}
			// 2nd possible default Easy Game board2
			else if (easyBoard2 == 2) {
    				board2[0][1] = 1;	//B1
    				board2[0][2] = 1;	//C1
    				board2[0][3] = 1;	//D1
    				board2[0][4] = 1;	//E1
    				board2[3][0] = 1;	//A4
    				board2[4][0] = 1;	//A5
    				board2[4][2] = 1;	//C5
    				board2[4][3] = 1;	//D5
    				board2[4][4] = 1;	//E5
			}
			// 3rd possible default Easy Game board2
			else if (easyBoard2 == 3) {
    				board2[2][1] = 1;	//B3
    				board2[2][2] = 1;	//C3
    				board2[2][3] = 1;	//D3
    				board2[2][4] = 1;	//E3
    				board2[1][0] = 1;	//A1
    				board2[2][0] = 1;	//A2
    				board2[3][0] = 1;	//A3
    				board2[4][1] = 1;	//B5
    				board2[4][2] = 1;	//C5
			}

		}

    		else if(gameMode == 'M') { // Dimensions of the board with Medium difficulty level selected
    			cout << "Difficulty: Medium\n";
    			row = 6; // An additional row was added to the required 6 rows to allow for the labeling of each row with numbers
    			col = 6; // An additional column was added to the required 6 columns to allow for the labeling of each column with capital 						letters
        		i = 6;
        		j = 6;
	
			// Medium game boards
    			if (medBoard1 == 1 ) {
    				board1[0][1] = 1 ;	//B1
    				board1[0][2] = 1 ;	//C1
    				board1[0][3] = 1 ;	//D1
    				board1[2][1] = 1 ;	//B3
    				board1[2][2] = 1 ;	//C3
    				board1[5][0] = 1 ;	//A6
    				board1[5][1] = 1 ;	//B6
    				board1[5][2] = 1 ;	//C6
    				board1[5][3] = 1 ;	//D6
    			}
    
    			else if (medBoard1 == 2) {
   				board1[0][1] = 1 ;	//B1
    				board1[1][3] = 1 ;	//D2
    				board1[1][4] = 1 ;	//E2
    				board1[1][5] = 1 ;	//F2
    				board1[2][4] = 1 ;	//E3
    				board1[2][5] = 1 ;	//F3
    				board1[1][1] = 1 ;	//B2
    				board1[2][1] = 1 ;	//B3
    				board1[3][1] = 1 ;	//B4
    			}
    
    			else if (medBoard1 == 3){
    				board1[0][2] = 1 ;	//C1
    				board1[0][3] = 1 ;	//D1
    				board1[1][1] = 1 ;	//B2
    				board1[2][1] = 1 ;	//B3
    				board1[3][1] = 1 ;	//B4
    				board1[4][1] = 1 ;	//B5
    				board1[0][5] = 1 ;	//F1
    				board1[1][5] = 1 ;	//F2
    				board1[2][5] = 1 ;	//F3
    			}

			if (medBoard2 == 1 ) {
    				board2[0][1] = 1 ;	//B1
    				board2[0][2] = 1 ;	//C1
    				board2[0][3] = 1 ;	//D1
    				board2[2][1] = 1 ;	//B3
    				board2[2][2] = 1 ;	//C3
    				board2[5][0] = 1 ;	//A6
    				board2[5][1] = 1 ;	//B6
    				board2[5][2] = 1 ;	//C6
    				board2[5][3] = 1 ;	//D6
    			}
    
    			else if (medBoard2 == 2) {
   				board2[0][1] = 1 ;	//B1
    				board2[1][3] = 1 ;	//D2
    				board2[1][4] = 1 ;	//E2
    				board2[1][5] = 1 ;	//F2
    				board2[2][4] = 1 ;	//E3
    				board2[2][5] = 1 ;	//F3
    				board2[1][1] = 1 ;	//B2
    				board2[2][1] = 1 ;	//B3
    				board2[3][1] = 1 ;	//B4
    			}
    
    			else if (medBoard2 == 3){
    				board2[0][2] = 1 ;	//C1
    				board2[0][3] = 1 ;	//D1
    				board2[1][1] = 1 ;	//B2
    				board2[2][1] = 1 ;	//B3
    				board2[3][1] = 1 ;	//B4
    				board2[4][1] = 1 ;	//B5
    				board2[0][5] = 1 ;	//F1
    				board2[1][5] = 1 ;	//F2
    				board2[2][5] = 1 ;	//F3
    			}
		}

    		else if(gameMode == 'H') { // Dimensions of the board with Hard difficulty level selected
    			cout << "Difficulty: Hard\n";
    			row = 7; // An additional row was added to the required 7 rows to allow for the labeling of each row with numbers
    			col = 7; // An additional column was added to the required 7 columns to allow for the labeling of each column with capital 						letters
        		i = 7;
        		j = 7;

			// 1st possible default Hard Game board1
			if (hardBoard1 == 1) {
    				board1[0][3] = 1;	//D1
    				board1[1][3] = 1;	//D2
    				board1[2][3] = 1;	//D3
    				board1[3][3] = 1;	//D4
    				board1[6][1] = 1;	//B7
    				board1[6][2] = 1;	//C7
    				board1[6][3] = 1;	//D7
    				board1[5][4] = 1;	//E6
    				board1[5][5] = 1;	//F6
			}
			// 2nd possible default Hard Game board1
			else if (hardBoard1 == 2) {
    				board1[1][1] = 1;	//B2
    				board1[2][1] = 1;	//B3
    				board1[3][1] = 1;	//B4
    				board1[4][1] = 1;	//B5
    				board1[1][4] = 1;	//E2
    				board1[2][4] = 1;	//E3
    				board1[3][4] = 1;	//E4
    				board1[6][4] = 1;	//E7
    				board1[6][5] = 1;	//F7
			}
			// 3rd possible default Hard Game board1
			else if (hardBoard1 == 3) {
    				board1[0][0] = 1;	//A1
    				board1[0][1] = 1;	//B1
    				board1[0][2] = 1;	//C1
    				board1[2][0] = 1;	//A3
    				board1[3][0] = 1;	//A4
    				board1[4][0] = 1;	//A5
    				board1[5][0] = 1;	//A6
    				board1[5][2] = 1;	//C6
    				board1[5][3] = 1;	//D6
			}

			// 1st possible default Hard Game board2
			if (hardBoard2 == 1) {
    				board2[0][3] = 1;	//D1
    				board2[1][3] = 1;	//D2
    				board2[2][3] = 1;	//D3
    				board2[3][3] = 1;	//D4
    				board2[6][1] = 1;	//B7
    				board2[6][2] = 1;	//C7
    				board2[6][3] = 1;	//D7
    				board2[5][4] = 1;	//E6
    				board2[5][5] = 1;	//F6
			}
			// 2nd possible default Hard Game board2
			else if (hardBoard2 == 2) {
    				board2[1][1] = 1;	//B2
    				board2[2][1] = 1;	//B3
    				board2[3][1] = 1;	//B4
    				board2[4][1] = 1;	//B5
    				board2[1][4] = 1;	//E2
    				board2[2][4] = 1;	//E3
    				board2[3][4] = 1;	//E4
    				board2[6][4] = 1;	//E7
    				board2[6][5] = 1;	//F7
			}
			// 3rd possible default Hard Game board2
			else if (hardBoard2 == 3) {
    				board2[0][0] = 1;	//A1
    				board2[0][1] = 1;	//B1
    				board2[0][2] = 1;	//C1
    				board2[2][0] = 1;	//A3
    				board2[3][0] = 1;	//A4
    				board2[4][0] = 1;	//A5
    				board2[5][0] = 1;	//A6
    				board2[5][2] = 1;	//C6
    				board2[5][3] = 1;	//D6
			}
		}

    		else { // Result of user failing to input one of the 3 appropriate difficulty levels for game play
    			cout << "Game over.\n";
    		}
     
      		//printBoard(); // inclusion of the function providing the game board layout
     
      		cout << "Please enter player number 1's name:" << endl;
      		cin.ignore();
      		getline(cin, player1);
		cout << endl << endl;
     
      		cout << "Please enter player number 2's name:" << endl;
      		getline(cin, player2);
		cout << endl << endl;
     
     
     		char RowGuess, ColumnGuess;
    		string guess;
     
     
    		while (gameEnd != 1){
    		cout << player1 << "'s turn, please make a guess." << endl;
     
     
    		getline(cin, guess);
		cout << endl << endl;
     
    		ColumnGuess = guess[0];
    		RowGuess = guess[1];
     
    		if (ColumnGuess == 'A'){
    			g = 0;
    		}
    		else if (ColumnGuess == 'B'){
    			g = 1;
    		}
    		else if (ColumnGuess == 'C'){
    			g = 2;
    		}
    		else if (ColumnGuess == 'D'){
    			g = 3;
    		}
    		else if (ColumnGuess == 'E'){
    			g = 4;
    		}
    		else if (ColumnGuess == 'F'){
    			g = 5;
    		}
    		else if (ColumnGuess == 'G'){
    			g = 6;
    		}
     
    		if (RowGuess == '1'){
    			f = 0;
    		}
    		else if (RowGuess == '2'){
    			f = 1;
    		}
    		else if (RowGuess == '3'){
    			f = 2;
    		}
    		else if (RowGuess == '4'){
    			f = 3;
    		}
    		else if (RowGuess == '5'){
    			f = 4;
    		}
    		else if (RowGuess == '6'){
    			f = 5;
    		}
    		else if (RowGuess == '7'){
    			f = 6;
    		}
     
    		else {
    			cout << "Invalid input" << endl;
    		}
     
     
    		if (board1[f][g] == 0){
    			board1[f][g] = 3;
    			cout << "Miss\n\n";
    		}
    		else if (board1[f][g] == 1){
    			board1[f][g] = 2;
    			numHit1 = numHit1 + 1;
    			cout << "Hit\n\n";
    		}
      		cout << "Here is the current game board: " << endl;
     
      		cout << player2 << "'s board" << endl;
      		printBoard2();
		cout << endl;
     
      		cout << player1 << "'s board" << endl;
      		printBoard1();
		cout << endl;
     
    		if (numHit1 == 9) {
    			gameEnd = 1;
			cout << "Game Over" << endl;
			cout << player1 << " is the winner!" << endl;
    		}
     
    		if (gameEnd != 1){
      			cout << player2 << "'s turn, please make a guess." << endl;
     
     
    			getline(cin, guess);
			cout << endl << endl;
     
    			ColumnGuess = guess[0];
    			RowGuess = guess [1];
     
    			if (ColumnGuess == 'A'){
    				g = 0;
    			}
    			else if (ColumnGuess == 'B'){
    				g = 1;
    			}
    			else if (ColumnGuess == 'C'){
    				g = 2;
    			}
    			else if (ColumnGuess == 'D'){
    				g = 3;
    			}
    			else if (ColumnGuess == 'E'){
    				g = 4;
    			}
    			else if (ColumnGuess == 'F'){
    				g = 5;
    			}
    			else if (ColumnGuess == 'G'){
    				g = 6;
    			}
     
    			if (RowGuess == '1'){
    				f = 0;
    			}
    			else if (RowGuess == '2'){
    				f = 1;
    			}
    			else if (RowGuess == '3'){
    				f = 2;
    			}
    			else if (RowGuess == '4'){
    				f = 3;
    			}
    			else if (RowGuess == '5'){
    				f = 4;
    			}
    			else if (RowGuess == '6'){
    				f = 5;
    			}
    			else if (RowGuess == '7'){
    				f = 6;
    			}
     
    			else {
    				cout << "Invalid input" << endl;
    			}
     
     
     
    			if (board2[f][g] == 0){
    				board2[f][g] = 3;
    				cout << "Miss\n\n";
    			}
    			else if (board2[f][g] == 1){
    				board2[f][g] = 2;
    				numHit2 = numHit2 + 1;
    				cout << "Hit\n\n";
    			}
      			cout << "Here is the current game board: " << endl;
     
      			cout << player2 << "'s board" << endl;
      			printBoard2();
			cout << endl;
     
      			cout << player1 << "'s board" << endl;
      			printBoard1();
			cout << endl;
    		}
    		if (numHit2 == 9) {
    			gameEnd = 1;
			cout << "Game over" << endl;
			cout << player2 << " is the winner!" << endl;
    		}
     
    		}
     
     
    /*
    	-Write a loop that counts the number of hits each player makes
     
    	-Write an if statement that tells the game to end after one player achieves 9 hits
     
    	-Write a statement that allows the player to make a guess
    		-Try using switch statements to get the values
     
    */
     
     
      		return 0;
    	}
     
     
    	void printBoard1() {
    		for (i = 0; i < row; ++i){  // for loop used to label each column by capital letter
     
     
        		if (i == 0) { // if statement used to label each column
          			cout << " \tA\tB\tC\tD\tE";
     
          			if (col == 5){
          				cout << endl;
          			}
     
            			if (col == 6) { // if statement specifically applies to letter used to label columns in the Medium game board 
            				cout << "\t" << "F" << endl;
            			}
     
            			if (col == 7) { // if statement only applies to the labeling of the Hard mode game board 
            				cout << "\t" << "F" << "\t" << "G" << endl;
            			}
     
        		}
     
          		if (i >= 0){ // if statement used to label each row by number
            			cout << i +1 << "\t";
          		}
     
     
     
          		for (j = 0; j < col; ++j){
            			if(board2[i][j] == 0) {
    					cout << "*";
    				}
     
            			else if(board2[i][j] == 1) {
    					cout << "*";
    				} 
    				else if(board2[i][j] == 2) {
    					cout << "X";
    				}
    	 			else if(board2[i][j] == 3) {
    					cout << "0";
    				}
     
            			if (j >= 0){ // provides tabbed spaces between each numbered column
              				cout << "\t";
              			}
          		}
     
        		cout << endl << endl;
      		}
     
      		return;
    	}
     
    	void printBoard2() {
    		for (i = 0; i < row; ++i){  // for loop used to label each column by capital letter
     
     
        		if (i == 0) { // if statement used to label each column
          			cout << " \tA\tB\tC\tD\tE";
     
          			if (col == 5){
          				cout << endl;
          			}
     
            			if (col == 6) { // if statement specifically applies to letter used to label columns in the Medium game board 
            				cout << "\t" << "F" << endl;
            			}
     
            			if (col == 7) { // if statement only applies to the labeling of the Hard mode game board 
            				cout << "\t" << "F" << "\t" << "G" << endl;
            			}
     
        		}
     
          		if (i >= 0){ // if statement used to label each row by number
            			cout << i +1 << "\t";
          		}
     
     
     
          		for (j = 0; j < col; ++j){
            			if(board1[i][j] == 0) {
    					cout << "*";
    				}
     
            			else if(board1[i][j] == 1) {
    					cout << "*";
    				} 
    				else if(board1[i][j] == 2) {
    					cout << "X";
    				}
    	 			else if(board1[i][j] == 3) {
    					cout << "0";
    				}
     
            			if (j >= 0){ // provides tabbed spaces between each numbered column
              				cout << "\t";
              			}
          		}
     
        		cout << endl << endl;
      		}
     
      		return;
    	}
