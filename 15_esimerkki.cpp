#include <iostream>
using namespace std;

void alkuluku(int n);

//Example 3: Arguments passed but no return value

int main()
{
    int luku;
    cout <<"\n\n\n\n\n \n ================ ALKULUKUOHJELMA =================\n\n";
    cout << "Anna positiivinen kokonaisluku tarkistusta varten:\nTarkistettava luku:   ";
    cin >> luku;
    
    // Funktiolle alkuluku() annetaan argumentiksi muuttuja luku
    alkuluku(luku);
    return 0;
}

// Funktiolla ei ole palautusarvoa. Siksi sen tyyppi on void. 
void alkuluku(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Tarkistus suoritettu: luku " << n << " ei ole alkuluku. \n\n";
    }
    else {
        cout << "Tarkistus suoritettu: luku "<< n << " on alkuluku. \n\n";
    }
    cout << "=============================\n\n\n\n\n\n\nOhjelma suoritettiin onnistuneesti\n\n.";
}
