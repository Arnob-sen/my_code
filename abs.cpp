#include <iostream>
#include <time.h>

using namespace std;
bool checkPrime(int n);

int main()
{
    while (true)
    {
        register int number;
        cin >> number;
        register int counter = 0;
        register int numbers = 0;
        time_t start = clock();
        while (counter < number)
        {
            numbers++;
            if (checkPrime(numbers))counter++;
        }
        double time_diff = (clock() - start);
        cout << numbers << endl;
        cout << "Time needed to process in ms: " << time_diff << endl;
    }
}


bool checkPrime(int n) {
    if (n <= 1) return false;
    for (register int i = 2; i < n; i++) {
        if (n%i == 0)return false;
    }
    return true;
}
