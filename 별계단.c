/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _crt_secure_no_warnings
#include <stdio.h>

int main(){
    
    int n, i, j;
    
    scanf("%d",&n);
    
    
    for(i = 0; i < n; i++){
        
        printf("%d\n", i);
    for(j = 0; j < n; j++)
    {
        printf("*%d\n", j);
    }
    
    }
    
    return 0;
}

// int main(){
    
//     int a, b, c, i, sum[3]={0,0,0};
    
//     scanf("%d %d", &a, &b);
    
//     c = b + 1;
    
   
//     for (; a<c; a++)
//     {
        
//     i = a % 2;
    
//     if(i == 0){
//         sum[0]-= a;
//     }
    
//     else if(i == 1){
//         sum[1] += a; 
//     } 
//   sum[2] = sum[0] + sum[1];
//     }

    
//     printf("%d", sum[2]);
    
//     return 0;
    
// }