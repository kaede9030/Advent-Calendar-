#include"DxLib.h"
#include"osero.h"

bool Osero::check_stone(int y, int x) {
	bool f = false;
	if (board[y][x] != 0)return f;
	for (int i = 0; i < 8; i++) {
		int ny = y + dy[i], nx = x + dx[i];
		while (0 <= nx && nx <= 7 && 0 <= ny && ny <= 7 && board[ny][nx] == -1 * turn) {
			ny += dy[i];
			nx += dx[i];
			f = true;
		}
		if (0 <= nx && nx <= 7 && 0 <= ny && ny <= 7 && board[ny][nx] == turn && f) {
			break;
		}
		else {
			f = false;
		}
	}
	return f;
}
