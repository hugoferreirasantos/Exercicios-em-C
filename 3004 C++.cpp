/*Escreva um programa em C++ para calcular e imprimir o valor do salário bruto de um vendedor de Livros.
 O vendedor recebe um valor fixo mensal além de uma comissão de 8% sobre o total das vendas do mês.
 O programa deve ler o valor do salário fixo e do total das vendas.*/
 
#include <iostream>
using namespace std;
 int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double salarioFixo, totalVendas, salarioBruto;
	
	cout<<"Informe o salário do vendedor:"<<endl;
	cin>>salarioFixo;
	
	cout<<"Informe o total de vendas no mês:"<<endl;
	cin>>totalVendas;
	
	salarioBruto= salarioFixo + totalVendas * 0.08;
	
	cout<<"O valor do salário Bruto é: R$ "<<salarioBruto<<endl;
	

	
}
