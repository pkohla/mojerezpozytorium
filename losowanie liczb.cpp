//#include<cstdio>
#include<ctime>
#include<iostream>
#include<cstdlib>

using namespace std;

int czyszczenie_bufora () // funkcja czyszczaca buor
{
    cin.clear();
    cin.sync();
}
int podaj_liczbe(int b)
{
    int a;
    cout <<"Podaj";
    if (b==1) cout <<" poczatek"; else cout <<" koniec";
    cout <<" zakresu:";
    do{
        czyszczenie_bufora();
        cin >> a;
        if (cin.good()!=true) cout <<"Podaj prawidlow¹ liczbe";
    }while (cin.good()!=true);
    return a;
}
int losowanie_liczb(int pocz, int koniec)
{
    int a;

    a=(rand()%(koniec-pocz)) + pocz;
    return a;
}

int main()
{
    int a,b, pocz, kon;
    srand(time(NULL));
    cout <<"Podaj zakres za jakiego mam losowac\n";
    pocz=podaj_liczbe(1);
    kon=podaj_liczbe(2);
    b=10;
    do{
        a=losowanie_liczb(pocz,kon);
        cout << "Wylosowano liczbe " << a <<"\n";
        b--;
        }while (b>0);
    system("pause");
    return 0;
}
