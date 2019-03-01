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
	return false;
}

void TicTacToe::mark_board(int position)
{
}

void TicTacToe::display_board() const
{
}

void TicTacToe::set_next_player()
{
}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

void TicTacToe::clear_board()
{
}

bool TicTacToe::check_board_full()
{
	return false;
}
