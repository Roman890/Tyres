#include "tyre.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>


//ФУНКЦИЯ ПОИСКА ПО АТРИБУТУ
void Tyre::FindBD()
{
	int i;
	char search_marka[30];
	float search_price;
	float search_shirina_profila;
	float search_diam;
	float search_visota_profila;
	int search_winter;
	std::cout << "\t По какому признаку будем искать? \n";
	std::cout << "1 : Поиск по марке шины\n";
	std::cout << "2 : Поиск по цене шины\n";
	std::cout << "3 : Поиск по ширине профиля шины\n";
	std::cout << "4 : Поиск по диаметру шины\n";
	std::cout << "5 : Поиск по высоте профиля шины\n";
	std::cout << "6 : Поиск по признаку сезона: 1-зима, 0-лето\n";
	std::cout << "Поле для ввода: ";
	std::cin >> i;
	switch (i)
	{
	case 1: 
	{
		std::cout << "Введите марку шины: ";
		std::cin >> search_marka;
		Tyre* p = first_elem;
		std::cout << "Результат поиска: \n";
		std::cout << "МАРКА\t" << "ЦЕНА\t" << "ШИРИНА ПРОФИЛЯ\t" << "ДИАМЕТР\t" << "ВЫСОТА ПРОФИЛЯ\t" << "СЕЗОН(1-ЗИМА,0-ЛЕТО)\t" << std::endl;
		while (p != NULL)
		{
			if (strcmp(search_marka, p->marka) == 0)// если марка введеная и марка в базе совпали
			{
				
				std::cout << std::endl << p->marka << " \t" << p->price << " \t\t"
					<< p->shirina_profila << " \t" << p->diam << " \t\t"
					<< p->visota_profila << " \t\t" << p->winter << std::endl;
			}
			if (p->next_ty == NULL)
				break;
			p = p->next_ty;//переходим к следующему элементу
		}
	}
		break;
	case 2: 
	{
		std::cout << "Введите цену шины: ";
		std::cin >> search_price;
		Tyre* p = first_elem;
		std::cout << "Результат поиска: \n";
		std::cout << "МАРКА\t" << "ЦЕНА\t" << "ШИРИНА ПРОФИЛЯ\t" << "ДИАМЕТР\t" << "ВЫСОТА ПРОФИЛЯ\t" << "СЕЗОН(1-ЗИМА,0-ЛЕТО)\t" << std::endl;
		while (p != NULL)
		{
			if (p->price == search_price)
			{
				std::cout << std::endl << p->marka << " \t" << p->price << " \t\t" 
					<< p->shirina_profila << " \t" << p->diam << " \t\t" 
					<< p->visota_profila << " \t\t" << p->winter << std::endl;
			}
			if (p->next_ty == NULL)
				break;
			p = p->next_ty;
		}
	}
		break;
	case 3:
	{
		std::cout << "Введите ширину профиля шины: ";
		std::cin >> search_shirina_profila;
		Tyre* p = first_elem;
		std::cout << "Результат поиска: \n";
		std::cout << "МАРКА\t" << "ЦЕНА\t" << "ШИРИНА ПРОФИЛЯ\t" << "ДИАМЕТР\t" << "ВЫСОТА ПРОФИЛЯ\t" << "СЕЗОН(1-ЗИМА,0-ЛЕТО)\t" << std::endl;
		while (p != NULL)
		{
			if (p->shirina_profila == search_shirina_profila)
			{
				std::cout << std::endl << p->marka << " \t" << p->price << " \t\t"
					<< p->shirina_profila << " \t" << p->diam << " \t\t"
					<< p->visota_profila << " \t\t" << p->winter << std::endl;
			}
			if (p->next_ty == NULL)
				break;
			p = p->next_ty;
		}
	}
		break;
	case 4:
	{
		std::cout << "Введите диаметр шины: ";
		std::cin >> search_diam;
		Tyre* p = first_elem;
		std::cout << "Результат поиска: \n";
		std::cout << "МАРКА\t" << "ЦЕНА\t" << "ШИРИНА ПРОФИЛЯ\t" << "ДИАМЕТР\t" << "ВЫСОТА ПРОФИЛЯ\t" << "СЕЗОН(1-ЗИМА,0-ЛЕТО)\t" << std::endl;
		while (p != NULL)
		{
			if (p->diam == search_diam)
			{
				std::cout << std::endl << p->marka << " \t" << p->price << " \t\t" 
						  << p->shirina_profila << " \t" << p->diam << " \t\t" 
						  << p->visota_profila << " \t\t" << p->winter << std::endl;
			}
			if (p->next_ty == NULL)
				break;
			p = p->next_ty;
		}
	}
		break;
	case 5: 
	{
		std::cout << "Введите высоту профиля шины: ";
		std::cin >> search_visota_profila;
		Tyre* p = first_elem;
		std::cout << "Результат поиска: \n";
		std::cout << "МАРКА\t" << "ЦЕНА\t" << "ШИРИНА ПРОФИЛЯ\t" << "ДИАМЕТР\t" << "ВЫСОТА ПРОФИЛЯ\t" << "СЕЗОН(1-ЗИМА,0-ЛЕТО)\t" << std::endl;
		while (p != NULL)
		{
			if (p->visota_profila == search_visota_profila)
			{
				std::cout << std::endl << p->marka << " \t" << p->price << " \t\t" 
					<< p->shirina_profila << " \t" << p->diam << " \t\t" 
					<< p->visota_profila << " \t\t" << p->winter << std::endl;
			}
			if (p->next_ty == NULL)
				break;
			p = p->next_ty;
		}
	}
		break;
	case 6: 
	{
		std::cout << "Введите признак сезона 1-зима, 0-лето : ";
		std::cin >> search_winter;
		Tyre* p = first_elem;
		std::cout << "Результат поиска: \n";
		std::cout << "МАРКА\t" << "ЦЕНА\t" << "ШИРИНА ПРОФИЛЯ\t" << "ДИАМЕТР\t" << "ВЫСОТА ПРОФИЛЯ\t" << "СЕЗОН(1-ЗИМА,0-ЛЕТО)\t" << std::endl;
		while (p != NULL)
		{
			if (p->winter == search_winter)
			{
				std::cout << std::endl << p->marka << " \t" << p->price << " \t\t" 
					<< p->shirina_profila << " \t" << p->diam << " \t\t" 
					<< p->visota_profila << " \t\t" << p->winter << std::endl;
			}
			if (p->next_ty == NULL)
				break;
			p = p->next_ty;
		}
	}
		break;
	}
}

