// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num%5 == 0 && num%3 == 0){
        printf("Both");
    }
    else if (num%5 == 0){
        printf("Divisible by 5");
    }
    else if (num%3 == 0){
        printf("Divisible by 3");
    }
    else {prtinf("Not Divisible");}
    return 0;
}