#include "tic_tac_toe.h"

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		return true;
	}
	return false;
}

void TicTacToe::mark_board(int position)
{
	pegs[ position - 1 ] = next_player;
	set_next_player();
}

//void TicTacToe::display_board() const
//{
//}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player == "O";
	}
	else
	{
		next_player == "X";
	}
}

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; ++i)
	{
		if(pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i+6] && pegs[i +6] != " ")
		{
			return true;
		}
	}
	return false;
	
}

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;

}
// wine diagonally 
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
