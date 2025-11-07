#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    // Overload the + operator
    Point operator+(const Point& p) {
        return Point(x + p.x, y + p.y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3), p2(4, 5);
    Point p3 = p1 + p2;  // uses overloaded +
    p3.display();        // Output: (6, 8)
    return 0;
}

