#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here
#include "tic_tac_toe.h""
#include<string>
#include<vector>
#include<iostream>

using::std::string;
using::std::vector;

class TicTacToeManager
{
public:
	//string winner;
	void save_game(const TicTacToe b);
	void display_history()const;

private:
	vector<TicTacToe>games;
	int x_win { 0 };
	int o_win { 0 };
	int ties { 0 };

	void update_winner_count(string winner);

};

#endif // !TIC_TAC_TOE_MANAGER_H

