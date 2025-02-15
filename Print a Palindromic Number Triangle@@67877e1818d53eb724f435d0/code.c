// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        for (int j=i; j<num; j++) printf(" ");
        for (int a=1; a<=i; a++) printf("%d",a);
        if (a!=1){
            for (int a=i; a>=1; a--) printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}