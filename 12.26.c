/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int alphabet[26];
    for (int i=0; i<26; i++){ //-1로 초기화
        alphabet[i] = -1;
    }
    char S[100];
    scanf("%s", S);
    
    for(int j=0; S[j] != '\0'; j++){ // 받은 quiz 문자열을 나눔
    int c = S[j] - '0'; //S문자열을 c라는 아스키코그로 바꿈
    c = c - 49;
    if(alphabet[c] == -1){ //처음 등장하는 위치에만 영향 
        alphabet[c] = j;
        
    }
    
    }
    for (int i=0; i<26; i++){
        printf("%d ", alphabet[i]);
    }
    return 0;
}