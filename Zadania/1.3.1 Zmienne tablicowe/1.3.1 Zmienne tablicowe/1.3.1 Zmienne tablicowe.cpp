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
	int Liczby[5]{ NULL };
	cout << "Wprowadz 5 liczb:" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (Liczby[i] == NULL)cin >> Liczby[i];
	}
	cout << "W odwrotnej kolejnosci:";
	for (int i = 4; i > -1; i--)
	{
		cout<<" " << Liczby[i];
	}
	cout << endl << "======================================================" << endl;
}
void Zadanie3() {
	int Liczby[5]{ NULL };
	cout << "Wprowadz 5 liczb dodanich i ujemnych :" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (Liczby[i] == NULL)cin >> Liczby[i];
	}
	cout << "Liczby ujemne zamienione na 0:";
	for (int i = 0; i < 5; i++)
	{
		if (Liczby[i] > 0)cout << " " << Liczby[i];
		else cout << " 0";
	}
	cout << endl << "======================================================" << endl;
}
void Zadanie4() {
	int Liczby[100];
	int Value=0;
	int Wiersz=1;
	int Kolumna=1;
	cout << "Wpisz jaki ma byæ rozmiar wierszy:";
	cin >> Wiersz;
	cout << endl;
	cout << "Wpisz jaki ma byæ rozmiar kolumn:";
	cin >> Kolumna;
	cout << endl;
	if (Kolumna > 100 || Wiersz > 100 || Kolumna < 1 || Wiersz < 1) {
		system("cls");
		system("color 4");
		cout << "Podana wartoœæ jest nie prawid³owa." << endl << "Dozwolone wartoœæi to od 1 do 100!";
		Sleep(3000);
		system("cls");
		system("color 2");
	}
	else {
		for (int i = 0; i < Wiersz; i++)
		{
			for (int i = 0; i < Kolumna; i++)
			{
				Value++;
				Liczby[Value] = Value;
				cout << " " << Value;
			}
			cout << endl;
		}
		cout << "Wynik:";
		for (int i = 1; i < Value + 1; i++)
		{
			cout << " " << Liczby[i];
		}
		cout << endl << "======================================================" << endl;
	}
}
void Zadanie5() {
	int Binary[15];
	int ValueB = 0;
	int liczba;
	cout << "Wpisz liczbê dziesiêtn¹:";
	cin >> liczba;
	while (liczba > 0)
	{
		ValueB++;
		if (liczba % 2 == 1) Binary[ValueB] = 1;
		else Binary[ValueB] = 0;
		liczba = liczba / 2;
	}
	cout<<endl<< "Liczby binarne:";
	while (ValueB > 0)
	{
		cout << Binary[ValueB];
		ValueB--;
	}
	cout << endl << "======================================================" << endl;
}

int main()
{
	//Menu
	bool System=true;
	int MenuWartosc = NULL;
	while (System)
	{
		MenuWartosc = NULL;
		setlocale(LC_CTYPE, "Polish");
		system("color 2");
		cout << "Witaj w programie do tablic!" << endl;
		for (int i = 1; i < 6; i++)
		{
			cout <<i<<":" << "Zadanie " << i << endl;
		}
		cout << "6:Wyjœcie" << endl;
		cout << "Wpisz co jakie zadanie chcesz zobaczyæ:";
		cin >> MenuWartosc;
		switch (MenuWartosc)
		{
		case 1:
			system("cls");
			Zadanie1();
			break;
		case 2:
			system("cls");
			Zadanie2();
			break;
		case 3:
			system("cls");
			Zadanie3();
			break;
		case 4:
			system("cls");
			Zadanie4();
			break;
		case 5:
			system("cls");
			Zadanie5();
			break;
		case 6:
			System = false;
			system("cls");
			system("color 3");
			cout << "Mi³ego dnia :>";
			Sleep(3000);
			break;
		default:
			system("cls");
			system("color 4");
			cout << "ERROR";
			Sleep(3000);
			system("cls");
			system("color 2");
			break;
		}
	}
}