// Your code here...
#include <stdio.h>
int main(){
    int num, n=1;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        for (int j=1; j<=1; j++){
            if (n){
                printf("%d ",n);
                n=0;
            }
            else{
                printf("%d ",n);
                n=1;
            }
        }
        printf("\n");
    }
    return 0;
}