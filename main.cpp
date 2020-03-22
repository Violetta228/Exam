#include "dayProgram.h"
#include "TvProgram.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include "ShellAPI.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Time_ tt;
	TvProgram pp;
	dayProgram prog;
	prog.addProg(new Children("3", Time_(0,12), 0,14));
	prog.addProg(new Education("In science world", Time_(0, 12), "math"));
	prog.addProg(new Show("Miracles field", Time_(0, 12), "sport"));
	prog.addProg(new Movie("matrix", Time_(0, 12), 1999, "Matrix is ​​an American scifi media franchise in the cyberpunk genre."));
	


	
	string type="0";
	string title="one";
	Time_ time;
	int q,h=0,m=0;
	while (1)
	{
		cout << "1. Добавить программу, нажмите 1. " << endl;
		cout << "2. Вывести все программы, нажмите 2 " << endl;
		cout << "3. Считать программы из файла " << endl;
		//cout << "4. Сортировка программ, нажмите 4" << endl;
		cout << "5. Поиск программы, нажмите 5" << endl;
		cout << "6. Завершение работы. " << endl;

		cin >> q;

		switch (q)
		{
		case 1:
		{
	
			//prog.addnProg();
			//sys.showAll(); 
		}
		break;

		case 2:
		{

			prog.showAll();
		}
		break;
		case 3:
		{
			const int len = 1000, strings = 13;
			const char ch = '\n';
			char mass[len][strings];

			ifstream fs("file.txt", ios::in | ios::binary);

			if (!fs) return 1;

			for (int r = 0; r < strings; r++)
			{
				fs.getline(mass[r], len - 1, ch); 
				cout << "Program " << r + 1 << " = " << mass[r] << endl; 
			}
			fs.close(); 
			
		}
		break;
		case 5:
		{
			cout << "Введите тип программы (Children | Education | Show | Movie)";
		
				cin >> type;
		
				prog.findbyType(type);
			}
			break;
		case 6:
		{
			return 0;
		}
		break;
		default:
			cout << "Выберите число из меню !" << endl;
			break;

		}
		system("pause");
		}

	}


