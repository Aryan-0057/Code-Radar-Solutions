#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        for (int j=1; j<=num-i; j++){
            printf(' ');
        }
        for (int a=1; a<(2*num-1);a++) printf("*");
    }
    for (int i=1; i<=num; i++){
        for (int j=num-1; j>=1; j--){
            printf(' ');
        }
        for (int a=1; a<(2*num-1);a++) printf("*");
    }
    return 0;
}