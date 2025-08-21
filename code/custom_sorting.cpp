#include <bits/stdc++.h>
using namespace std;

// 1) Comparator as a function
bool cmpFunction(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second < b.second; // ascending by second
}

// 2) Comparator as a functor (struct with operator())
struct CmpFunctor {
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) const {
        return a.second < b.second; // ascending by second
    }
};

int main() {
    vector<pair<int,int>> v = {{1, 30}, {2, 10}, {3, 20}, {4, 15}};
    auto v1 = v, v2 = v, v3 = v;

    // --- Using function ---
    sort(v1.begin(), v1.end(), cmpFunction);

    // --- Using functor ---
    sort(v2.begin(), v2.end(), CmpFunctor());

    // --- Using lambda ---
    sort(v3.begin(), v3.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
        return a.second < b.second; // ascending by second
    });
}