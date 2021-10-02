#include <iostream>

//I calcoli per il peso si trovano in pizze.xlsx (quello che ha richiesto più tempo)

//Includo header Windows.h per poter impostare UTF8 su windows
#ifdef _WINDOWS
    #include <Windows.h>
#endif

using namespace std;

void waitForKey() {
#ifdef _WINDOWS
    system("PAUSE");
#else
    //Ignoro gli endl o "\n" dei cout precedenti
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    do {
        cout << "Premi Enter per terminare il programma.";
    } while (cin.get() != '\n');
#endif
}

int main() {
    int nPizzeMargherita, nPizzeProsciutto;

    cout << "Inserisci il numero di pizze margherita (farina e pomodoro): ";
    cin >> nPizzeMargherita;
    cout << "Inserisci il numero di pizze al prosciutto (farina, pomodoro e prosciutto): ";
    cin >> nPizzeProsciutto;

    cout << "Farina necessaria: " << 100 * (nPizzeMargherita + nPizzeProsciutto) << "g" << endl;
    cout << "Prosciutto necessario: " << 50 * nPizzeProsciutto << "g" << endl;
    cout << "Pomodoro necessario: " << 100 * nPizzeProsciutto + 150 * nPizzeMargherita << "g" << endl;

    waitForKey();

    return 0;
}
