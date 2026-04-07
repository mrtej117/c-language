
#include<stdio.h>
int main(){
    int i = 1,num;
    int fact = 1;
    printf("enter a number");
    scanf("%d",&num);
    while(i <= num){
         fact =fact * i;
        i++;
    }
        printf("%d",fact);
    return 0;
}
