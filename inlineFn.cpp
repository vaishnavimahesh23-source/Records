#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum: " << add(10, 20) << endl;
    return 0;
}

