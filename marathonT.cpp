#include<bits/stdc++.h>

int main()

{
    int n,k,c=0,d=0;

    scanf("%d%d",&n,&k);


    int a=240-k;

    for(int i=1;i<=n;i++){
        int b=i*5;
        c+=b;
    }
    if(c<=a){

            cout<<n<<endl;
    }

    else{
            int m=-1;
        for(int d=0,i=1;d<=a;i++){
            d+=i*5;

            m++;
        }
        cout<<m<<endl;

    }




    return 0;
}
