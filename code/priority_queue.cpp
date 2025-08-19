#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> pq; // Por defecto esta definida con el criterio de maximo valor.

    pq.push(10); pq.push(5); pq.push(20); // Al agregar valores, la PQ los ordena automáticamente.
    
    // pop elimina el elemento de máxima prioridad (el mayor) segun el criterio dado.
    pq.pop();  // elimina el elemento 20

    // top devuelve el valor de máxima prioridad sin removerlo de la PQ.
    int max_valor = pq.top();  // max_valor será 10 debido al pop anterior

    //empty es una funcion que nos devuelve un booleano, da verdadero si esta vacia
    bool esta_vacia = pq.empty();

    //size nos devuelve el numero de elementos en la PQ
    int tamaño = pq.size();

    //De forma automática, la PQ se crea siend1o un max-heap, pero se puede cambiar a un min-heap al declararla cambiando
    // el custom comparator. Ésto requiere que especifiques el contenedor, por mera sintaxis.
    priority_queue<int, vector<int>, greater<int>> pqMin;

    // pueden usar estas lineas en diferentes partes del codigo y ver que les arroja para que lo prueben
    cout << "Top: " << pq.top() << endl; 
    cout << "Size: " << pq.size() << endl;
    cout << "Is empty? " << (pq.empty() ? "Yes" : "No") << endl;

    //Es importante mencionar que la PQ no permite iterar sobre sus elementos, solo puede accederse al top, push y pop

    //Ejemplo con pares en lugar de enteros
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_pq;
    priority_queue<pair<int,int>> max_pq;

    return 0;
}