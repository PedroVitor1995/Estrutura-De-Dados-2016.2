#include <iostream>
#include <string>

using namespace std;

class Aluno{
	private:
		int mat,idade;
		string nome;
	public:
		Aluno(){}
		Aluno(int m,string n,int i){
		    mat = m;
			nome = n;
			idade = i;
		}
		string getNome(){
			return nome;
		}
		int getMat(){
			return mat;	
		}
		int getIdade(){
			return idade;
		}
};

class Lista{
	private:
		Aluno *l[10];
		int quant;
	public:
		Lista(){
			quant=0;
		}
		void inserir(int m,string n,int i){
			if (quant<=9){
				l[quant]= new Aluno(m,n,i);
		    	quant++;
		    	cout<<"\nAluno cadastrado com sucesso\n";
			}else{
				cout<<"\nTurma lotada!\n";	
			}
	  	}
		void mostrarTodos(){
			for (int i=0; i<quant; i++){
				cout<<"\nMatricula: "<<l[i]->getMat()<<"\nNome: "<<l[i]->getNome()<<"\nIdade: "<<l[i]->getIdade()<<endl;
			}
		}
		int getQuant(){
			return quant;
		}
		Aluno *maisVelho(){
            int maisVelho;
            int pos = 0;
            maisVelho = l[0]->getIdade();
            for(int i = 0;i < quant;i++){
                if(maisVelho < l[i]->getIdade()){
                   maisVelho = l[i]->getIdade();
                   pos = i;
                }
            }
            return l[pos];
        }
        Aluno *maisNovo(){
            int maisNovo;
            int pos = 0;
            maisNovo = l[0]->getIdade();
            for(int i = 0;i < quant;i++){
                if(maisNovo < l[i]->getIdade()){
                   maisNovo = l[i]->getIdade();
                   pos = i;
                }
            }
            return l[pos];
        }
		int procura(int mat){
			for(int i=0; i<quant; i++){
				if(l[i]->getMat() == mat){
					return i;
				}
			}
			return -1;
		}
		int procuraNome(string novoNome){
			for(int i=0; i<quant; i++){
				if(l[i]->getNome() == novoNome){
					return i;
				}
			}
			return -1;
		}
		void mostraPos(int pos){
			cout<<"\nMatricula: "<<l[pos]->getMat()<<"\nNome: "<<l[pos]->getNome()<<"\nIdade: "<<l[pos]->getIdade()<<endl;	
		}
		void consultarMat(int mat){
			int achou;

			achou = procura(mat);
			if(achou != -1){
				mostraPos(achou);
			}else{
				cout<<"\nNumero de matricula nao encontrada!\n";	
			}	
		}
		void consultarNome(string Nome){
			int achou;

			achou = procuraNome(Nome);
			if(achou != -1){
				mostraPos(achou);
			}else{
				cout<<"\nNome nao encontrado!\n";
			}
		}
		void removerMat(int mat){
			int achou;
			
			achou = procura(mat);
			if(achou != -1){
				mostraPos(achou);
				l[achou] = l[quant-1];
				quant--; 
				cout<<"\nAluno removido com sucesso\n";
			}else{
				cout<<"\nNumero de matricula nao encontrada!\n";	
			}
		}
		void removerNome(string nome){
			int achou;
			
			achou = procuraNome(nome);
			if(achou != -1){
				mostraPos(achou);
				l[achou] = l[quant-1];
				quant--; 
				cout<<"\nAluno removido com sucesso\n";
			}else{
				cout<<"\nNumero de matricula nao encontrada!\n";	
			}
		}
		void alterarMat(int mat,int novaMat){
			int achou;

			achou = procura(mat);
			if(achou != -1){
				l[achou] = new Aluno(novaMat,l[achou]->getNome(),l[achou]->getIdade());
				cout<<"\nMatricula alterada com sucesso\n";
			}else{
				cout<<"\nNumero de matricula nao encontrada!\n";	
			}	
		}
		void alterarNome(int mat,string novoNome){
			int achou;

			achou = procura(mat);
			if(achou != -1){
				l[achou] = new Aluno(l[achou]->getMat(),novoNome,l[achou]->getIdade());
				cout<<"\nNome alterado com sucesso\n";
			}else{
				cout<<"\nNumero de matricula nao encontrada!\n";	
			}	
		}
		void alterarIdade(int mat,int novaIdade){
			int achou;

			achou = procura(mat);
			if(achou != -1){
				l[achou] = new Aluno(l[achou]->getMat(),l[achou]->getNome(),novaIdade);
				cout<<"\nIdade alterada com sucesso\n";
			}else{
				cout<<"\nNumero de matricula nao encontrada!\n";	
			}	
		}
};

