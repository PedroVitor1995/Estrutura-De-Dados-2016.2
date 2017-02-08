#include <string>
#include <iostream>
#include <vector>

using namespace std;

class No{
	private:
		int codigo;
		string letra;
		
	public:
		No(int c, string l){
			codigo=c;
			letra=l;
		}
		int getCodigo(){
			return codigo;
		}
		string getLetra(){
   			return letra;
   		}
};
class Lista{
	private:
		vector<No> l;
	public:
		TLista();
		
		void inserir(int cod,string letra,int pos){
    		No novo(cod,letra);
		}
		void mostra(){
			for(int i=0; i<l.size(); i++){
				cout<<"Codigo: "<<l[i].getCodigo()<<" Letra: "<<l[i].getLetra()<<endl;
			}
		}
};
main(){
	Lista no;
	string menu;
	int opcao;

	menu = "1-Inserir \n2-Mostrar \n3-Sair \nOpcao: ";
	do{
		cout<<menu<<endl;
		cin>>opcao;
		if(opcao == 1){
			int cod,pos;
			string letra;
			cout<<"Codigo: "<<endl;
			cin>>cod;
			cout<<"Letra: "<<endl;
			cin>>letra;
			cout<<"Posicao a onde deseja inserir: "<<endl;
			cin>>pos;
			no.inserir(cod,letra,pos);
		}else if(opcao == 2){
			no.mostra();
		}else if(opcao == 3){
			cout<<"Saindo"<<endl;
		}else{
			cout<<"Opcao invalida!!"<<endl;
		}
	}while(opcao != 3);
}
