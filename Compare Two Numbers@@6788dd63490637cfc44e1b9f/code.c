// Your code here...
#include <stdio.h>
int main(){
    int n1,n2;
    scnaf("%d %d",&n1,&n2);
    if (n1 > n2){
        printf("First");
    }
    else if (n2 > n1){
        printf("Second");
    }
    else{
        printf("Equal");
    }
    return 0;
}