#include <iostream>

using namespace std;

int numeros[30];
int quant=0;

void inserirOrdenado(int valor){
    int pos;
    pos = -1;

    for(int i=0; i<quant; i++){
        if(valor < numeros[i]){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        numeros[quant] = valor;
        quant++;
    }else{
        for(int i=quant; i>pos; i--){
            numeros[i] = numeros[i-1];
        }
        numeros[pos] = valor;
        quant++;
    }
}
/*void inserir(int valor){
    numeros[quant] = valor;
    quant++;
}*/
void mostra(){
    for(int i=0; i<quant; i++){
        cout<<"Numero: "<<numeros[i]<<endl;
    }
}
main(){
    /*inserir(10);
    inserir(8);
    inserir(3);
    inserir(56);*/
    inserirOrdenado(26);
    inserirOrdenado(10);
    inserirOrdenado(11);
    inserirOrdenado(5);
    inserirOrdenado(9);
    inserirOrdenado(0);
    mostra();
}
