#include<windows.h>
#include <iostream>

using namespace std;

//Menu ustawienia lub programu
bool Program = true;
int WyborForaPogramatora;

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
	if (Z2Szerokosc > 100 || Z2Wysokosc > 100)cout << "Podałeś za dużą wartość, dozwolone jest generowanie do 100." << endl;
	else if (Z2Szerokosc < 3 || Z2Wysokosc < 3) cout << "Podałeś złą wartość, podana wartość jest mniejsza od 3" << endl;
	else {
		cout << "==============================================" << endl;
		cout << endl;
		for (int A = 0; A < Z2Wysokosc; A++)
		{
			for (int B = 0; B < Z2Szerokosc; B++)
			{
				if (A == 0 || A == Z2Wysokosc - 1 || B == 0 || B == Z2Szerokosc - 1) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
		cout << "==============================================" << endl;
	}
	cout << endl;
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
	if (Z3Szerokosc > 100 || Z3Wysokosc > 100)cout << "Podałeś za dużą wartość, dozwolone jest generowanie do 100." << endl;
	else if (Z3Szerokosc < 4 || Z3Wysokosc < 4) cout << "Podałeś złą wartość, podana wartość jest mniejsza od 4" << endl;
	else {
		cout << "==============================================" << endl;
		cout << endl;
		for (int A = 0; A < Z3Wysokosc; A++)
		{
			for (int B = 0; B < Z3Szerokosc; B++)
			{
				if (A == 0 || A == Z3Wysokosc - 1) cout << "-";
				else if (B == 0 || B == Z3Szerokosc - 1) cout << "|";
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
	cout << endl;
}

void Zadanie4_Bez_powtorzen() {
	cout << "Ten program nie został stworzony :(" << endl;
	Sleep(5000);
	system("cls");
}

//Zadanie 5
int Z5Szerokosc;
int Z5Wysokosc;
bool WykonanoT;
void Zadanie5_Odwrocony_trojkat() {
	cout << "Odwrócony trójkąt:" << endl;
	cout << "Podaj szerokość:";
	cin >> Z5Szerokosc;
	cout << "Podaj wysokość:";
	cin >> Z5Wysokosc;
	if (Z5Szerokosc > 100 || Z5Wysokosc > 100)cout << "Podałeś za dużą wartość, dozwolone jest generowanie do 100." << endl;
	else if (Z5Szerokosc < 3 || Z5Wysokosc < 3) cout << "Podałeś złą wartość, podana wartość jest mniejsza od 3" << endl;
	else {
		cout << "==============================================" << endl;
		cout << endl;
		for (int A = 0; A < Z5Wysokosc; A++)
		{
			for (int B = 0; B < Z5Szerokosc; B++)
			{
				if (WykonanoT)for (int i = 0; i < A; i++)cout << " ";
				WykonanoT = false;
				cout << "*";
			}
			cout << endl;
			WykonanoT = true;
			Z5Szerokosc = Z5Szerokosc - 2;
		}
		cout << endl;
		if (Z5Szerokosc < -1)cout << "Wartość szerokości była zbyt mała, by stworzyć odpowiednią wysokość trójkąta." << endl;
		cout << "==============================================" << endl;
	}
	cout << endl;
}

//Zadanie 6
int Z6Szerokosc;
int Z6Wysokosc;
void Zadanie6_Tabliczka_mnozenia_z_obramowaniem() {
	cout << "Tabliczka mnożenia z obramowaniem:" << endl;
	cout << "Podaj szerokość:";
	cin >> Z6Szerokosc;
	cout << "Podaj wysokość:";
	cin >> Z6Wysokosc;
	if (Z6Szerokosc > 10 || Z6Wysokosc > 10)cout << "Podałeś za dużą wartość, dozwolone jest generowanie do 10." << endl;
	else if(Z6Szerokosc < 2 || Z6Wysokosc < 2)cout << "Podałeś złą wartość, podana wartość jest mniejsza od 2" << endl;
	else {
		cout << "==============================================" << endl;
		cout << endl;
		cout << "     |";
		for (int UpSlot= 0; UpSlot < Z6Szerokosc; UpSlot++)
		{
			cout << "\t" << UpSlot + 1;
		}
		cout << endl;
		Z6Wysokosc = Z6Wysokosc + 2;
		for (int BuildTable = 0; BuildTable < Z6Wysokosc; BuildTable++)
		{
			if (BuildTable == 0 || BuildTable == Z6Wysokosc - 1)cout << "------";
			if (BuildTable > 0 && BuildTable < Z6Wysokosc - 1) {
				cout << " " << BuildTable;
				//Spacja
				if (BuildTable > 9)cout << "  |  ";
				else cout << "   |  ";
			}
			for (int DownSlot = 0; DownSlot < Z6Szerokosc+1; DownSlot++)
			{
				if (BuildTable == 0|| BuildTable == Z6Wysokosc-1)cout << "-------";
				else if(DownSlot>0){
					if(DownSlot>1) cout << "\t";
					int Wynik;
					Wynik = BuildTable * DownSlot;					
					cout << Wynik;
					if (DownSlot >= Z6Szerokosc){
						if(Wynik>99)cout << " |";
						else if (Wynik > 9)cout << "  |";
						else cout << "   |";
					}	
				}
			}
			cout << endl;
		}
		cout << endl;
		cout << "==============================================" << endl;
	}
	cout << endl;
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	while (Program)
	{
		cout << "'Pętle for' program." << endl;
		cout << "1:Tabliczka Mnożenia." << endl;
		cout << "2:Prostokąt." << endl;
		cout << "3:Dywan." << endl;
		cout << "4:Bez powtorzeń" << endl;
		cout << "5:Odwrócony trójkąt." << endl;
		cout << "6:Tabliczka mnożenia z obramowaniem." << endl;
		cout << "7:Autor i data." << endl;
		cout << "8:Wyjdz." << endl;
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
		case 5:
			system("cls");
			Zadanie5_Odwrocony_trojkat();
			break;
		case 6:
			system("cls");
			Zadanie6_Tabliczka_mnozenia_z_obramowaniem();
			break;
		case 7:
			system("cls");
			cout << "Autor:Maxwell Broll." << endl;
			cout << "Data rozpoczęcia pracy:08.11.2023." << endl;
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