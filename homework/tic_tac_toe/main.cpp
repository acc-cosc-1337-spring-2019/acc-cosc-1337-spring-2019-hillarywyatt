
#include "tic_tac_toe_manager.h"
#include<string>
#include<iostream>


int main() 
{
	std::string first;
	char choice;
	int position;
	TicTacToeManager manager;

	do
	{
		TicTacToe tic_tac_toe;

		std::cout << "First Player: ";
		std::cin >> first;
		tic_tac_toe.start_game(first);

		while (tic_tac_toe.game_over() == false)
		{
			std::cout << "Enter position 1-9: for " << tic_tac_toe.get_player()  << ": ";
			std::cin >> position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();
			std::cout << "\n";
		}

		//save game to tictactoe manager class
		manager.save_game(tic_tac_toe);

		std::cout << "Play again? Enter Y for yes: ";
		std::cin >> choice;


	} while (choice == 'Y' || choice == 'y');
	
	//display history of all games and total score
	manager.display_history();
}