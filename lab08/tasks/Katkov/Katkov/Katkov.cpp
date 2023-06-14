#include "Katkov_lib.h"

int main()
{
    float x, y, z, s;

    copyright();

    equation();

    getNumbers(x, y, z);

    s = s_calculation(x, y, z);

    toHex(x, y, z, s);

}
