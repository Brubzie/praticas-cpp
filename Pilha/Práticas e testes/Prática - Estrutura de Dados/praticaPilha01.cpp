#include <iostream>
#include <locale>

#define PILHA 10 // Tamanho máximo da pilha

using namespace std;

// Exemplo de Pilha Estática
struct Pilha {
    int arr[PILHA]; // Array para armazenar os elementos da pilha
    int topo;      // Índice do topo da pilha

    Pilha() : topo(-1) {}

    void push(int elemento) {
        if (topo == PILHA - 1) {
            cout << "[Erro] Pilha cheia!" << endl;

            return;
        }

        arr[++topo] = elemento; // Incrementa o topo e insere o elemento na posição correspondente
    }

    void pop() {
        if (topo == -1) {
            cout << "[Erro] Pilha vazia!" << endl;

            return;
        }

        --topo; // Apenas decrementa o topo (elemento será "removido" na próxima inserção)
    }

    int top() {
        if (topo == -1) {
            cout << "[Erro] Pilha vazia!" << endl;
            return -1; // Valor indicando erro
        }

        return arr[topo]; // Retorna o elemento no topo
    }

    bool isEmpty() {
        return topo == -1;
    }
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Pilha pilha;

    pilha.push(5);
    pilha.push(10);
    pilha.push(7);

    cout << "Topo da pilha: " << pilha.top() << endl;

    pilha.pop();

    cout << "Topo da pilha após pop: " << pilha.top() << endl;

    return 0;
}