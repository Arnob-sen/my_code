#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
}

 isPrime(int n){
	for(int i=2; i*i <= n; i++){
		if(i%n == 0)
			return false;
	}
	return true;
}

// 720
//1,2,3,4,5,6,7,8,9,....    12,   ....  36
 void NthPrime(input){
	int counter = 0;

	if(input == 0)
		return 2;


	for(int i=3; i < INT_SIZE; i = i+2)
	{
		if(isPrime(i)){
			counter++;
			if(counter == input)
				return i;
		}
	}
}


/*/ input: 7
2 3 5 7 11 13 17
17 -> 3,5,...,7,...,9,....11...13....
for i->3 to 17 			3,4,5,6,7,8,9,...17
	3 -> counter++ = 1
	5 -> counter++ = 2
	7 -> counter++ = 3
	11 -> counter++ = 4
	13 -> counter++ = 5
	17 -> counter++ = 6
	return 19
/*/
