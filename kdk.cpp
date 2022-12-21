#include <bits/stdc++.h>

using namespace std;
bool checkPrime(int n);

int main()
{
    while (true)
    {
         int n;
        cin >> n;
         int counter = 0;
         int numbers = 0;

        while (counter < n)
        {
            numbers++;
            if (checkPrime(numbers))counter++;
        }

        cout << numbers << endl;
        return 0;

    }
}


bool checkPrime(int n) {
    if (n <= 1) return false;
    for ( int i = 2; i < n; i++) {
        if (n%i == 0)return false;
    }
    return true;
}
