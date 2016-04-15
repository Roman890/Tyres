#include <iostream>
#include <fstream>


class Tyre
{
	char* marka;				// марка шины 
	float price;				// цена шины
	float shirina_profila;		        // ширина профиля шины
	float diam;			        // диаметр шины 
	float visota_profila;		        // высота профиля шины 
	int winter;				// признак сезона 1-зима, 0-лето
	Tyre *next_ty;				// указатель на следующий элемент
public:
	static Tyre* first_elem;	        // указатель на первый элемент списка 
	Tyre()
	{
		next_ty = 0;			// нет следующего элемента
		marka = 0;			// нет текущего элемента
		price = 0;
		shirina_profila = 0;
		diam = 0;
		visota_profila = 0;
		winter = 0;
	}
	void Delet();				//функция удаления
	void Dop();				//функция добавления
	Tyre* ReadBD(std::ifstream& file);	//функция чтения из файла 
	void RecBD(std::ofstream& f);		//функция записи в файл
	void ShowBD();				//функция просмотра
	void FindBD();				//функция поиска
	Tyre* menu(char* fil);			//функция меню
};