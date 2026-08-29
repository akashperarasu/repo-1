#include <stdio.h>
#include <stdbool.h>
void main(){
    int a=23;
    char b='c';
    double c=24.45;
    float d=27.25;
    bool e=true;

    printf("the size of int is:%d \n",sizeof(a));
    printf("the size of char is:%d \n",sizeof(b));
    printf("the size of double is:%d \n",sizeof(c));
    printf("the size of float is:%d \n",sizeof(d));
    printf("the size of bool is:%d \n",sizeof(e));
    printf("");
}