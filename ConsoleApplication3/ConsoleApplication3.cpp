#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }

    void setX(double xVal) {
        x = xVal;
    }

    void setY(double yVal) {
        y = yVal;
    }

    void setZ(double zVal) {
        z = zVal;
    }

    void print() const {
        cout << "Точка (" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Point p(1.0, 2.0, 3.0);

    p.print();

    p.setX(4.0);
    p.setY(5.0);
    p.setZ(6.0);

    p.print();

    cout << "Координата X: " << p.getX() << endl;
    cout << "Координата Y: " << p.getY() << endl;
    cout << "Координата Z: " << p.getZ() << endl;

    return 0;
}
