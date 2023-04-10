//Bibliotecas padrões.
#include <iostream>
using namespace std;
//Código principal.
int main() {
    //Declaração da variavel com ponteiro.(* simboliza o ponteiro). Uso do new está relacionado com classes.
    int *ptr = new int;
    //Atribuição de um valor para o ponteiro.
    *ptr = 7;
    //Interface que mostra o valor do ponteiro(nesse caso é 7.)
    cout << *ptr<<endl;
    //Sem o * nós iremos receber a informação, o número, que nossa memória foi guardada.
    cout << ptr << endl;
    //É necessário destruir o ponteiro para finalizar essa alocação.
    delete ptr;
    //Deixa nulo, limpa os números armazenados. (COMENTAR DEPOIS(TUDO, NA VERDADE.)
    ptr = nullptr;
    //Interfaces usadas anteriomente que agora estarão sendo destruidas. É necessário citar tudo o que será destruido.
    cout << *ptr<<endl;
    cout << ptr << endl;
    return 0;
}