#include<stdio.h>
int main(){
    
    int sum = 0,i = 0,num;
    scanf("%d",&num);
    while( i <= num ){
        sum = sum + i;
        i++;
    }
printf("%d\n",sum);
    
    return 0;
}
