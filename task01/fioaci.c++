#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, son ;

    cout << "eded daxil edin: ";
    cin >> n;

    cout << "Fibonacci seriyasi: ";

    while (t1 <= n) {
        cout << t1 << ", ";
        son = t1 + t2;
        t1 = t2;
        t2 = son;
    }

    return 0;
}