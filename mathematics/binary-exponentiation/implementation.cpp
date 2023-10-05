#include <bits/stdc++.h>
using namespace std;

int binary_exponentiation(int element, int power)
{
    if (power == 0)
    {
        return 1;
    }

    int result = binary_exponentiation(element, power / 2);

    if (power & 1)
    {
        return result * result * element;
    }

    return result * result;
}

int main()
{
    int element = 0, power = 0;
    cin >> element >> power;

    int nth_power = binary_exponentiation(element, power);
    cout << nth_power << endl;

    return 0;
}
