#include "tic_tac_toe.h"
#include <iostream>

void TicTacToe::start_game(string first_player)
{
	next_player = first_player;
	clear_board();
}

string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win() || check_board_full() )
	{
		return true;
	}
	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[ position - 1 ] = next_player;

	if (!game_over()) //If fame_over == false
	{
		set_next_player();
	}
	
}

void TicTacToe::display_board() const
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}
//win by column: 0,3,6 or 1,4,5 or 2,5,8
//0 1 2
//3 4 5
//6 7 8

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; ++i)
	{
		if(pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i + 6] != " ")//each index plus 3 to get to new row of that column
		{
			return true;
		}
	}
	return false;
}
//win by row: 0,1,2 or 3,4,5 or 6,7,8
//0 1 2
//3 4 5
//6 7 8

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i += 3)// loops to new row because +=3/could also do if for each row instead of looping through indexes
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;
}
// 0,4,8 or 2,4,6 wins diagonally 
//0 1 2
//3 4 5
//6 7 8

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
	{
		return true;
	}
	else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ")
	{
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::clear_board()
{
	for (auto& p : pegs)
	{
		p = " ";
	}
}
bool TicTacToe::check_board_full()
{
	for (auto& p : pegs)
	{
		if (p == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::set_winner(string player)
{
	if (check_board_full())
	{
		winner = "C";
	}
	else
	{
		winner = next_player;
	}
}

string TicTacToe::get_winner()
{
	return winner;
}
