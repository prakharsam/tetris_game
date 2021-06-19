#include <iostream>
using namespace std;

int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char *pField = nullptr;
wstring blocks[7];

int Rotate(int px, int py, int r)
{
    int pi = 0;
    switch (r % 4)
    {
        case 0: // 0 degrees
            pi = py * 4 + px;
            break;

        case 1: // 90 degrees
            pi = 12 + py - (px * 4);
            break;

        case 2: // 180 degrees
            pi = 15 - (py * 4) - px;
            break;

        case 3: // 270 degrees
            pi = 3 - py + (px * 4);
            break;
    }

    return pi;
}

int main() {

    //tetris blocks
    blocks[0].append(L"..X...X...X...X.");
    blocks[1].append(L"..X..XX...X.....");
    blocks[2].append(L".....XX..XX.....");
    blocks[3].append(L"..X..XX..X......");
    blocks[4].append(L".X...XX...X.....");
    blocks[5].append(L".X...X...XX.....");
    blocks[6].append(L"..X...X..XX.....");

    pField = new unsigned char[nFieldWidth*nFieldHeight]; // Create play field buffer
    for (int x = 0; x < nFieldWidth; x++) // Board Boundary
        for (int y = 0; y < nFieldHeight; y++)
            pField[y*nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;

    return 0;
}
