// Your code here...
#include <stdio.h>
int main(){
    int num, n=1;
    scanf("%d",&num);
    for (int i=0; i<num; i++){
        for (int j=0; j<=i; j++){
            printf("%d",n++);
        }
        printf("\n");
    }
    return 0;
}