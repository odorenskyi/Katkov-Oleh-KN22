#include <iostream>
#include <sstream>
#include <cmath>
#include <string>

using namespace std;

void copyright() {

    cout << "============================================" << endl;

    cout << "  Was written by Katkov Oleg in ©2023 " << endl;

    cout << "============================================" << endl;;
}

void equation() {

    double a;

    double b;

    cout << "Input the first symbol(a): ";

    cin >> a;

    cout << "Input the second symbol(b): ";

    cin >> b;

    if (a <= b - 32) {

        cout << "The result is 1\n";
    }
    else {

        cout << "The result is 0\n";
    }
}

void getNumbers(float& x, float& y, float& z) {

    cout << "Enter the first number(x): ";

    cin >> x;

    cout << "Enter the second number(y): ";

    cin >> y;

    cout << "Enter the third number(z): ";

    cin >> z;


}

float s_calculation(float x, float y, float z) {

    float s = pow(x, 2) - pow(y, 3) + cbrt((abs(pow(z, 2) * pow(2.718, x))) / ((12 * x) + (pow(y, 2) - (3.14 * cbrt(z)))));

    cout << "The sum of the three numbers is " << s << endl;

    return s;
}

string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    string hexadecimal(ss.str());
    return hexadecimal;
}


void toHex(float x, float y, float z, float s) {

    string nHex = decimalToHexadecimal(x);
    string yHex = decimalToHexadecimal(y);
    string zHex = decimalToHexadecimal(z);
    string sHex = decimalToHexadecimal(s);

    cout << "n in hexadecimal: " << nHex << endl;
    cout << "y in hexadecimal: " << yHex << endl;
    cout << "z in hexadecimal: " << zHex << endl;
    cout << "s in hexadecimal: " << sHex << endl;
}