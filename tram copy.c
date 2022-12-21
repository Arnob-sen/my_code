
#include<stdio.h>

int main(){

    int person_present=0,capacity=0, n, person_enter,person_exit,  i;

    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%d %d",&person_exit,&person_enter);

        person_present=person_enter-person_exit;

        person_present=person_present+person_enter;

        if(person_present>capacity){
            capacity=person_present;  //prothom br to person present capacity thke boro hbei and oita capacity ta store hbe.er por abr loop gurbe .jodi ar person present capacity r boro hy tkn abr oi man ta capacity ta store hbe and print korbe capacity(loop r vitor sob cheye boro number print r upay)


        }
    }

    printf("%d",capacity);






    return 0;
}

