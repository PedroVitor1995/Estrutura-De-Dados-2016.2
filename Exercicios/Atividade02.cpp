#include <iostream>
#include <string>

using namespace std;

class Lista{
	private:
		char letra[5];
		int ultimo;
	public:
		Lista(){			
			ultimo = 0;
		}
		void inserir(char novo){
			if(ultimo < 5){
				letra[ultimo] = novo;
				ultimo++;
			}else{
				cout<<"Lista lotada!!";
			}
		}
		int getQuant(){
			return ultimo;
		}
		void mostrar(){
			for(int i=0; i<ultimo; i++){
				cout<<"Letra: "<<letra[i]<<endl;
			}
		}
		int procuraLetra(char valor){
			for(int i=0; i<ultimo; i++){
				if(letra[i] == valor){
					return i;
				}
			}
			return -1;
		}			
		void ConsultaProximo(char alfa){
			int achou;
			achou = procuraLetra(alfa);
			if(achou != -1){
				if(achou < getQuant()-1){
					cout<<"Proxima letra eh: "<<letra[achou+1]<<endl;	
				}else{
					cout<<"Proximo nao existe!!Este elemento e o ultimo da lista!"<<endl;
				}		
			}else{
				cout<<"Elemento nao existe na lista!"<<endl;	
			}
		}		
};

int main(){
	
	Lista conjunto;
	
	int opcao;
	char letra;
	string menu;
	menu = "1-Inserir letra \n2-Consulta proxima letra \n3-Mostra letras \n4- Sair \nOpcao: ";
		
	do{
		cout<<menu;
		cin>>opcao;
		if(opcao == 1){
			cout<<"Digite uma letra: ";
			cin>>letra;
			conjunto.inserir(letra);
		}else if(opcao == 2){
			cout<<"Digite uma letra: ";
			cin>>letra;
			conjunto.ConsultaProximo(letra);
		}else if(opcao == 3){
			conjunto.mostrar();
		}else if(opcao == 4){
			cout<<"Saindo\n";
		}else{
			cout<<"Opcao invalida!\n";
		}
	}while(opcao != 4);
}
