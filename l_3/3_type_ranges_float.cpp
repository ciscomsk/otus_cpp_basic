//
// Created by mike on 12.01.23.
//
#include <iostream>
#include <iomanip>
#include <limits>
//#include <cfloat>
#include <cmath>

using std::cout;
using std::endl;
using std::setw;

int main(int , char *[]) {
    const unsigned int text_width = 18;
    const unsigned int digit_width = 14;

    // float
    cout << endl << setw(text_width) << "float";
    cout << setw(text_width) << "size = " << sizeof(float) << " byte(s)";
    cout << setw(text_width) << "lowest value = ";
    cout << setw(digit_width) << std::numeric_limits<float>::lowest();
    cout << setw(text_width) << "min value = ";
    cout << setw(digit_width) << std::numeric_limits<float>::min();
    cout << setw(text_width) << "max value = ";
    cout << setw(digit_width) << std::numeric_limits<float>::max();
    cout << endl << setw(text_width + 1) << "Epsilon = " << std::numeric_limits<float>::epsilon() << endl;


    // double
    cout << endl << setw(text_width) << "double";
    cout << setw(text_width) << "size = " << sizeof(double) << " byte(s)";
    cout << setw(text_width) << "lowest value = ";
    cout << setw(digit_width) << std::numeric_limits<double>::lowest();
    cout << setw(text_width) << "min value = ";
    cout << setw(digit_width) << std::numeric_limits<double>::min();
    cout << setw(text_width) << "max value = ";
    cout << setw(digit_width) << std::numeric_limits<double>::max();
    cout << endl << setw(text_width + 1) << "Epsilon = " << std::numeric_limits<double>::epsilon() << endl;

    // long double
    cout << endl << setw(text_width) << "long double";
    cout << setw(text_width) << "size = " << sizeof(long double) << " byte(s)";
    cout << setw(text_width - 1) << "lowest value = ";
    cout << setw(digit_width) << std::numeric_limits<long double>::lowest();
    cout << setw(text_width) << "min value = ";
    cout << setw(digit_width) << std::numeric_limits<long double>::min();
    cout << setw(text_width) << "max value = ";
    cout << setw(digit_width) << std::numeric_limits<long double>::max();
    cout << endl << setw(text_width + 1) << "Epsilon = " << std::numeric_limits<long double>::epsilon() << endl;
    cout << endl;

    const double a = 0.2;
    const double b = 1 / std::sqrt(5) / std::sqrt(5);
    cout << std::setprecision(20) << a << endl;
    cout << std::setprecision(20) << b << endl;

    if (a != b) {
        cout << "a != b" << endl;
    }

    const double myEpsilon = 1e-14;
    // fabs == Float ABSolut
    if (std::fabs(a - b) < myEpsilon) {
        cout << "a == b within " << myEpsilon << endl;
    }

    {
        const auto doubleEpsilon = std::numeric_limits<double>::epsilon();
        cout << endl
             << "Epsilon for double: " << endl
             << "\tscientific: " << std::scientific << doubleEpsilon << endl
             << "\tfixed:      " << std::fixed      << doubleEpsilon << endl;
    }

    return 0;
}
