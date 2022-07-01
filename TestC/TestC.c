#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
// 입력
// 첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
// mergesort

int main(){
    int a = 5, b=24;
    char* answer = (char*)malloc(7);
    int day = 0;
    for(int i = 1; i < a; i++)
    {
        if(i==2){
            day += 29;
        } else {
            if(i<=7){
                if(i%2==1){
                    day += 31;
                } else {
                    day += 30;
                }
            } else {
                if(i%2==1){
                    day += 30;
                } else {
                    day += 31;
                }
            }
        }
    }
    day += b;
    day = day % 7;
    if(day == 1){
        answer = "FRI";
    } else if(day == 2){
        answer = "SAT";
    } else if(day == 3){
        answer = "SUN";
    } else if(day == 4){
        answer = "MON";
    } else if(day == 5){
        answer = "TUE";
    } else if(day == 6){
        answer = "WED";
    } else if(day == 0){
        answer = "THU";
    }

    printf("%s", answer);
    return 0;
}