/*Fa�a um programa em C++ para ler o sal�rio de um colaborador e aument�-lo em 13%. 
Ap�s o aumento, desconte 3,5% de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final.*/
#include <iostream>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<fixed;
	cout.precision(2);
	
	double salario, salarioAumento, salarioFinal;
	
	cout<<"Informe o sal�rio do colaborador:"<<endl;
	cin>>salario;
	
	salarioAumento= salario *0.13;
	salarioFinal= salario + salarioAumento - 0.035;
	
	cout<<"O sal�rio � : R$ "<<salario<<endl;
	cout<<"O sal�rio com Aumento �: R$ "<<salarioAumento<<endl;
	cout<<"O sal�rio Final � : R$ "<<salarioFinal<<endl;
	
}
 
