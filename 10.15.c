/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _crt_secure_no_warnings
#include <stdio.h>


int main(){
    
    char str[1000];
    int i;
    scanf("%s %d", str, &i);
    
    printf("%s", str[4]);
    
    return 0;

}

// int main(){
    
//     char str;
//     scanf("%c", &str);
    
//     printf("%d", str);
    
//     return 0;

// }