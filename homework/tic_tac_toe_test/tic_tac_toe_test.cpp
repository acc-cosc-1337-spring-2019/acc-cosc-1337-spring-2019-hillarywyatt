#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player X") 
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");

}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		1 2 3
		4 5 6
		7 8 9

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

//- 2 -
//- 5 -
//- 8 -
TEST_CASE("Test win by second column", "[X wins second column]")
{ 
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

//- - 3
//- - 6
//- - 9
TEST_CASE("Test win by third column", "[X wins third column]")
{ 
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

//1 2 3
//- - -
//- - -
TEST_CASE("Test win by first row", "[X wins first row]")
{ 
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

//- - -
//4 5 6
//- - -
TEST_CASE("Test win by second row", "[X wins second row]") 
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

//- - -
//- - -
//7 8 9
TEST_CASE("Test win by third row", "[X wins third row]") 
{ 
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

//1 - -
//- 5 -
//- - 9
TEST_CASE("Test win by diagonal 1", "[X wins disgonally]") 
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}

//- - 3
//- 5 -
//7 - -
TEST_CASE("Test win by diagonal 2", "[X wins disgonally other way]")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "X");
}
//1 2 3
//4 5 6
//7 8 9

TEST_CASE("Test Tie or No win", "[now winner/tie ]") 
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//x         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//o      
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x 
	board.display_board();
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//o

	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x 
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//x 
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//o
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//x 

	REQUIRE(board.game_over() == true);
	REQUIRE(board.get_winner() == "C");
}



