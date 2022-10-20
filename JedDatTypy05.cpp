
#include <iostream>

using namespace std;

int main()
{
    char x;
    int male = 0, velke = 0, cisla = 0, operatory = 0, jiny = 0;
    char suda = 0;
    bool obsahuje = false;
    cout << "Zadavej znaky zakoncena (\\): " << endl;
    cin >> x;
    while (x != '\\')
    {
        if (x >= 'A' && x <= 'Z')
        {
            ++velke;
        }
        else if (x >= 'a' && x <= 'z')
        {
            ++male;
        }
        else if (x >= '0' && x <= '9')
        {
            ++cisla;
        }
        else if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%')
        {
            ++operatory;
        }
        else 
        {
            ++jiny;
        }

        if (x >= '0' && x <= '9' && x % 2 == 0)
        {
            obsahuje = true;
            suda = x;
        }

        cin >> x;
    }
    if (obsahuje)
    {
        cout << "Ano obsahovalo sudou cifru " << suda << "\nPocet malych " << male << "\nPocet velkych " << velke << "\nPocet cifer " << cisla << "\nPocet operatoru " << operatory << "\nPocet jinych " << jiny << endl;
    }
    else
    {
        cout << "Ne neobsahovalo sudou cifru " << "\nPocet malych " << male << "\nPocet velkych " << velke << "\nPocet cifer " << cisla << "\nPocet operatoru " << operatory << "\nPocet jinych " << jiny << endl;
    }
}

