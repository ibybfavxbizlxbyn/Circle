#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

const double PI = 3.1415;

#include <iostream>
#include <cmath>

using namespace std;

class Circle
{
private:
    int x;
    int y;
    double R;
public:
    Circle (const int x = 0, const int y = 0, const double R = 1)
    {
        this->R = R;
        this->x = x;
        this->y = y;
    }
    ~Circle ()
    {
        cout << "Circle say`s googbue..." << endl;
    }

    void setR (const double R)
    {
        this->R = R;
    }
    double getR () const
    {
        return this->R;
    }

    double P () const
    {
        return 2*this->R*PI;
    }
    double S () const
    {
        return this->R*this->R*PI;
    }

    bool is_in_circle (const int x, const int y) const
    {
        if (sqrt(pow(x-this->x, 2) + pow(y-this->y, 2)) <= this->R)
        {
            return true;
        } else
            return false;
    }

};

#endif // CIRCLE_H_INCLUDED
