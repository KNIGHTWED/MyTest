#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    char *s1 = "0123456789";
    char *s2 = "a234";
    bool answer = true;

    for (int i = 0; i < strlen(s2); i++)
    {
        printf("%d ", *(s2+i));
    }
    
    return 0;
}