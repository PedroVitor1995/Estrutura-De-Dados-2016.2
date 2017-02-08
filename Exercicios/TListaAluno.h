#include <iostream>
#include "TAluno.h"

using namespace std;

TAluno::TAluno(int m, string n,int i){
	matricula = m;
	nome=n;
	idade=i;
}
string TAluno::getNome(){
   return nome;
}
int TAluno::getMat(){
   return matricula;
}
int TAluno::getIdade(){
	return idade;
}
TLista::TLista(){
	quant=0;
}
void TLista::inserir(int matricula,string nome,int idade){
    TAluno novo(matricula,nome,idade);
    l.push_back(novo);
	quant++;
}
void TLista::inserirOrdenado(int matricula,string nome,int idade){
    TAluno novo(matricula,nome,idade);
    vector<TAluno>::iterator it,local;
    int achou =0;
    for(it=l.begin();it!=l.end();it++){
        if(novo.getMat() < it->getMat()){
            l.insert(it,novo);
            achou = 1;
            break;
        }
    }
    if(achou == 0){
        l.push_back(novo);
    }
}
void TLista::mostrar(){
	//cout<<"\nSize="<<l.size()<<endl;
	for (int i=0;i<l.size();i++) {
		cout<<"\nMatricula: "<<l[i].getMat()<<"\nNome: "<<l[i].getNome()<<"\nIdade: "<<l[i].getIdade()<<endl;// valor na posição apontada por it
	}
}
void TLista::mostrar2(){ // use aqui um iterator
    for(vector<TAluno>::iterator i=l.begin();i!=l.end();i++){
        cout<<"\nMatricula: "<<i->getMat()<<"\nNome: "<<i->getNome()<<"\nIdade: "<<i->getIdade()<<endl;
    }
}

int TLista::procuraMat(int mat){
	for(int i=0;i<l.size();i++){
		if (mat == l[i].getMat()){
			return i;
		}
	}
	return -1;
}

void TLista::remover1(int p){ // copia o ultimo elemento na posicao que deve ser apagada
	int achou;
	l[p]=l[quant-1];
	l.pop_back(); //destroi elemento no final do vetor
}

void TLista::remover2(int p){ // movimente todos os elementos para uma posicao a frente,

}
