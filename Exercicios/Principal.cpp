#include <iostream>

#include "TAluno.h"
#include "TListaAluno.h"

using namespace std;

int main(){

	TLista turma;
	int op;
	string menu;

	menu = "1-Inserir \n2-Mostrar \n3-Remover \n4-Sair \nOpcao: ";

	do{
		cout<<menu;
		cin>>op;
		if(op==1){
			int mat,idade;
			string nome;
			cout<<"Matricula: ";
			cin>>mat;
			cout<<"Nome: ";
			cin>>nome;
			cout<<"Idade: ";
			cin>>idade;
			//turma.inserir(mat,nome,idade);
			turma.inserirOrdenado(mat,nome,idade);
		}else if(op==2){
			//turma.mostrar();
			turma.mostrar2();
		}else if(op==3){
            int mat;
            cout<<"Matricula: ";
			cin>>mat;
			//turma.remover1(mat);
			turma.remover2(mat);
		}else if(op==4){
			cout<<"Saindo";
		}else{
			cout<<"Opcao invalida!!"<<endl;
		}
	}while(op!=4);

//	turma.remover2(1);
//	cout<<"\nDepois de remover o aluno 2-Joao ";
//	turma.mostrar();

}
