#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n,c=0;
    long long sum=0,one=0,two=0,three=0,four=0;


    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){

        cin>>ara[i];
        if(ara[i]==1)one++;
        else if(ara[i]==2)two++;
        else if(ara[i]==3)three++;
        else four++;
    }
        sum=four+(two/2);
        two=two%2;
        sum+=three;
        one-=three;
        if(two==1){
            sum+=1;
            one-=2;
        }
        if(one>0)sum+=((one+3)/4);

        cout<<sum<<endl;
    }

   /*/  for(int i=0;i<n;i++){


     }
     /*/
   // sort(ara,ara+n,greater<int>());
    //
   // for(int i=0;i<n;i++)cout<<ara[i]<<" ";


   /*/ for(int i=0;i<n;i++){
            for(int j=n ;j>=0;j--){
        sum=ara[i]+ara[j]+sum;
        cout<<sum<<endl;



        if(sum==4){

                c++;
                sum=0;
        }
        else if(sum>4){
            c++;
            j++;
            sum=0;
        }
        else if(i>=j)break;

    }

    }
    cout<<c<<endl;
    sum=0,c=0;
/*/
/*/

    return 0;

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a=0,b=0,c=0,d=0;
int arr[n];int sum=0;
for(int i=0;i<n;i++)
{cin>>arr[i];
if(arr[i]==1){a++;}
if(arr[i]==2){b++;}
if(arr[i]==3){c++;}
if(arr[i]==4){d++;}}
sum=d+(b/2);b%=2;
	sum+=c;a-=c;
	if(b==1){sum+=1;a-=2;}
	if(a>0){
	sum+=((a+3)/4);
	}

cout<<sum;

return 0;
}
/*/
