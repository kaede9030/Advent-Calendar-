#include"DxLib.h"
#include"osero.h"
#include"keyboard.h"

void Osero::move() {
	if (hitkey(KEY_INPUT_UP))p.y--;
	if (hitkey(KEY_INPUT_DOWN))p.y++;
	if (hitkey(KEY_INPUT_RIGHT))p.x++;
	if (hitkey(KEY_INPUT_LEFT))p.x--;
	p.x = max(0, min(p.x, 7));
	p.y = max(0, min(p.y, 7));
}
