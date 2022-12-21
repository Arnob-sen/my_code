#include<stdio.h>
#include<string.h>

int main()

{
    char str[10000];
    int c=0;


    scanf("%s",&str);

    int d = strlen(str);

    for(int i=0;i<d;i++){

    //    if(str[0]>='A'&& str[0]<='Z'&& str[i+1]>='a'&&str[i+1]<='z')
    //        {
  //         puts (str);
  //          break;
  //      }
      //  else if(str[0]>='a'&& str[0]<='z'&&str[i+1]>='a'&& str[i+1]<='z'){
//
  //           puts (str);

    //    }

            if(str[i]>='A'&&str[i]<='Z'){

                            c++;
              //      str[i+1]+=32;
            //strlwr(str);

         //   str[0]-=32;
               // puts(str);
               // break;

            }
       else if(str[0]>='a'&& str[0]<='z'&&str[i+1]>='A' && str[i+1]<='Z')
                {
                    c++;
                   // strlwr(str);
                   // str[0]-=32;
                   // puts(str);
                    //break;



       }
        //printf("%s",str);
            //else{
              //  puts(str);
                //break;
            //}
    }
    if(c==d){
        strlwr(str);
        str[0]-=32;
        puts(str);
    }
    else{
        puts(str);
    }



    return 0;
}
