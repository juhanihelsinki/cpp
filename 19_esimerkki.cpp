#include <iostream>
using namespace std;

int main()
{
    int var1 = 0;
    int var2 = 24;
    int var3 = 17;
    cout <<"Muuttujan var2 arvo on " << var2 << " ja se on tallennettu muistipaikkaan (&var2): " << &var2 <<endl;
    cout <<"Anna muuttujan var1 arvo: ";
    cin >> var1;
    int * pos1;
    pos1 = &var1;
    cout <<"Muuttujan var1 arvo " << var1 << " on tallennettu muistipaikkaan (&var1): "<< &var1 << endl;
    cout <<"Osoitin pos1 on asetettu viittaamaan  muistipaikkaan osoitteessa (pos1): " << pos1 << endl;
    cout <<"Osoittimen pos1 viittaaman muistipaikan sisältö (*pos1): "<< *pos1 << endl;
    pos1 = &var2;
    cout <<"Osoittimen pos1 viittaaman muistipaikan sisältöä on muutettu. Se (*pos1) on nyt: "<< *pos1<<endl;
    cout <<"Muuttujan var1 arvo on: " << var1 << endl;
    *pos1 = 3;
    cout <<"Osoittimen  pos1 viittausta on muutettu. Osoitin pos1 viittaa nyt osoitteeseen " << pos1 << " ja muistipaikan sisältö on nyt: " << *pos1 << endl; 
    cout << "Muuttujan var2 arvo on nyt " << var2 << endl;
    cout << &var1 << endl;
    cout << &var2 << endl;
    cout << &var3 << endl;
}
