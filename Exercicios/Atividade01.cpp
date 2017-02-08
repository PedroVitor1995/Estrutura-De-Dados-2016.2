#include <iostream>
#include <string>

using namespace std;

class Lista{
	private:
		int lista[5];
		int ultimo;
	public:
		Lista(){			
			ultimo = 0;
		}
		void inserirFinal(int novo){
			if(ultimo < 5){
				lista[ultimo] = novo;
				ultimo++;
			}else{
				cout<<"Lista lotada!!";
			}
		}
		int getQuant(){
			return ultimo;
		}
		void remover(){
			if(getQuant() > 0){
				for(int i=0; i<ultimo; i++){
				lista[i] = lista[i+1];
				}
				cout<<"Numero removido com sucesso"<<endl;
			}else{
				cout<<"Nao tem numeros"<<endl;	
			}		
		}
		void mostrar(){
			if(getQuant() > 0){
				for (int i=0; i<ultimo; i++){
				cout<<"Numero: "<<lista[i]<<endl;
				}
				ultimo--;
			}else{
				cout<<"Nao tem numeros"<<endl;
			}		
		}
};

int main(){
	
	Lista conjunto;
	
	int numero,opcao;
	string menu;
	menu = "1-Inserir numero \n2-Remover numero \n3-Mostra numeros \n4- Sair \nOpcao: ";
		
	do{
		cout<<menu;
		cin>>opcao;
		if(opcao == 1){
			cout<<"Digite um numero: ";
			cin>>numero;
			conjunto.inserirFinal(numero);
		}else if(opcao == 2){
			conjunto.remover();
		}else if(opcao == 3){
			conjunto.mostrar();
		}else if(opcao == 4){
			cout<<"Saindo\n";
		}else{
			cout<<"Opcao invalida!\n";
		}
	}while(opcao != 4);
}
