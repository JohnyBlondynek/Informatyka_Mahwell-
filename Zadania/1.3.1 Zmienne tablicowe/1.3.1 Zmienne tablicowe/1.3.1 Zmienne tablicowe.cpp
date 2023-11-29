#include <iostream>
#include <Windows.h>
using namespace std;

void Zadanie1() {
	int Liczby[5]{NULL};
	cout << "Wprowadz 5 liczb:" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (Liczby[i] == NULL)cin >> Liczby[i];
	}
	cout << "Liczby parzyste:";
	for (int i = 0; i < 5; i++)
	{
		if(Liczby[i]%2==0)cout << " " << Liczby[i];
	}
	cout << endl << "======================================================" << endl;
}
void Zadanie2() {
	
}
int main()
{
	//Menu
	bool System=true;
	while (system)
	{
		int MenuWartosc=NULL;
		system("color 2");
		cout << "Witaj w programie do tablic!" << endl;
		cout << "S¹ 4 zadania, wypierz które chcesz zobaczyæ:";
		cin >> MenuWartosc;
		if(MenuWartosc)switch (MenuWartosc)
		{
		case 1:
			system("cls");
			Zadanie1();
		default:
			break;
		}
	}
}