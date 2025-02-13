// Your code here...
#include <stdio.h>
int main(){
    int n1,n2;
    char op;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%c",&op);
    if (op == '+') printf("%d",(n1+n2));
    else if (op == '-') printf("%d",(n1-n2));
    else if (op == '*') printf("%d",(n1*n2));
    else if (op == '/') printf("%d",(n1/n2)); break;
    else printf("Invalid");
    }
    return 0;
}