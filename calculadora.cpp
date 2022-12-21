#include <iostream> 

using namespace std;

int main(){

    int n1 ;
    int n2 ;
    int resultado ;

    cout << "Bienvenido a mi calculadora\n\n";

    cout << "Introduce un numero\n";
    cin >> n1;
    cout << "Introduce otro numero\n";
    cin >> n2;

    cout << "1.[ + ]" << "\n";
    cout << "2.[ - ]" << "\n";
    cout << "3.[ * ]" << "\n";
    cout << "4.[ / ]" << "\n";

    cin >> resultado ;

    if (resultado==1){cout << n1+n2 ;}
    if (resultado==2){cout << n1-n2 ;}
    if (resultado==3){cout << n1*n2 ;}
    if (resultado==4){cout << n1/n2 ;}

    return 0;
}
