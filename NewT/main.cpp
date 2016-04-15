#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "tyre.h"
#include <locale.h>



Tyre* Tyre::first_elem = 0;
int main(int argc, char* argv[])
{
	Tyre mylist;// список шин
	mylist.menu(argv[1]);// если файл есть, чтение информации из файла; если нет- создается новый список, отображается меню
	// организует бесконечный цикл, пока не введено значение 6.
	std::cout << "Итоговое состояние. \n";
	mylist.ShowBD();
	std::cout << "Завершение работы...\n";
	return 0;
}
