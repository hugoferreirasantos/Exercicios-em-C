/*).  Faça um programa em C++ que leia as notas bimestrais de um aluno, duas notas para o primeiro bimestre e duas notas para o segundo bimestre, 
calcule e imprima a média de cada bimestre a média final deste aluno.*/

#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout<<fixed;
	cout.precision(1);
	
	double nota1, nota2, nota3, nota4, mediaFinal;
	
	cout<<"Informe as duas notas do Primeiro Bimestre:"<<endl;
	cin>>nota1;
	cin>>nota2;
	
	cout<<"Informe as duas notas do Segundo Bimestre:"<<endl;
	cin>>nota3;
	cin>>nota4;
	
	mediaFinal: nota1 + nota2 + nota3 + nota4 / 2;
	
	cout<<"A média Final desse aluno é: "<<mediaFinal<<endl;
	
	
	
}
