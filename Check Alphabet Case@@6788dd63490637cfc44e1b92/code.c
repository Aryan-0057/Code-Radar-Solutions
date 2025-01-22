#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    int num = a;
    if (num>=65 && num<=90){
        printf("Uppercase");
    }
    else if (num>=97 && num<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}