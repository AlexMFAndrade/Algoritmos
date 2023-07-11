#include <iostream>
#include <cstdlib>

using namespace std;
 
int _iniciado=0; //variável global começa em 0
 
void start (void){
_iniciado++;
}
 
int main (void){
start (); //chamando a função start
int x=0, opcao; // variáveis locais, apenas a função MAIN pode utilizar
x++;
cout <<"Este programa foi iniciado "<<_iniciado<<" vez(es)";
cout <<"\nO valor de X e "<<x;
cout <<"\n\nDeseja reiniciar o programa?\n1.\t\tSIM\nOutro numero\tNAO\n";
cin >> opcao;
cin.ignore ();
if (opcao==1)
main (); //reiniciar o programa
return 0;
}
