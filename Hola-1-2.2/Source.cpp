#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Header.h"
using namespace std;

int main() {

	Raton* a = new Raton(0, 15, 3, 0, 20, 18);

	while (true) {
		system("cls");
		a->mover();
		a->draw();
		Sleep(150);
	}

}