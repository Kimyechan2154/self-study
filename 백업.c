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

int func1(){
    
    //종결 컨디션
    printf("hello");
    func1();
    
    return 1;
    
    
    
    
    
}


//char* myStrcat(char* str1, char* str2){
    int horse=0;
    while(*(str1+horse) != '\0'){
        horse++;
    }
    
    int horse2 = 0;
    while(*(str2+horse2) != '\0'){
        
        *(str1+horse+horse2) = *(str2+horse2);
        horse2++;
        
    }
    
    *(str1+horse+horse2) = '\0';
    
    return str1;
}

//int myStrcmp(char* str1, char* str2){
    
    while(*str1 == *str2){
        
        if(*str1 == '\0' || *str2 == '\0')
{
    break;
}
    str1++;
        str2++;
    }
    if(*str1 == '\0' && *str2 == '\0'){
        return 0;
    }
    else{
        return -1;
    }
    
}

// char* myStrcat(char* str1, char* str2){
//     strcpy(str1 + strlen(str1),str2) ;
//     return str1;
// }


//int main(){
    
    char arr[100] = "welcome";
    char arr2[100] = "welcom";
    
    if(myStrcmp(arr, arr2) == 0){
        printf("same string");
    }
    
    else{
        printf("diffrent");
    }
     
    return 0;
}


// int myStrlen(char* arr){
    
//     int counter=0;
//     char* cp = arr;
    
//     while(*cp != '\0'){
//         counter++;
//         cp++;
//     }
    
//     return counter;
// }



// int main(){
    
//     char arr[100] = "ethaezthgazrfgarfgaZrfgazrgrffchani";
    
//     printf("original : %ld", strlen(arr));
    
//     printf("\nour : %d", myStrlen(arr));
    
     
//     return 0;
// }

// int main(){
    
//     char ch[100] = "chani";
    
//     printf("\n %d \n", ch);
//     printf("\n %d \n", &ch[0]);
//     printf("\n %d \n", *&ch);
    
//     *arr == a[0];
//     *(arr+1) == a[1];
//     arr = &arr[0] = *&arr
    
//     return 0;
// }

// int main(){
    
//  int n;
//  scanf("%d", &n);
 
 
//  for(int j = 0; j<n.size(); j++){
//  scanf("%d", &a[j]);

//  }
 
//  printf("%d", a[3]);
//     return 0;

// }

// int main(){
    
//     char str[1001];
//     int i;
//     scanf("%s", str);
//     scanf("%d", &i);
    
//     printf("%c", str[i-1]);
    
//     return 0;

// }

// int main(){
    
//     char str;
//     scanf("%c", &str);
    
//     printf("%d", str);
    
//     return 0;

// }