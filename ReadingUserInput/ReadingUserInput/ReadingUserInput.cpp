// ReadingUserInput.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
//using namespace will helps to write main code, for example without "std::"
using namespace std;

int main()
{   
    int number;
    cout << "Type you number\n";
    cin >> number; 
    cout << "You typed: " << number << endl;
    

    //Calculator
    cout << "Now we can creat calculator with + function\n";
    cout << "Type first number\n";
    int first;
    cin >> first;
    cout << "Type second number\n";
    int second;
    cin >> second;
    int result = first + second;
    string str = to_string(result);
    string res = "Your result is " + str + " it was easy\n";
    cout << res;

    //String length;

    cout << res.length();

    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
