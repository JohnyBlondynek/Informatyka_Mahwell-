#include<windows.h>
#include <iostream>

using namespace std;

void TabliczkaMnozenia() {
	cout << "Tabliczka mnożenia:" << endl;
	for (int A = 1; A <= 10; A++)
	{
		for (int B = 1; B <= 10; B++)
		{
			int C = A * B;
			cout << A << "*" << B <<"=" << C << endl;
		}
	}
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
		
		cout << "7:Autor i data" << endl;
		cout << "8:Wyjdz" << endl;
		cin >> WyborForaPogramatora;
		switch (WyborForaPogramatora)
		{
		case 1:
			system("cls");
			TabliczkaMnozenia();
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
