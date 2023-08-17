#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#define ANCHO  110
#define ALTO  60

using namespace std;
using namespace System;


// Función para colocar el cursor en una posición específica en la consola
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class Raton {
private:
    int x;
    int y;
    int dx;
    int dy;
    int ancho, alto;

public:
    Raton(int initialX, int initialY, int initialdx, int initialdy, int initialancho, int initialalto)
        : x(initialX), y(initialY), dx(initialdx), dy(initialdy),  ancho(initialancho), alto(initialalto){}

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
        if (!(y + dy > 0 && y + alto + dy > ALTO))
            dy *= -1;
        x += dx;
        y += dy;
    }

    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
 };

