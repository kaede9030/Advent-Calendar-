#include"DxLib.h"
#include"keyboard.h"

bool hitkey(int KeyCode) {
	bool f = false;
	while (CheckHitKey(KeyCode))f = true;
	return f;
}
