#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#define ANCHO  120
#define ALTO  30

using namespace std;
using namespace System;


// Funci�n para colocar el cursor en una posici�n espec�fica en la consola
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    //Console::SetCursorPosition(x, y);
}

class Raton {
private:
    int x;
    int y;
    int dx;
    int dy;
    int ancho, alto;

public:
    Raton(int x, int y, int dx, int dy, int ancho, int alto)
        : x(x), y(y), dx(dx), dy(dy), ancho(ancho), alto(alto) {}

    void draw() {
        gotoxy(x, y);
        cout << "        ____()()";
        gotoxy(x, y + 1);
        cout << "      /      @@";
        gotoxy(x, y + 2);
        cout << "`~~~~~\_;m__m._>o";
    }

    void mover() {
        if (!(x + dx > 0 && (x + ancho + dx) < ANCHO))
            dx *= -1;
        if (!(y + dy > 0 && y + alto + dy < ALTO))
            dy *= -1;
        x += dx;
        y += dy;
    }
    void clear() {
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < ancho; j++) {
                gotoxy(x + j, y + i);
                cout << " ";
            }
        }
    }

    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
};


