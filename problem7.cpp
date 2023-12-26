// Reverse Integer
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Enter any 32 bit signed integer" << endl;
    int n;
    cin >> n;
    int withoutReverse = n;
    int ans = 0;
    int digit;
    do
    {
        digit = n % 10;
        n = n / 10;
        if (ans > INT32_MAX || ans < INT32_MIN)
        {
            cout << 0 << endl;
            goto end;
        }
        ans = (ans * 10) + digit;
    } while (n != 0);

    cout << ans;
    end:
}