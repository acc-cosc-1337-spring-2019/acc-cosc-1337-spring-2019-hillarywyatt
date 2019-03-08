#include "tic_tac_toe_manager.h"
//Write class function implementations here

void TicTacToeManager::save_game(TicTacToe b)
{
	update_winner_count(b.get_winner());
	games.push_back(b);

}

void TicTacToeManager::display_history()const
{
	for (auto g : games)
	{
		b.display_board(); 
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
	else if (winner == "C")
	{
		ties++;
	}
}
