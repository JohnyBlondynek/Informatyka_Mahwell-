#include<windows.h>
#include <iostream>

using namespace std;

void Zadanie1_Tabliczka_mnozenia() {
	cout << "Tabliczka mnożenia:" << endl;
	cout << "==============================================" << endl;
	cout << endl;
	for (int A = 1; A <= 10; A++)
	{
		cout << "Mnożenie z " << A << ":"<<endl;
		for (int B = 1; B <= 10; B++)
		{
			int C = A * B;
			cout << A << "*" << B <<"=" << C << endl;
		}
		cout << endl;
	}
	cout << "==============================================" << endl;
}

//Zadanie 2
int Z2Wysokosc;
int Z2Szerokosc;
void Zadanie2_Prostokat() {
	cout << "Prostokąt:" << endl;
	cout << "Podaj szerokość:";
	cin >> Z2Szerokosc;
	cout << "Podaj wysokość:";
	cin >> Z2Wysokosc;
	cout << "=============================================="<<endl;
	cout << endl;
	for (int A = 0; A < Z2Wysokosc; A++)
	{
		for (int B = 0; B < Z2Szerokosc; B++)
		{
			if (A == 0 || A == Z2Wysokosc - 1|| B == 0 || B == Z2Szerokosc - 1) cout << "*";
			else cout << " ";
		}
		cout<<endl;
	}
	cout << endl;
	cout << "=============================================="<<endl;
}

//Zadnie 3
int Z3Wysokosc;
int Z3Szerokosc;
bool DywanHask;
bool DywanPoziomy;
void zadanie3Dywan() {
	cout << "Dywan:" << endl;
	cout << "Podaj szerokość:";
	cin >> Z3Szerokosc;
	cout << "Podaj wysokość:";
	cin >> Z3Wysokosc;
	cout << "==============================================" << endl;
	cout << endl;
	for (int  A = 0; A < Z3Wysokosc; A++)
	{
		for (int B = 0; B < Z3Szerokosc ; B++)
		{
			if (A == 0 || A == Z3Wysokosc-1) cout << "-";
			else if (B == 0 || B == Z3Szerokosc-1) cout << "|";
			else {
				if (DywanHask) {
					if (DywanPoziomy) cout << "#";
					else cout << "*";
				}
				else {
					if (DywanPoziomy) cout << "*";
					else cout << "#";
				}
			}
			if (DywanPoziomy)DywanPoziomy = false;
			else DywanPoziomy = true;
		}
		if (DywanHask)DywanHask = false;
		else DywanHask = true;
		cout << endl;
	}
	cout << endl;
	cout << "==============================================" << endl;
}
void Zadanie4_Bez_powtorzen() {

}

//Menu ustawienia
bool Program=true;
int WyborForaPogramatora;

int main()
{
	while (Program)
	{
		cout << "Pętle for program" << endl;
		cout << "1:Tabliczka Mnożenia" << endl;
		cout << "2:Prostokąt" << endl;
		cout << "3:Dywan" << endl;
		cout << "4:Bez powtorzeń" << endl;

		cout << "7:Autor i data" << endl;
		cout << "8:Wyjdz" << endl;
		cin >> WyborForaPogramatora;
		switch (WyborForaPogramatora)
		{
		case 1:
			system("cls");
			Zadanie1_Tabliczka_mnozenia();
			break;
		case 2:
			system("cls");
			Zadanie2_Prostokat();
			break;
		case 3:
			system("cls");
			zadanie3Dywan();
			break;
		case 4:
			system("cls");
			Zadanie4_Bez_powtorzen();
			break;
		case 7:
			system("cls");
			cout << "Autor:Maxwell Broll" << endl;
			cout << "Data rozpoczęcia pracy:08.11.2023" << endl;
			Sleep(5000);
			system("cls");
			break;
		case 8:
			Program = false;
			break;
		default:
			system("cls");
			cout << "ERROR" << endl;
			Sleep(2000);
			system("cls");
			break;
		}
	}
}
