
#include<stdio.h>

 int main()
 {
     long long n,d,c=0;
     scanf("%lld",&n);

     while(n>0){

     if(n%10==4 || n%10 ==7){   // jodi if(n%10==4 || n%10==7)
                                    // c++ ditm taholaw cholto.that means if r por tik por j condition thaka (c++) oita second bracket dia na dkailaw hoy .bt jodi if r vitor ek r basi condition thka tkn second bracket dia specific korte hy
        c++;
     }

     n=n/10;




     }
     if(c==4 || c==7){
        printf("YES");
     }
     else{
        printf("NO");
     }




     return 0;
 }









