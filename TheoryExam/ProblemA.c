#include<stdio.h>

int  passByValue(int a){
    a= 301;
}

int main (){
    int a;
    a= 392;
    passByValue(a);
    printf("%d\n",a);
}