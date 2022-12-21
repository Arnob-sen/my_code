#include<bits/stdc++.h>

using namespace std;

int main()

{
        string s;
        cin>>s;

        int len=s.size();
        int a=s[0]-'0';//string r kunu charchter thke '0' minus korla integer pawa jay abr oi integer r sata '0'plus korla charachter pawa jy
        if(s[0]=='9'){
                s[0]='9';

        }
        else if(a>4){
            s[0]=(9-a)+'0';

        }
        for(int i=1;i<len;i++){
                int b=s[i]-'0';
            if(b>4)s[i]=(9-b)+'0';
        }
        cout<<s;



    return 0;
}
/*/
#include <stdio.h>
int main(void) {
	int i=0,size,arr[10000];
	char temp;
	do{
	  	scanf("%d%c", &arr[i], &temp);
	  	i++;
	  	} while(temp!= '\n');

  	size=i;
  	if(arr[0]==9){
  	for(i=1;i<size;i++){
  		//printf("%d ",arr[i]);
  		//if(arr[0]==9)arr[0]=9;
  		 if(arr[i]>=5)arr[i]=9-arr[i];
  	}
  	}
  	else {
        for(int i=0;i<size;i++){
            if(arr[i]>4)arr[i]=9-arr[i];
        }
  	}
  	for(int i=0;i<size;i++)printf("%d",arr[i]);

}

/*/
