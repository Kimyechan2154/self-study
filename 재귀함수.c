/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#define _crt_secure_no_warnings
#include <stdio.h>
#include <string.h>

int fact(int n){
    
    //1. 종결 컨디션
    if(n==0) return 1;
    
    //2.셀프 호출
    return n * fact(n-1);
    
}






int loop_fact(int n){
    
    //종결 컨디션
    int i; 
    int fact = 1;
    for(i=n; i!=0; i--){
        printf("%d * %d\n", i, fact);
        fact = i * fact;
    }
    
    return fact;
    
}
int main(){
    
    printf("fact = %d", fact(5));
    return 0;
    
}

