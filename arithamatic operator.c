#include <stdio.h>
#include<conio.h>
void main(){
   //Arithmetic operator
    int a,b,c,d,add,sub,mul,div,mol;
    a=4,b=6,c=5,d=10;
    add=(a+b)+d;//addition
    sub=add-c;//subtraction
    mul=sub*add;//multiplication
    div=d/c;//division
    mol=d%c;//modulus
    a++;//increment
    d--;//decrement
    
    
    printf("%d \n%d \n%d \n%d\n%d\n%d\n%d",add,sub,mul,div,mol,a,d);


    getch();
}