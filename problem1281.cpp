#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int product = 1;
    int sum = 0;
    int last_digit;
    int next_number = n;
    do{
        last_digit = next_number % 10; 
        next_number /= 10;
        product *= last_digit;
        sum += last_digit;
    }while(next_number != 0);

    cout << product - sum << endl;
    return 0;
    
    
}