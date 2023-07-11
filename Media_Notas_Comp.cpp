//Programa para dizer se estar aprovado, em recuperaçao ou reprovado
#include <iostream.h>

void main(){

	float n1,n2,media;
	cout<<"Digite N1 ";
	cin>>n1;
	cout<<"Digite N2 ";
	cin>>n2;
	media=(n1+n2)/2;
	cout<<"Media= ";cout<<media;
	cout<<"\nVoce esta ";
	if (media>=7){
		cout<<"\nAprovado!";
		}
	if (media <7 && media>4) {
		cout<<"\nRecuperaçao!";
		}
	if (media <4) {
		cout<<"\nReprovado!";
		}

}
