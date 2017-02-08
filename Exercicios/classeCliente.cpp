#include <iostream>
#include <string>

using namespace std;

class Cliente{
    private:
        string nome;
        int numeroCartao;
        float saldoCartao,limiteCartao;
    public:
        Cliente(){}
		Cliente(string n,int numero,float s, float l){
            nome = n;
            numeroCartao = numero;
            saldoCartao = s;
            limiteCartao = l;
		}
		string getNome(){
            return nome;
		}
		float getSaldo(){
            return saldoCartao;
        }
		float getLimite(){
            return limiteCartao;
		}
};

class Lista{
    private:
        Cliente *c[5];
        int quant;
    public:
        Lista(){
            quant = 0;
        }
        void inserir(string n,int numero,float s,float l){
            if(quant < 5){
                c[quant] = new Cliente(n,numero,s,l);
                quant += 1;
            }else{
                cout<<"Lista lotada";
            }
        }
        void mostra(){
            for(int i = 0; i < quant; i++){
                cout<<"\nNome: "<<c[i]->getNome()<<"\nSaldo: "<<c[i]->getSaldo()<<"\nLimite: "<<c[i]->getLimite()<<endl;
            }
        }
       Cliente *maiorLimite(){
            float maiorlimite;
            int pos = 0;
            maiorlimite = c[0]->getLimite();
            for(int i = 0;i < quant;i++){
                if(maiorlimite < c[i]->getLimite()){
                   maiorlimite = c[i]->getLimite();
                   pos = i;
                }
            }
            return c[pos];
        }
        Cliente *menorSaldo(){
            float menorsaldo;
            int indice = 0;
            menorsaldo = c[0]->getSaldo();
            for(int i = 0;i < quant;i++){
                if(menorsaldo > c[i]->getSaldo()){
                   menorsaldo = c[i]->getSaldo();
                   indice = i;
                }
            }
            return c[indice];
        }
};
main(){
    Lista *cliente = new Lista();

    cliente->inserir("Fabio",246,2000,1000);
    cliente->inserir("Joana",135,2500,1500);
    cliente->inserir("Maria",789,3000,1200);
    cliente->mostra();
    Cliente *maior = cliente->maiorLimite();
    Cliente *menor = cliente->menorSaldo();
    cout<<"\nInformacoes sobre o cliente com maior limite";
    cout<<"\nNome: "<<maior->getNome()<<"\nSaldo: "<<maior->getSaldo()<<"\nLimite: "<<maior->getLimite();
    cout<<"\n\nInformacoes sobre o cliente com menor saldo\n";
    cout<<"Nome: "<<menor->getNome()<<"\nSaldo: "<<menor->getSaldo()<<"\nLimite: "<<menor->getLimite();
}
