// Your code here...
#include <stdio.h>
int main(){
    int n1,n2;
    char op;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%c",&op);
    switch (op){
        case '+': printf("%d",n1+n2); break;
        case '-': printf("%d",n1-n2); break;
        case '/': printf("%d",n1/n2); break;
        case '*': printf("%d",n1*n2); break;
        default: printf("Invalid");
    }
    return 0;
}