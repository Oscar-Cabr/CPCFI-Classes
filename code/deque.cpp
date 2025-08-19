#include <iostream>
#include <deque>
using namespace std;

void printDeque(auto v){ for(int a: v) cout << a << " "; cout << endl;}

int main ()
{
    deque<int> d = {5,5,5};

    printDeque(d); // 5 5 5

    for(int i = 0; i < 3; i++)
        d.push_back(1);
    printDeque(d); // 5 5 5 1 1 1

    for(int i = 0; i < 3; i++)
        d.push_front(0);
    printDeque(d); // 0 0 0 5 5 5 1 1 1

    d.pop_back();
    printDeque(d); // 0 0 0 5 5 5 1 1

    d.pop_front();
    printDeque(d); // 0 0 5 5 5 1 1

    // Access to random elements
    cout << "d[0]: " << d[0] << endl;
    cout << "d[2]: " << d[2] << endl;
    cout << "d[6]: " << d[6] << endl;

    // Size of deque
    cout << "d.size(): " << d.size() << endl;

    // In general:    front --> [ , , , , , , ] <-- back

    return 0;
}