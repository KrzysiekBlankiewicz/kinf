#include <iostream>
using namespace std;
int main()
{
cout<< "Podaj trzy liczby a ja ci powiem czy da sie z nich ulozyc rownoramienny";
int a, b, c;
cin >> a >> b >> c;
if (a==b||b==c||c==a){
cout << "Da sie";
}else{
cout << " Nie da sie";
}
}
