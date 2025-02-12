#include <stdio.h>
int main(){
    int n1,n2;
    scnaf("%d %d",&n1,&n2);
    if (n1>=n2){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}