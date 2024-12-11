#include"DxLib.h"
#include"osero.h"

void Osero::draw_board() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			DrawBox(j * 80 + 1, i * 80 + 1, j * 80 + 80, i * 80 + 80, color[1], TRUE);
			DrawCircle(j * 80 + 40, i * 80 + 40, 30, color[board[i][j]+1], TRUE);
		}
	}
	DrawBox(p.x * 80 + 3, p.y * 80 + 3, p.x * 80 + 15, p.y * 80 + 15, color[pturn+1], TRUE);
}
