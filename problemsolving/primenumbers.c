// prime numbers
#include <stdio.h>

int main() {
    int i,n,count = 0;
    printf("enter the number ");
    scanf("%d",&n);
    for(i =1;i<=n;i++){
        if(n % i == 0 ){
        count++;
        }
    }
    if(count == 2)
    printf("it is a prime number ");
    else
    printf("it's not a prime number ");
    
    
    
    return 0;
}



////////////////////////////// using the while/////////////////




#include <stdio.h>

int main() {
    int i = 2,n;
    printf("enter the number ");
    scanf("%d",&n);
    while (i < n ){
        if(n % i == 0){
            break;
            
        }
        i++;
    }
    if(i == n)
    printf("it is a prime number ");
    else
    printf("it's not a prime number ");
    
    
    
    return 0;
}











