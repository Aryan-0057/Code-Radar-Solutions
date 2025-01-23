#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i==1 || i==n){
            for (int j=0; j<n;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for (int a=0;a<n-2;a++){
                printf(" ");
            }
            printf("*");
        }
    }
    return 0;
}