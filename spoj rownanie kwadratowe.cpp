//SPOJ submission 23072980 (CPP)plaintext list.Status: AC, problem ROWNANIE, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 16 19 : 09 : 53.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a, b, c, z;
    while (cin >> a >> b >> c)
    {
        z = b * b - 4 * a * c;

        if (z > 0) cout << 2 << endl;
        if (z == 0) cout << 1 << endl;
        if (z < 0) cout << 0 << endl;

    }

    return 0;
}
