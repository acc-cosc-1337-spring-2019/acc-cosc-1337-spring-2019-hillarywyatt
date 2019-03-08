#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here
#include "tic_tac_toe.h"

using::std::string;
using::std::vector;

class TicTacToeManager
{
public:
	void save_game(TicTacToe b);
	void display_history()const;

private:
	vector<TicTacToe>games;
	int x_win { 0 };
	int o_win { 0 };
	int ties { 0 };

	void update_winner_count(string winner);

};

#endif // !TIC_TAC_TOE_MANAGER_H

