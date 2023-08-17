#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Header.h"
using namespace std;

int main() {

	Raton* a = new Raton(0, 20, 5, 5, 90, 25);

	while (true) {
		system("cls");
		a->mover();
		a->draw();
		Sleep(800);
	}

}