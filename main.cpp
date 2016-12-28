#include "Circle.h"

int main()
{
    cout << "Enter Radius: ";
    double R;
    cin >> R;

    Circle c1 = Circle(0, 0, R);

    cout << "P = " << c1.P() << endl << "S = " << c1.S() << endl;

    cout << c1.is_in_circle(0,0) << endl;
    return 0;
}
