#include"DxLib.h"
#include"osero.h"

void Osero::init() {
	color[0] = GetColor(0, 0, 0);
	color[1] = GetColor(50, 255, 50);
	color[2] = GetColor(255, 255, 255);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = 0;
		}
	}
	board[3][3] = 1;
	board[4][4] = 1;
	board[3][4] = -1;
	board[4][3] = -1;
	p = { 0,0 };
	pturn = rand() % 2;
	if (pturn == 0) {
		pturn = -1;
		cturn = 1;
	}
	else {
		cturn = -1;
	}
}
