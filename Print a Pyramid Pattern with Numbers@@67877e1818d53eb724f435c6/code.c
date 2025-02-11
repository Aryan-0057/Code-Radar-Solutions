// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        int n=1;
        for (int j=num; j>0; j--){
            if (j>i){
                printf(" ");
            }
            else{
                printf("%d ",n);
                n++;
            }
        }
        printf("\n");
    }
    return 0;
}