main(){
	
	Lista *turma=new Lista();
	
	int mat,idade,opcao;
	string nome,menu;
	menu = "1-Inserir aluno \n2-Remover aluno \n3-Consultar aluno \n4-Alterar aluno \n5- Sair \nOpcao: ";
		
	do{
		cout<<menu;
		cin>>opcao;
		if(opcao == 1){
			cout<<"Inserindo aluno\n";
			cout<<"Digite a matricula: ";
			cin>>mat;
			cout<<"Digite o nome: ";
			fflush(stdin);
			cin>>nome;
			cout<<"Digite a idade: ";
			cin>>idade;
			turma->inserir(mat,nome,idade);	
		}else if(opcao == 2){
			string menu;
			int opcao;

			cout<<"Removendo aluno\n";
			menu = "1-Remover matricula \n2-Remover Nome \nOpcao: ";
			cout<<menu;
			cin>>opcao;
			if(opcao == 1){
				cout<<"\nDigite a matricula: ";
				cin>>mat;
				turma->removerMat(mat);
			}else if(opcao == 2){
				string nome;

				cout<<"\nDigite o nome: ";
				cin>>nome;
				turma->removerNome(nome);
			}
		}else if(opcao == 3){
			string menu;
			int opcao;
			
			cout<<"Consultando aluno\n";
			menu = "1-Consultar matricula \n2-Consultar nome \n3-Consultar Todos \n4-Cosultar mais velho \n5-Consultar mais novo \nOpcao: ";
			cout<<menu;
			cin>>opcao;
			if(opcao == 1){
				cout<<"\nDigite a matricula: ";
				cin>>mat;
				turma->consultarMat(mat);
			}else if(opcao ==2){
				string novoNome;
				cout<<"\nDigite o nome: ";
				cin>>novoNome;
				turma->consultarNome(novoNome);
			}else if(opcao == 3){
				turma->mostrarTodos();
			}else if(opcao == 4){
				Aluno *velho = turma->maisVelho();
				cout<<"\nMatricula: "<<velho->getMat()<<"\nNome: "<<velho->getNome()<<"\nIdade: "<<velho->getIdade();
			}else if(opcao == 5){
				Aluno *novo = turma->maisNovo();
				cout<<"\nMatricula: "<<novo->getMat()<<"\nNome: "<<novo->getNome()<<"\nIdade: "<<novo->getIdade();
			}else{
				cout<<"\nOpcao invalida!";	
			}
		}else if(opcao == 4){
			string menu;
			int opcao;
			
			cout<<"Alterando aluno\n";
			menu = "1-Alterar matricula \n2-Alterar nome \n3-Alterar idade \nOpcao: ";
			cout<<menu;
			cin>>opcao;
			if(opcao == 1){
				int novaMat;
				cout<<"\nDigite a matricula: ";
				cin>>mat;
				if(turma->procura(mat) != -1){
					cout<<"\nDigite a nova matricula: ";
					cin>>novaMat;
				}
				turma->alterarMat(mat,novaMat);
			}else if(opcao == 2){
				string novoNome;
				cout<<"\nDigite a matricula: ";
				cin>>mat;
				if(turma->procura(mat) != -1){
					cout<<"\nDigite o novo nome: ";
					cin>>novoNome;
				}
				turma->alterarNome(mat,novoNome);
			}else if(opcao == 3){
				int novaIdade;
				
				cout<<"\nDigite a matricula: ";
				cin>>mat;
				if(turma->procura(mat) != -1){
					cout<<"\nDigite a nova idade: ";
					cin>>novaIdade;
				}
				turma->alterarIdade(mat,novaIdade);
			}else{
				cout<<"\nOpcao invalida!";
			}
		}else if(opcao == 5){
			cout<<"Saindo\n";
		}else{
			cout<<"Opcao invalida!\n";
		}
		cout<<"\nQuantidade de alunos: "<<turma->getQuant()<<"\n";
	}while(opcao != 5);
    
}
