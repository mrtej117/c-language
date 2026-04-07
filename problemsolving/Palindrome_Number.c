#include<stdio.h>
int main(){
    
    int rev = 0,num,rem,org;
    scanf("%d",&num);
    org = num;
    while(num > 0){
        rem = num % 10;
        rev  = rev * 10 + rem;
        num = num / 10;
    }
    // printf("%d\n",rev);
    
    
    
    if (rev == org)
        printf("this is palindrom\n");
    else
     printf("this is not  palindrom\n");
    return 0;
}
