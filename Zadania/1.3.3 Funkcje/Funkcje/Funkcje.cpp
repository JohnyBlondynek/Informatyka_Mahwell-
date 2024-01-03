#include <iostream>
using namespace std;

//===================Zadanie 1==============================

//void Przywitanie(string imie, string nazwisko) {
//    cout << "Witaj " << imie << " "<< nazwisko;
//}
//int main()
//{
//    string imie, nazwisko;
//    cout << "Podaj swoje imie: ";
//    cin >> imie;
//    cout << "Podaj swoje nazwisko: ";
//    cin >> nazwisko;
//    Przywitanie(imie, nazwisko);
//}

//===================Zadanie 2==============================

//float VAT=1.23;
//
//float Netto(float brutto) {
//    float wynik;
//    wynik = brutto / VAT;
//    return wynik;
//}
//float Brutto(float netto) {
//    float wynik;
//    wynik= netto*VAT;
//    return wynik;
//}
//
//int main()
//{
//    int wybor;
//    float netto, brutto;
//    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
//    cin >> wybor;
//
//    switch (wybor)
//    {
//    case 1:
//        cout << "Podaj kwote netto: ";
//        cin >> netto;
//        cout << "Brutto: " << Brutto(netto) << " zl" << endl;
//        break;
//    case 2:
//        cout << "Podaj kwote brutto: ";
//        cin >> brutto;
//        cout << "Netto: " << Netto(brutto) << " zl" << endl;
//        break;
//    }
//}

//===================Zadanie 3==============================

//int MaxFun(int liczby[5]) {
//    int a=0;
//    int wynik;
//    for (int i = 0; i < 5; i++)
//    {
//        if (a < liczby[i]) a = liczby[i];
//    }
//    wynik = a;
//    return wynik;
//}
//int main()
//{
//
//    int liczby[5];
//    cout << "Podaj 5 liczb: ";
//    for (int i = 0; i < 5; i++)
//        cin >> liczby[i];
//
//    cout << "Najwieksza liczba: " << MaxFun(liczby) << endl;
//
//    system("pause");
//    return 0;
//}