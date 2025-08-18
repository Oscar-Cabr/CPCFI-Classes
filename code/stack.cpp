#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10); // push
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl; // 30

    s.pop(); // saca 30
    cout << "Top despues de pop: " << s.top() << endl; // 20

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}