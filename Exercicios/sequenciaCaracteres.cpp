#include <iostream>

using namespace std;

char lista[10];
int quant = 0;

void inserir(char caractere){
    lista[quant] = caractere;
    quant++;
}
void mostraInversa(){
    for(int i=quant-1; i>=0; i--){
        cout<<"Caractere: "<<lista[i]<<endl;
    }
}
main(){
    inserir('A');
    inserir('E');
    inserir('I');
    inserir('O');
    inserir('U');
    mostraInversa();
}
