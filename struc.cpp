#include<stdio.h>

struct Cricketer{
    char name[50];
    int score[5];
    // int age;
};

void main(){
    struct Cricketer players[5];
    float avg[5];

   int i, j;
   for(i=0; i<5; i++){
    scanf("%s", &players[i].name);
     for(j=0; j<5; j++){
        scanf("%d", &players[i].score[j]);
    }
   }

   // players[0]
   // tamim
   // 50 70 25 35 33

   //players  -> p1  p2  p3  p4  p5
   //average  -> 30  50  25  36  78

  for(i=0; i<5; i++){
    int total = 0;
    for(j=0; j<5; j++){
        total = total + players[i].score[j];
    }
    avg[i] = total / 5;
    printf("\nAverage of %s is : %f \n", players[i].name, avg[i]);
  }

  float max = -1.0;
  int maxIndex = 0;
  for(i=0; i<5; i++){
    if(avg[i] > max){
        max = avg[i];
        maxIndex = i;
    }
  }
}

