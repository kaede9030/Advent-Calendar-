#ifndef OSERO_H
#define OSERO_H

typedef struct {
	int y;
	int x;
}P;

class Osero {
public:
	int board[8][8];
	int color[3];
	int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
	int dy[8] = { -1,-1,0,1,1,1,0,-1 };
	int turn = 1;
	int pturn, cturn;
	P p;
	void init();
	void draw_board();
	void move();
	void put_stone();
	bool check_stone(int y, int x);
	void res();
};

#endif
