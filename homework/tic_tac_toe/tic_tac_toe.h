#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<string>
#include<vector>

using::std::string;

class TicTacToe 
{
public:
	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	void display_board() const;

	std::string get_winner();

private:
	std::vector<string> pegs {9, " "};
	std::string next_player;

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();

	std::string winner;// stores winner of game X, O, or C
	void set_winner();//if check_board_full winner is C else winner is next_player
};


#endif // !TIC_TAC_TOE_H