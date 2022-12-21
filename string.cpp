#include<bits/stdc++.h>

using namespace std;


int main()

{
    char str[1000],str2[1000];
    int c=0;

    puts(str);
    strcpy(str2,str);
    cout<<str2<<endl;
    int d=strlen(str);


    for(int i=0, j=d-1;i<d,j>=0;i++,j--){
        if(str[i]!=str[j])c=1;
    }



    return 0;
}
