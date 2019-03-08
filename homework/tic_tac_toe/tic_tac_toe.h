#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<string>
#include<vector>
#include <iostream>

using::std::string;
using::std::vector;

class TicTacToe 
{
public:
	void start_game(string first_player);
	bool game_over();
	void mark_board(int position);
	void display_board() const;
	string get_player() const;
	string get_winner();
	

private:
	vector<string> pegs {9, " "};
	string next_player;
	string winner;// stores winner of game X, O, or C

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_winner(string player);//if check_board_full = true winner is C else winner is next_player
};

#endif // !TIC_TAC_TOE_H