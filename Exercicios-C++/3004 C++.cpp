/*Escreva um programa em C++ para calcular e imprimir o valor do sal�rio bruto de um vendedor de Livros.
 O vendedor recebe um valor fixo mensal al�m de uma comiss�o de 8% sobre o total das vendas do m�s.
 O programa deve ler o valor do sal�rio fixo e do total das vendas.*/
 
#include <iostream>
using namespace std;
 int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double salarioFixo, totalVendas, salarioBruto;
	
	cout<<"Informe o sal�rio do vendedor:"<<endl;
	cin>>salarioFixo;
	
	cout<<"Informe o total de vendas no m�s:"<<endl;
	cin>>totalVendas;
	
	salarioBruto= salarioFixo + totalVendas * 0.08;
	
	cout<<"O valor do sal�rio Bruto �: R$ "<<salarioBruto<<endl;
	

	
}
