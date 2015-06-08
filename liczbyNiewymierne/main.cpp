#include <iostream>
#include "irrational.h"

using namespace std;

void inputFrac(int& a, int& b, int& c, int& d);

int main()
{
    int a,b,c,d;
    inputFrac(a,b,c,d);
    IRrational FracA(a,b);
    IRrational FracB(c,d);
    IRrational ResSub,ResAdd,ResMul,ResDiv;
    cout <<'\n'<< a<<" "<<b<<" "<<c<<" "<<d<<" "<<'\n';
    cout<<'\n'<<"FracA \n";
    cout << FracA.x << ',' <<FracA.y << '\n';
    cout<<'\n'<<"FracB \n";
    cout << FracB.x << ',' <<FracB.y << '\n';
    FracA!=FracB;
    cout<<'\n'<<"Po operacji \n";
    cout<<'\n'<<"FracA \n";
    cout << FracA.x << ',' <<FracA.y << '\n';
    cout<<'\n'<<"FracB \n";
    cout << FracB.x << ',' <<FracB.y << '\n';

    //Arytmetyka
    ResAdd=FracA+FracB;
    ResSub=FracA-FracB;
    ResMul=FracA*FracB;
    ResDiv=FracA/FracB;

    //Wyswietl wyniki
    cout<<'\n'<<"Wynik dodawania \n";
    cout << ResAdd.x << ',' <<ResAdd.y<< '\n';
    cout<<'\n'<<"Wynik odejmowania \n";
    cout << ResSub.x << ',' <<ResSub.y<< '\n';
    cout<<'\n'<<"Wynik mnozenia \n";
    cout << ResMul.x << ',' <<ResMul.y<< '\n';
    cout<<'\n'<<"Wynik dzielenia \n";
    cout << ResDiv.x<< ',' <<ResDiv.y<< '\n';


    return 0;
}

void inputFrac(int& a, int& b, int& c, int& d){
    // Brak oblugi wyjatkow
    cout<<" Podaj pierwszy ulamek, gdzie A - cecha, a B - mantysa"<<'\n';
    cout<<"Podaj ceche [licznik] A: "<<'\n';
    cin>>a;
    cout<<'\n'<<"Podaj mantyse [mianownik] B: "<<'\n';
    cin>>b;
    cout<<" Podaj drugi ulamek, gdzie C - cecha, a D - mantysa"<<'\n';
    cout<<"Podaj ceche [licznik] C: "<<'\n';
    cin>>c;
    cout<<'\n'<<"Podaj mantyse [mianownik] B: "<<'\n';
    cin>>d;

}
