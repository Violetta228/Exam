#include "dayProgram.h"



dayProgram::dayProgram()
{
	nProg = 0;
	arr = nullptr;

}


dayProgram::~dayProgram()//memory
{
	for (int i = 0; i < nProg; i++)
	{
		delete arr[i];
	}
	if (arr != NULL)
		delete[] arr;
}



void dayProgram::showAll()
{

	for (int i = 0; i < nProg; i++) {
		cout << "\tProgramma: " << i + 1 << endl;
		cout << "\t Type: " << arr[i]->type() << endl;
		arr[i]->show();
	}
}

	/*for (int i = 0; i < vec.size; i++) {

		cout << "\t Type: " << vec[i].type() << endl;
		vec[i].show();
	}*/


//void dayProgram::addSoft(TvProgram &vec)
//{
//
//string tmp = "";
//
//cout << "Vvedite TV prog. "<< endl;
//
//	do {
//		std::getline(std::cin, tmp);
//		if (tmp.size() > 0) {
//			vec.push_back(tmp);
//		}
//	} while (tmp != "");
//
//	 int vector_size = vec.size();
//	std::cout << "vector." << std::endl;
//	for (int i = 0; i < vector_size; i++) {
//		std::cout << vec[i] << std::endl;
//	}
//}


void dayProgram::findbyType(string type)
{
	for (int i = 0; i < nProg; i++) {
		if (type == arr[i]->type()) {
			arr[i]->show();
		}
	}
}

void dayProgram::addProg(TvProgram * obj)
{
	
	TvProgram** tmp = new TvProgram*[++nProg];

	
	for (int i = 0; i < nProg - 1; i++) {
		tmp[i] = arr[i];
	
	}
	if (arr != NULL)
		delete[] arr;
	tmp[nProg - 1] = obj;
	arr = tmp;

}





void dayProgram::delProg(string title)
{
		delete[] arr;
	
}

void dayProgram::addnProg()
{
	string title;
	Time_ time;
	Time_ tt;
	TvProgram pp;
	int h = 0, m = 0;

	{
		if (nProg == 100)
			throw "Не больше 100 программ!";
	
		cout << "Введите название: ";
		getline(std::cin, title);
		pp.setTitle(title);

		TvProgram temp;
	
		cout << "Введите время : ";
		
		try
		{
			tt.setTime(h, m);
		}
		catch (int e)
		{
			while (true)
			{
				if (h < 0||m<0||h>23||m>59)
				cout << "Введите корректное время:";
				
				try
				{
					tt.setTime(h, m);
				}
				catch (int e)
				{
				}
				break;
			}
		}

	}
	nProg++;
}
