#include<stdio.h>

int main()

{
    int t;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int n;
        scanf("%d",&n);

        int ara[n],ara2[n],ara3[n];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);

        }
        for(int i=0;i<n;i++){
            scanf("%d",&ara2[i]);


        }

        ara3[0]=ara2[0]-ara[0];
        for(int i=1;i<n;i++){
            if(ara[i]>ara2[i-1])ara3[i]=ara2[i]-ara[i];
            else ara3[i]=ara2[i]-ara2[i-1];
        }

        for(int i=0;i<n;i++)
        printf("%d ",ara3[i]);

        printf("\n");
    }




    return 0;

}

83
246 535 994 33 390 927 321 97 223 922 812 705 79 80 977 457 476 636 511 137 6 360 815 319 717 674 368 551 714 628 278 713 761 553 184 414 623 753 428 214 581 115 439 61 677 216 772 592 187 603 658 310 439 559 870 376 109 321 189 337 277 26 70 734 796 907 979 693 570 227 345 650 737 633 701 914 134 403 972 940 371 6 642
