/*O restaurante a quilo "Bom e Barato" cobra R$13,50 por cada quilo de refeição.
 Escreva um programa em C++ que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
 Assuma que abalança já desconte o peso do prato.*/
 
 #include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout<<fixed;
	cout.precision(2);
	
	double pesoPrato, valorPagar;
	
	cout<<"Informe o peso do prato: "<<endl;
	cin>>pesoPrato;
	
	valorPagar= pesoPrato * 13.50;
	
	cout<<"O cliente deve pagar: R$"<<valorPagar<<endl;
	
	
}
	
	

	
	

