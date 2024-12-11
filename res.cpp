#include"DxLib.h"
#include"osero.h"

void Osero::res() {
	int first = 0, second = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] == 1)first++;
			if (board[i][j] == -1)second++;
		}
	}
	if (first > second) {
		DrawString(200, 200, "先攻の勝ち", color[2]);
	}
	else if (first == second) {
		DrawString(200, 200, "引き分け", color[2]);
	}
	else {
		DrawString(200, 200, "後攻の勝ち", color[2]);
	}
}
