#include <iostream>
#include <string>

using namespace std;

class Aluno{
	private:
		int mat;
		string nome;
	public:
		Aluno(int m,string n){
			mat = m;
			nome = n;
		}
		string getNome();
		int getMat();
};

string Aluno::getNome(){
	return nome;
}
int Aluno::getMat(){
	return mat;
}
main(){
	Aluno a3(1, "Pedro");
	cout << "Matricula: "<<a3.getMat();
	cout << "Nome: "<<a3.getNome();
}
