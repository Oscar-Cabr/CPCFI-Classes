#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_back(10);  // agrega al final
    d.push_front(20); // agrega al inicio
    d.push_back(30);

    cout << "Front: " << d.front() << ", Back: " << d.back() << endl; // 20, 30

    d.pop_front(); // saca 20
    d.pop_back();  // saca 30

    while (!d.empty()) {
        cout << d.front() << " ";
        d.pop_front();
    }
    cout << endl;
    return 0;
}