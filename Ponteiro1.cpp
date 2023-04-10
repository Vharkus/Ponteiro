//Bibliotecas padrões.
#include <iostream>
using namespace std;
//Código principal.
int main() {
    //Declaração da variavel junto de um valor.
    int Var = 3;
    //Declaração do ponteiro(também é considerado variável). P é uma identificação não obrigatória que todos usam por comodidade e facilidade.
    int* pVar;
    //Atribuição do ponteiro com o valor da nossa variável.(Isso acontece graças ao &.)
    pVar = &Var;
    //Interface que mostra o valor da variável, nesse caso 3.
    cout << Var << endl;
    //Interface que mostra o valor do ponteiro, será 3 porque o valor do ponteiro foi atribuido a variavel inicial.
    cout << *pVar << endl;
    //Vai mostrar o número de alocação da memória. Vai mudar constantemente.
    cout << pVar << endl;
    return 0;
}