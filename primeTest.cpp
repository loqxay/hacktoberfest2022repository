#include <iostream>
#include <math.h>
using namespace std;

bool testa(int x);

int main()
{
    int x;
    cin >> x;
    cout << testa(x) << endl;
    return 0;
}
bool testa(int x)
{
    if (x % 2 == 0)
        return false;
    int z = int(sqrt(x / 2));
    for (int i = 0; i < z; i++)
    {
        if (x % ((2 * i) + 1) == 0)
            return false;
    }
    return true;
}