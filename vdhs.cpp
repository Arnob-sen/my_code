#include<bits/stdc++.h>
using namespace std;
int main()

{
    int input,n=500000;
    cin>>input;
	for(int i=2; i*i <= n; i++){
		if(i%n == 0)
			return false;
	}
	return true;
	int counter = 0;

	if(input == 0)
		return 2;


	for(int i=3; i < 500000; i = i+2)
	{
		if(isPrime(i)){
			counter++;
			if(counter == input)
				return i;
		}
	}
}

// 720

/*/NthPrime(input){
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

int main(){
    int n=
}
/*/
