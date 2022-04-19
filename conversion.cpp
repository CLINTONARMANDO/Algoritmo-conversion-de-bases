#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int numci, num[numci+1], bas, bas2, numbas10=0, aux=0; 
	cout<<"Ingrese la base: ";
	cin>>bas;
	cout<<"Ingrese el numero de cifras: ";
	cin>>numci;
	
	for (int i=numci-1; i>=0; i--){
		aux++;
		cout<<endl<<"Ingrese el numero "<<aux<<": ";
		cin>>num[i];
		
		if(bas>num[i] && num[i]>0){
		}
		else{
			cout<<"El numero que inserto no corresponde a la base"<<bas;
			i++;
		}	
	}
	for (int i=0; i<numci; i++){
		numbas10=numbas10+num[i]*pow(bas,i);
	}
	aux=0;
	cout<<endl<<numbas10<<endl;
	aux=numbas10;
	cout<<"Ingrese la base a la que quiere llegar: ";
	cin>>bas2;
	int aux2=0, numbas[aux2];
	while(aux/bas2>=bas2){
		numbas[aux2]=aux%bas2;
		aux=aux/bas2;
		aux2++;
		
	}
	numbas[aux2]=aux%bas2;
	aux2++;
	numbas[aux2]=aux/bas2;
	aux2++;
	for (int i=aux2-1; i>=0; i--){
		cout<<numbas[i];
	}
	return 0;
}
