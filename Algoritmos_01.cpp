#include <iostream>
#include <locale.h>

using namespace std;//necess�rio para utilizar os recursos I/O completos do iostream

int main(){
	//std::cout << "Hello World!" << std::endl;
	setlocale(LC_ALL, "Portuguese");
	cout<<"Olá Mundo!\n"<<endl;
	float x=1.222226;
	cout<<x;
	return 0;
}