//ФУНКЦИЯ ПРОСМОТРА СОСТОЯНИЯ СПИСКА
void Tyre::ShowBD()
{
	Tyre* p = first_elem;
	std::cout << "МАРКА\t" << "ЦЕНА\t" << "ШИРИНА ПРОФИЛЯ\t" << "ДИАМЕТР\t" << "ВЫСОТА ПРОФИЛЯ\t" << "СЕЗОН(1-ЗИМА,0-ЛЕТО)\t" << std::endl;
	while (p->next_ty != NULL)
	{
		
		std::cout << p->marka << "  \t" << p->price << "  \t\t" 
			<< p->shirina_profila << "  \t" << p->diam << "  \t\t" 
			<< p->visota_profila << "  \t\t" << p->winter << std::endl;
		p = p->next_ty;
	}
	std::cout << p->marka << "  \t" << p->price << "  \t\t" 
		<< p->shirina_profila << "  \t" << p->diam << "  \t\t" 
		<< p->visota_profila << "  \t\t" << p->winter << std::endl;

}

//ФУНКЦИЯ СОХРАНЕНИЯ
void Tyre::RecBD(std::ofstream& f)
{// Запись списка в файл
	int n;
	Tyre* p = first_elem;
	while (1)
	{
		n = strlen(p->marka);
		f.write((char*)(&n), sizeof(int));                  // запись длины строки с названием марки
		f.write(p->marka, strlen(p->marka));                // запись марки
		f.write((char*)&p->price, sizeof(float));           // цена
		f.write((char*)&p->diam, sizeof(float));            // диаметр
		f.write((char*)&p->shirina_profila, sizeof(float)); // профиль
		f.write((char*)&p->visota_profila, sizeof(float));  // профиль
		f.write((char*)&p->winter, sizeof(int));            // сезон
		if (p->next_ty != NULL)
			p = p->next_ty;
		else
			break;
	}
}

