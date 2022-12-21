#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> myMap;

    myMap["one"] = 1;
    myMap["two"] = 2;
    myMap["three"] = 3;

    for (  auto myPair : myMap ) {
        cout << myPair.first << "\n";
    }
}

