//Jordan Lim
//Maze
//CPSC 120

#include <iostream>
using namespace std;

int main(){

const int rows = 16;
const int columns = 30;
char board[rows][columns+1] = {
"**************************=***",
"***     *     *     *    *   *",
"***  *  *  *  *  *  *  *  *  *",
"***  *  *  *  *  *  *  *  *  *",
"***  *  *  *  *  *  *  *  *  *",
"***  *  *  *  *  *  *  *  *  *",
"***  *  *  *  *  *  *  *  *  *",
"***  *     *     *     *     *",
"***  *************************",
"*                            *",
"*  ***********  **** *********",
"*                            *",
"********* ************* ******",
"*                            *",
"*     ********    *********  *",
"***************i**************",
};

for (int x = 0; x < rows; x++) {
	for (int y = 0; y < columns; y++){
		cout << board[x][y]<< " ";}
	cout << endl;
}

//locate i
int irow = 15;
int icolumn =15;
int i = 0;
char m;
//move i


while ( 0 <= irow && 0 <= icolumn && icolumn <= 30 ){
	cin >> m;
	
	if( m == 'W' || m == 'w' )
	{	if( board[irow-1][icolumn] == ' ')
		{	
		board[irow-1][icolumn] = 'i';
		board[irow][icolumn] = ' ';
		irow = irow-1;
	    }
		if( board[irow-1][icolumn] == '*')
		{	
		board[irow-1][icolumn] = '*';
		board[irow][icolumn] = 'i';
	    }
	    if( board[irow-1][icolumn] == '=')
	    {
	    board[irow-1][icolumn] = 'i';
		board[irow][icolumn] = ' ';
		irow = irow-1;
		cout << "Congrats! You reached the end of the maze!" << endl;
		return 0;
	    }
	}
	if( m == 'A' || m == 'a' )
	{	if( board[irow][icolumn-1] == ' ')
		{
		board[irow][icolumn-1] = 'i';
		board[irow][icolumn] = ' ';
		icolumn = icolumn-1;
		}
		if( board[irow][icolumn-1] == '*')
		{	
		board[irow][icolumn-1] = '*';
		board[irow][icolumn] = 'i';
	    }
	    if( board[irow][icolumn-1] == '=')
	    {
	    board[irow][icolumn-1] = 'i';
		board[irow][icolumn] = ' ';
		icolumn = icolumn-1;
		cout << "Congrats! You reached the end of the maze!" << endl;
		return 0;
	    }
	}
	if( m == 'S' || m == 's' )
	{	if( board[irow+1][icolumn] == ' ')
		{
		board[irow+1][icolumn] = 'i';
		board[irow][icolumn] = ' ';
		irow = irow+1;
		}
		if( board[irow+1][icolumn] == '*')
		{	
		board[irow+1][icolumn] = '*';
		board[irow][icolumn] = ' ';
	    }
	    if( board[irow+1][icolumn] == '=')
	    {
	    board[irow+1][icolumn] = 'i';
		board[irow][icolumn] = ' ';
		irow = irow+1;
		cout << "Congrats! You reached the end of the maze!" << endl;
		return 0;
	    }
	}
	if( m == 'D' || m == 'd' )
	{	if( board[irow][icolumn+1] == ' ')
		{
		board[irow][icolumn+1] = 'i';
		board[irow][icolumn] = ' ';
		icolumn = icolumn+1;
		}
		if( board[irow][icolumn+1] == '*')
		{	
		board[irow][icolumn+1] = '*';
		board[irow][icolumn] = 'i';
	    }
	    if( board[irow][icolumn+1] == '=')
	    {
	    board[irow][icolumn+1] = 'i';
		board[irow][icolumn] = ' ';
		icolumn = icolumn+1;
		cout << "Congrats! You reached the end of the maze!" << endl;
		return 0;
	    }
	}
	

	for (int x = 0; x < rows; x++) {
	for (int y = 0; y < columns; y++){
		cout << board[x][y]<< " ";}
	cout << endl;	
		
}
}
return 0;
}