#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "tyre.h"


Tyre* Tyre::menu(char* fil)
{// строка с именем файла
	int  d;
	char search_marka[30];
	float search_price;
	float search_shirina_profila;
	float search_diam;
	float search_visota_profila;
	int search_winter;
	std::ifstream infile(fil);
	if (infile.good() == false)// если файла нет
	{
		std::cout << "Заполнение БД\n";
		std::cout << "Введите марку шины : ";
		std::cin >> search_marka;
		std::cout << "Введите цену шины : ";
		std::cin >> search_price;
		std::cout << "Ширина профиля шины : ";
		std::cin >> search_shirina_profila;
		std::cout << "Диаметр шины : ";
		std::cin >> search_diam;
		std::cout << "Высота профиля шины : ";
		std::cin >> search_visota_profila;
		std::cout << "Признак сезона 1-зима, 0-лето :";
		std::cin >> search_winter;
		first_elem = this;
		price = search_price;
		marka = new char[strlen(search_marka) + 1];
		strcpy(marka, search_marka);
		diam = search_diam;
		shirina_profila = search_shirina_profila;
		visota_profila = search_visota_profila;
		winter = search_winter;
		next_ty = NULL;
		std::ofstream offile(fil);
		if (offile.good() == true)
			printf("Файл БД создан.\n");
		RecBD(offile);
		offile.close();
		infile.open(fil);
		if (infile.good() == true)
			printf("БД подключена\n");
	}
	first_elem = ReadBD(infile);// чтение из файла в оператиную память списка шин
	infile.close();
	while (1)
	{
		std::cout << " -----------------База данных: КАТАЛОГ ШИН-----------------\n";
		std::cout << "|                                                          |\n";
		std::cout << "|                      Главное меню                        |\n";
		std::cout << "|                 1 Поиск шины по атрибуту                 |\n";
		std::cout << "|                 2 Добавление новой шины                  |\n";
		std::cout << "|                 3 Удаление шины                          |\n";
		std::cout << "|                 4 Сохрания базы данных в файл            |\n";
		std::cout << "|                 5 Просмотр базы данных                   |\n";
		std::cout << "|                 6 Выход                                  |\n\n";
		std::cout << " ----------------------------------------------------------\n";
		std::cout << "Поле для ввода: ";
		std::cin >> d;
		std::ofstream offile;
		switch (d)
		{
		case 1:// поиск
			std::cout << "Поиск\n";
			FindBD();
			continue;
		case 2:// дополнение
			Dop();// добавление шины в список в оперативной памяти
			continue;
		case 3:// удаление
			Delet();// марка шины вводится в функции delete
			continue;
		case 4:// запись спика из оперативной памяти в файл
			offile.open(fil);
			RecBD(offile);
			offile.close();
			continue;
		case 5:// просмотр
			ShowBD();
			continue;
		case 6:
			return(this);
		}
	}
}