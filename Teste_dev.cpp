#include <iostream>
#include <string>		// Necess�rio para usar strings
using namespace std;

int main()
{
	string nome1("Fulano");		// Inicializa nome1
	string nome2("Beltrano");	// Inicializa nome2
	string nome3, nome4;		// N�o inicializa nome3 nem nome4

	cout << "Os dois primeiros nomes s�o " << nome1 << " e " << nome2 << endl;
	nome3 = "Ciclano";		// Inicializa��o posterior de nome3
	nome4 = nome3;
	cout << "O terceiro e quarto nomes s�o " << nome3 << " e " << nome4 << endl;
}
