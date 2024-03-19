#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale (LC_ALL,"portuguese");
	float kg;
	float ex;
	float mul;
	
	ex = 0;
	mul = 0;
	
	cout<<"Digite o peso do peixe em Quilo: ";
	cin>> kg;
	
	if(kg >=50){
		ex = kg-50;
		mul = ex*4.00;
		
		cout <<"O valor da multa é:R$"<< mul <<" devido ao excesso de peso, que foi: "<< ex<<"Kg";
	}

	else {
		cout <<"A pesagem não ultrapassou o excesso.";
	}
	
	
	
	return 0;
}
