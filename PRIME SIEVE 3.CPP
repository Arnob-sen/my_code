#include<bits/stdc++.h>
using namespace std;
const int mx=1000;
vector < int > prime;
bool ar[mx];
int main()
{
    ar[1]=true;
    for(int i=4;i<=mx;i+=2){
        ar[i]=true;
    }
    for(int i=3;i*i<=mx;i+=2){
        if(ar[i]==false){
            for(int j=i*i;j<=mx;j+=i){ // odd r joto gule even multiply ase ogula bad dewa
                ar[j]=true;
            }
        }
    }
    prime.push_back(2);

    for(int i=3;i<mx;i+=2){
        if(ar[i]==false)prime.push_back(i);
        cout<<i<<" ";
    }


    return 0;

}
/*/
#include<bits/stdc++.h>
using namespace std;
const int MX =100;
vector < int > prime;

bool ar[MX]; /// false
int main()
{
    ar[1]=true;
    for(int i = 4; i <= MX; i+=2){

        ar[i]=true;
    }
    for (int i = 3; i*i <= MX; i+=2)  {
        if (ar[i] == false) {
            for (int j = i * i; j <= MX; j += i ) {
                ar[j] = true;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<MX;i+=2){
        if(ar[i]==false) prime.push_back(i);
    cout<<i<<" ";
    }
}

/*/
