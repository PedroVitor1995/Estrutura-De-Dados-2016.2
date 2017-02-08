#include <iostream>
#include <string>

using namespace std;

class Aluno{
	private:
		int mat;
		string nome;
	public:	
		Aluno(){}	
		Aluno(int m,string n){
		    mat = m;			
			nome =n;
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

class Lista{
	private:
		Aluno *l[10];
		int quant;
	public:
		Lista(){			
			quant=0;
		}
		void inserir(int m,string n){
			if (quant<=9){
				l[quant]= new Aluno(m,n);
		    	quant++;
			}
			
			   	
	  	}
		
		void mostrar(){
			for (int i=0;i<quant;i++)
				cout<<"\nMatricula: "<<l[i]->getMat()<<"\nNome:"<<l[i]->getNome()<<endl;			
		}
		
		int getQuant(){
			return quant;
		}
		
		Aluno *maisvelho(){
			return l[quant-1];
		}
	
	
	
};
main(){
	int op;
	Lista *turma=new Lista();
		
	cout<<"Quantidade:"<<turma->getQuant();
	turma->inserir(1,"Fabio");
	turma->inserir(2,"Joana");
	turma->inserir(3,"Glaucio");
	turma->mostrar();
	cout<<"\nQuantidade de alunos:"<<turma->getQuant();
	Aluno *velho=turma->maisvelho();
    cout<<"\n\nMais velho:"<<velho->getNome();

	
	
	

}
