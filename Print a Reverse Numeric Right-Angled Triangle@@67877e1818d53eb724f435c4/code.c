#include <stdio.h>

int main() {
    int num;
    int n=0;
    scanf("%d",&num);
    for (int i=num; i>=1; i--){
        for (int j=1; j<=num-n; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}