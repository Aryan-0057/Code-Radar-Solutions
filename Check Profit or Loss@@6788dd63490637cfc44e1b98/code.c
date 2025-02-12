// Your code here...
#include <stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if (n1>n2){
        printf("Profit");
    }
    else if (n1 == n2){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}