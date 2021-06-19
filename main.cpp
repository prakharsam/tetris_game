#include <iostream>
using namespace std;

wstring blocks[7];

int main() {

    //tetris blocks
    blocks[0].append(L"..X...X...X...X.");
    blocks[1].append(L"..X..XX...X.....");
    blocks[2].append(L".....XX..XX.....");
    blocks[3].append(L"..X..XX..X......");
    blocks[4].append(L".X...XX...X.....");
    blocks[5].append(L".X...X...XX.....");
    blocks[6].append(L"..X...X..XX.....");

    return 0;
}
