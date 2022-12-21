#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char arr[8][8];
        for(int p=0;p<8;p++){
            for(int q=0;q<8;q++){
                    scanf(" %c",&arr[p][q]);
            }
        }
        int k,m;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(arr[i][j] =='#' && arr[i-1][j-1] == '#' && arr[i-1][j+1] == '#' ){
                    k = i;
                    m = j;
                }
            }
        }
        printf("%d %d\n",k+1,m+1);
        }
}
