#include<stdio.h>
void printfhello(); //function decleration
void printfgoodbye();

int main()
{
    printfhello(); // function cell
    printfgoodbye();
    return 0;
}

void printfhello() // function defination
{
    printf("HELLO\n");
    
}
void printfgoodbye()
{
    printf("GOODBYE:)\n");
}