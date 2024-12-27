/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N;
    int Calculation = 0;
    
    scanf("%d", &N);
    
    for(int i=N-54; i<N; i++){
        int temp = i;
        Calculation = i;
        for(int j=0; j<7; j++){
            Calculation += temp%10;//각 자릿수 더하기
            temp /= 10;
            if(temp==0){
                break;
            }
        }
        if(N==Calculation){
            printf("%d", i);
            return 0;
        }
    }
    printf("0\n");
    
    return 0;
}