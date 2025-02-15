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
    for (int i=num-1; i>=1; i--){
        for (int j=num; j>=i; j--){
            printf(' ');
        }
        for (int a=1; a<(2*num-1);a++) printf("*");
    }
    return 0;
}