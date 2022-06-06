#include<stdio.h>
#include<string.h>

void makeStrCopy(char in[], char out[]){

    out =strcpy(out,in);
    return out;

}

int main (){

    char in[]="Hello";
    char out[sizeof(in)/sizeof(in[0])];
    makeStrCopy(in,out);
    printf("%s",out);
}