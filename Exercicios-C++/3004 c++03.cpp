/*Faça um programa em C++ para ler o salário de um colaborador e aumentá-lo em 13%. 
Após o aumento, desconte 3,5% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.*/
#include <iostream>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<fixed;
	cout.precision(2);
	
	double salario, salarioAumento, salarioFinal;
	
	cout<<"Informe o salário do colaborador:"<<endl;
	cin>>salario;
	
	salarioAumento= salario *0.13;
	salarioFinal= salario + salarioAumento - 0.035;
	
	cout<<"O salário é : R$ "<<salario<<endl;
	cout<<"O salário com Aumento é: R$ "<<salarioAumento<<endl;
	cout<<"O salário Final é : R$ "<<salarioFinal<<endl;
	
}
 
