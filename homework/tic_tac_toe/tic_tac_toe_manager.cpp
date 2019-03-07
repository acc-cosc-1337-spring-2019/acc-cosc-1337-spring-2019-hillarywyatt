#include "tic_tac_toe_manager.h"
//Write class function implementations here

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);

	update_winner_count(b.winner);
}

void TicTacToeManager::display_history()const
{
	for (auto g : games)
	{
		g.display_board(); //don't understand why "g.dispay_board()" - i want to write "b.display_board()"
		std::cout << "\n" << "X wins: " << x_win << "\n" << "O wins: " << o_win << "\n" << "Ties:   " << ties << "\n";
	}	
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}
