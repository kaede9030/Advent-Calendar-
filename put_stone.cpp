#include"DxLib.h"
#include"osero.h"

void Osero::put_stone() {
	if (pturn == turn ) {
		if (check_stone(p.y, p.x)) {
			for (int i = 0; i < 8; i++) {
				int ny = p.y + dy[i], nx = p.x + dx[i];
				int cnt = 0;
				while (0 <= nx && nx <= 7 && 0 <= ny && ny <= 7 && board[ny][nx] == -1 * turn) {
					ny += dy[i];
					nx += dx[i];
					cnt++;
				}
				if (0 <= nx && nx <= 7 && 0 <= ny && ny <= 7 && board[ny][nx] == turn && cnt != 0) {
					for (int j = 0; j < cnt; j++) {
						ny -= dy[i];
						nx -= dx[i];
						board[ny][nx] *= -1;
					}
				}
			}
			board[p.y][p.x] = turn;
			turn *= -1;
		}
	}
	else {
		P a[64];
		int c = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (check_stone(i, j)) {
					a[c] = { i,j };
					c++;
				}
			}
		}
		if (c != 0) {
			P b = a[rand() % c];
			for (int i = 0; i < 8; i++) {
				int ny = b.y + dy[i], nx = b.x + dx[i];
				int cnt = 0;
				while (0 <= nx && nx <= 7 && 0 <= ny && ny <= 7 && board[ny][nx] == -1 * turn) {
					ny += dy[i];
					nx += dx[i];
					cnt++;
				}
				if (0 <= nx && nx <= 7 && 0 <= ny && ny <= 7 && board[ny][nx] == turn && cnt != 0) {
					for (int j = 0; j < cnt; j++) {
						ny -= dy[i];
						nx -= dx[i];
						board[ny][nx] *= -1;
					}
				}
			}
			board[b.y][b.x] = turn;
			turn *= -1;
		}
	}
}
