#include <iostream>
using namespace std;

class Sample {
            int a, b;
public:
        void setData(int a, int b) {
        // Using this pointer to differentiate between class members and parameters
        this->a = a;
        this->b = b;
    }

    void display() {
        cout << "Value of a: " << this->a << endl;
        cout << "Value of b: " << this->b << endl;
    }
};

int main() {
    Sample obj;

    obj.setData(10, 20);  // Call function using object
    obj.display();        // Display values

    return 0;
}
