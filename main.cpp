#include "DxLib.h"
#include"osero.h"
#include"keyboard.h"
#include<ctime>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    if (ChangeWindowMode(TRUE))return -1;
    SetGraphMode(640, 640, 16);
    if (DxLib_Init())return -1;
    if (SetDrawScreen(DX_SCREEN_BACK))return -1;
    srand((unsigned)time(NULL));

    Osero osero;
    osero.init();
    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
        osero.draw_board();
        osero.move();
        if ( hitkey(KEY_INPUT_RETURN)) {
            osero.put_stone();
        }
        bool f = true;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (osero.check_stone(i, j))f = false;
            }
        }
        if (f)break;
    }

    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
        osero.res();
        if (hitkey(KEY_INPUT_RETURN))break;
    }

    DxLib_End();
    return 0;
}
