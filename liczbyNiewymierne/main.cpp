#include <iostream>
#include "irrational.h"

using namespace std;

void inputFrac(int& a, int& b, int& c, int& d);
int divFunc(int x, int y);
void toSimForm(IRrational& frac);

int main()
{
    int a,b,c,d;
    inputFrac(a,b,c,d);
    IRrational FracA(a,b);
    IRrational FracB(c,d);
    IRrational ResSub,ResAdd,ResMul,ResDiv;
//    cout <<'\n'<< a<<" "<<b<<" "<<c<<" "<<d<<" "<<'\n';
/*    cout<<'\n'<<"FracA \n";
    cout << FracA.x << ',' <<FracA.y << '\n';
    cout<<'\n'<<"FracB \n";
    cout << FracB.x << ',' <<FracB.y << '\n'*/;
    FracA!=FracB;
//    cout<<'\n'<<"Po operacji \n";
//    cout<<'\n'<<"FracA \n";
//    cout << FracA.x << ',' <<FracA.y << '\n';
//    cout<<'\n'<<"FracB \n";
//    cout << FracB.x << ',' <<FracB.y << '\n';

    //Arytmetyka
    ResAdd=FracA+FracB;
    //Najprostsza postac
    toSimForm(ResAdd);

    ResSub=FracA-FracB;
    toSimForm(ResSub);


    ResMul=FracA*FracB;
    toSimForm(ResMul);

    ResDiv=FracA/FracB;
    toSimForm(ResDiv);

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
    cout<<" Podaj pierwszy ulamek, gdzie A - licznik, a B - mianownik"<<'\n';
    cout<<"Podaj licznik A: "<<'\n';
    cin>>a;
    cout<<'\n'<<"Podaj mianownik B: "<<'\n';
    cin>>b;
    cout<<" Podaj drugi ulamek, gdzie C - licznik, a D - mianownik"<<'\n';
    cout<<"Podaj licznik C: "<<'\n';
    cin>>c;
    cout<<'\n'<<"Podaj mianownik B: "<<'\n';
    cin>>d;

}

int divFunc(int a, int b) {
    //Najwiekszy wspolny dzielnik
    if(b!=0){
       return (b,a%b);
    }
    else{
        return a;
    }
}

void toSimForm(IRrational& frac){
    int res=0;
    int a=frac.x;
    int b=frac.y;
    res=divFunc(a,b);
    if (res>1){
        frac.x=frac.x/res;
        int u=frac.x;
        //frac.x=frac.x/frac.y*res;
        //int u=frac.x;
        frac.y=frac.y/res;
        int v=frac.y;
        toSimForm(frac);
    }


}
