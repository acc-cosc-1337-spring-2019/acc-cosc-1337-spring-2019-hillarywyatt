#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<string>
#include<iostream>


int main() 
{
	std::string first;
	char choice;
	int position;
	TicTacToe tic_tac_toe;
	TicTacToeManager manager;

	do
	{
		std::cout << "First Player: ";
		std::cin >> first;
		tic_tac_toe.start_game(first);

		while (tic_tac_toe.game_over() != true)
		{
			std::cout << "Enter position 1-9: ";
			std::cin >> position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();
		}

		//save game to tictactoe manager class
		for (int i = 0; i < 10; i++) 
		{
			manager.save_game(tic_tac_toe);

		}

		manager.display_history();

		std::cout << "Play again? Enter Y for yes: ";
		std::cin >> choice;


	} while (choice == 'Y' || choice == 'y');

	//display history of all games and total score
	
}