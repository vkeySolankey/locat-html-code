#include<stdio.h>
#include<string.h>
int main() {
    char sen[100];
 puts("enter a sentence "); 
 while(strlen(gets(sen))>0) {
       puts(sen);
 }
 return 0;
}