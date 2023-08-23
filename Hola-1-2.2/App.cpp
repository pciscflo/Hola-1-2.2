#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Raton.h"
using namespace std;

int main() {

	Raton* a = new Raton(0, 15, 3, 0, 20, 3);

	while (true) {
		//system("cls");
		a->clear();
		a->mover();
		a->draw();
		Sleep(150);
	}

}