#include <iostream>
#include <wchar.h> //Imprime acentos
using namespace std;

int suma();
int resta();
int mult();
int div();
void menu(int &elec);	

int main(){
	setlocale(LC_ALL,""); //Semilla de la libreria wchar.h
	float a;
	int elec;
	menu(elec);

	if((elec>=1)&& (elec<=4)){
		switch(elec){
			case 1: suma() ; break;
			case 2: resta(); break;
			case 3: mult(); break;
			case 4: div(); break;
			default: cout << "ERROR 001" << endl;
		}
	}

	
	
	
	
	
	
	
	return 0;
}
void menu(int &elec){
	cout << "      ===================      " <<endl;
	cout << "     |                   |     "<<endl;
	cout << "     |    CALCULADORA    |     "<<endl;
	cout << "     |                   |     "<<endl;
	cout << "      ===================      "<<endl;
	cout << "0.0.1" << endl << endl;
	
	
	cout << "1.SUMAR        2.RESTAR" << endl;
	cout << "3.MULTIPLICAR  4.DIVIDIR" << endl;
	cout << "          5.SALIR          " << endl;
	
	
	do{
		cout << endl <<"Elige una opción: " ;
		cin >> elec;
		if((elec<1) || (elec>6)){
			cout << "Número erroneo" << endl << endl;
		}
	}while((elec<1) || (elec>6));
}
int suma(){
	
	long n1, n2, total, total_f;
	cout << "Introduce el primer número: " ;
	cin >> n1;
	
	cout << "Introduce el segundo número: ";
	cin >> n2;


	total = n1 +n2;	
	cout << n1 << " + " << n2 << " = " << total << endl;

	do{
		cout <<"Para detener el proceso escribe 0 " << endl;
		cout << "Introduce el siguiente número: " ;
		cin >> n2;
		if(n2 != 0){
			total_f = total + n2;
			cout << total << " + " << n2 << " = " <<  total_f << endl;
			total = total_f;							
		}		
	}while(n2 != 0);
	
	if(n2 == 0){
		total_f = total;
	}
	
	return total_f;
}
int resta(){
	
	long n1, n2, total, total_f;
	cout << "Introduce el primer número: " ;
	cin >> n1;
	
	cout << "Introduce el segundo número: ";
	cin >> n2;


	total = n1-n2;	
	cout << n1 << " - " << n2 << " = " << total << endl;

	do{
		cout <<"Para detener el proceso escribe 0 " << endl;
		cout << "Introduce el siguiente número: " ;
		cin >> n2;
		if(n2 != 0){
			total_f = total - n2;
			cout << total << " - " << n2 << " = " <<  total_f << endl;
			total = total_f;							
		}		
	}while(n2 != 0);
	
	if(n2 == 0){
		total_f = total;
	}
	
	return total_f;
}
int mult(){
	
	long n1, n2, total, total_f;
	cout << "Introduce el primer número: " ;
	cin >> n1;
	
	cout << "Introduce el segundo número: ";
	cin >> n2;


	total = n1*n2;	
	cout << n1 << " * " << n2 << " = " << total << endl;

	do{
		cout <<"Para detener el proceso escribe 0 " << endl;
		cout << "Introduce el siguiente número: " ;
		cin >> n2;
		if(n2 != 0){
			total_f = total * n2;
			cout << total << " * " << n2 << " = " <<  total_f << endl;
			total = total_f;							
		}		
	}while(n2 != 0);
	
	if(n2 == 0){
		total_f = total;
	}
	
	return total_f;
}
int div(){
	
	float n1, n2, total, total_f;
	cout << "Introduce el primer número: " ;
	cin >> n1;
	
	do{
		cout << "Introduce el segundo número(que no sea 0): ";
		cin >> n2;
		if(n2 == 0){
			cout << "Número erroneo" << endl;
		}
	}while(n2 == 0);	
		

	total = n1/n2;
		
	cout << n1 << " / " << n2 << " = " << total << endl;

	do{
		cout <<"Para detener el proceso escribe 0 " << endl;
		cout << "Introduce el siguiente número: " ;
		cin >> n2;
		total_f = total/n2;
		cout << total << " / " << n2 << " = " <<total_f << endl;
		total = total_f; 	
	}while(n2 != 0);
	
	if(n2 == 0){
		total_f = total;
	}
	
	return total_f;
}

