#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declarar vector vacío
    vector<int> v1;

    // Declarar con tamaño (5 elementos inicializados en 0)
    vector<int> v2(5);

    // Declarar con tamaño y valor inicial (5 elementos en 7)
    vector<int> v3(5, 7);

    // Inicializar con lista de valores
    vector<int> v4 = {1, 2, 3, 4, 5};

    // Agregar elementos
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    // Acceder a elementos
    cout << "v1[0] = " << v1[0] << endl;
    cout << "v4[2] = " << v4[2] << endl;

    // Cambiar valor de un elemento
    v1[1] = 50;

    // Tamaño del vector
    cout << "Tamaño de v1: " << v1.size() << endl;

    // Recorrer con for clásico
    cout << "Elementos de v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Recorrer con for-each
    cout << "Elementos de v3: ";
    for (int x : v3) {
        cout << x << " ";
    }
    cout << endl;

    // Eliminar último elemento
    v1.pop_back();

    cout << "Después de pop_back, v1: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    // Vaciar vector
    v1.clear();
    cout << "v1 está vacío? " << (v1.empty() ? "Sí" : "No") << endl;

    // Vector de vectores (matriz dinámica)
    vector<vector<int>> mat(3, vector<int>(4, 0));
    mat[1][2] = 99;

    cout << "Matriz 3x4:" << endl;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}