#ifndef ALUNO
#define ALUNO
#include <string>
#include <iostream>
#include <vector>
//ifndef e define: Essas pol�ticas s�o fornecidas somente para compatibilidade com vers�es
//anteriores da linguagem.
//isso impede a declara��o dupla de quaisquer identificadores como tipos,
//e vari�veis est�ticas, por exemplo.
using namespace std;

class TAluno{
	private:
		int matricula,idade;
		string nome;
	public:
		TAluno(int m,string n,int i);
		string getNome();
		int getMat();
		int getIdade();
};

class TLista{
	private:
        int quant;
        vector<TAluno> l;//similar a um array, com a diferenca que tem tamanho dinamico
	//funcoes:begin(),end(),push_back(),pop_back(),size(),[]
	public:
		TLista();
		void inserir(int,string,int);
		void inserirOrdenado(int,string,int);
		void mostrar();
		void mostrar2();
		int procuraMat(int);
		void remover1(int);
		void remover2(int);

};
#endif
