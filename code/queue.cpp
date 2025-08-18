#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10); // enqueue
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10

    q.pop(); // saca 10
    cout << "Front despues de pop: " << q.front() << endl; // 20

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}