//ФУНКЦИЯ ЧТЕНИЯ СПИСКА ИЗ ФАЙЛА
Tyre* Tyre::ReadBD(std::ifstream& file)
{// заполнение пустого списка
	int t;
	Tyre* beg = new Tyre;
	first_elem = beg;
	Tyre* f = beg;
	bool begin = true;// приступаем к чтению
	while (!file.eof())
	{
		if (begin) {
			file.read((char*)&t, sizeof(int));// длина строки с нозванием марки шины
			begin = false;
		}
		f->marka = new char[t + 1];      // выделение памяти под название
		file.read(f->marka, t);          // f->marka содержит адрес памяти по которому надо записать, прочитанную из файла шины
		f->marka[t] = 0;                 // фиксируем признак конца строки
		file.read((char*)&(f->price), sizeof(float));
		file.read((char*)&(f->diam), sizeof(float));
		file.read((char*)&(f->shirina_profila), sizeof(float));
		file.read((char*)&(f->visota_profila), sizeof(float));
		file.read((char*)&(f->winter), sizeof(int));
		f->next_ty = NULL;
		file.read((char*)&t, sizeof(int));  // попытка прочитать из файла длину строки с нозванием следующей марки шины
		if (file.eof() == true)             // файл закончился
			break;
		else // файл не закончился
		{
			f->next_ty = new Tyre;
			f = f->next_ty;
		}
	}
	return(beg);
}



//ФУНКЦИЯ УДАЛЕНИЯ ПО МАРКЕ
void Tyre::Delet()
{ 
	char search_marka[30];
	Tyre* start = first_elem;// указатель на первый элемент списка
	std::cout << "Введите удаляемую марку\n";
	std::cin >> search_marka;
	Tyre* p = start;
	if (strcmp(search_marka, p->marka) == 0)     // удаляется первый элемент списка
	{
		start = p;                           // указатель на 1 элемент
		if (p->next_ty != NULL)		     // Первый элемент - не единственный
			first_elem = p->next_ty;
		else 
			first_elem = NULL;  // список будет пустой
		delete[]p->marka;       // освобождаем память
		delete p;               // которую занимал первый элемент
		return;
	}
	while (p->next_ty != NULL)// поиск удаляемого звена внутри списка
	{
		if (strcmp(search_marka, p->next_ty->marka) == 0 && p->next_ty->next_ty != NULL)// нашли удаляемое звено
		{                                       // p указывает на звено предшествующее удаляемому, удалется не последнее звено 
			start = p->next_ty->next_ty;    // запоминаем указатель на следующее за удаляемым звеном
			delete[](p->next_ty->marka);	// удаление строки с именем
			delete(p->next_ty);	        // удаление самого элемента списка 
			p->next_ty = start;             // p указывает на звено после удаляемого
			break;                          // выход из цикла 
		}
		else// может быть надо удалить последнее звено
			if ((p->next_ty->next_ty == NULL) && (strcmp(search_marka, p->next_ty->marka) == 0))// надо удалить последнее звено
			{
				delete[](p->next_ty->marka); // Удаление строки с маркой машины
				delete p->next_ty;
				p->next_ty = NULL;
				break;
			}
		p = p->next_ty;// переход к следующему звену
	}
}



// ФУНКЦИЯ ДОБАВЛЕНИЯ ОДНОГО ЭЛЕМЕНТА
void Tyre::Dop()
{
	char search_marka[30];
	Tyre* p = first_elem;	     // Запоминаем указатель на начало списка
	while (p->next_ty != NULL)   // получение указателя p на последний элемент списка
		p = p->next_ty;

	// Выделение памяти под новую шину
	p->next_ty = new Tyre;           // указателю p->next_ty присвоили адрес новой шины
	p = p->next_ty;		         // Указатель на вновь созданную шину
	p->next_ty = NULL;	         // За последней шиной других нет
	std::cout << "Введите марку шины :";
	std::cin >> search_marka;
	p->marka = new char[strlen(search_marka) + 1]; // выделение памяти под назв.
	strcpy(p->marka, search_marka);
	std::cout << "Цена шины : ";
	std::cin >> p->price;
	std::cout << "Ширина профиля шины : ";
	std::cin >> p->shirina_profila;
	std::cout << "Диаметр шины : ";
	std::cin >> p->diam;
	std::cout << "Высота профиля шины : ";
	std::cin >> p->visota_profila;
	std::cout << "Признак сезона 1-зима, 0-лето :";
	std::cin >> p->winter;
}
