#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

/*------------expression validity in bracket terminology---------------*/


//function prototype 
int top = -1;
char stack[MAX];
void push(char);
char pop();
int isEmpty();
int isFull();
int check_balance(char *);
int match_char(char, char);



int main(){
    char expr[MAX];
    int balanced;
    printf("enter the algebraic equation: ");
    gets(expr);

    balanced = check_balance(expr);
    if(balanced == 1)
        printf("Valid expression\n");
    else
        printf("Invalid expression\n");
    return 0;
}


/*--------------function to ckech balance betwen left brackets and right brackets-------------*/
int check_balance(char * s)
{
    int i;
    char temp;
    for(i=0; i<strlen(s); i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            push(s[i]);
        }
        if(s[i] == ']' || s[i] == '}' || s[i] == ')'){
            if(isEmpty()){
                printf("right brackets are more than left brackets.\n");
                return 0;
            }
            else
            {
                temp = pop();
                if(!match_char(temp, s[i])){
                    printf("missmatched brackets!\n");
                    return 0;
                }
            }

        }
    }
    if(isEmpty()){
        printf("Brackets are well balanced.\n");
        return 1;
    }
    else{
        printf("Left brackets are more than right brackets.\n");
        return 0;
    }
}


/*----------------push function for stack---------------*/


void push(char c)
{
    if(isFull()){
        printf("Stack overflow...\n");
        exit(1);
    }
    top++;
    stack[top] = c;
}


/*----------------pop function for stack---------------*/


char pop(){
    char c;
    if (isEmpty())
    {
        printf("Stack underflow...\n");
        exit(1);
    }
    c = stack[top];
    top--;
    return c;    
}


/*----------------isEmpty function for stack---------------*/


int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}


/*----------------isFull function for stack---------------*/


int isFull(){
    if(top == MAX-1)
        return 1;
    else
        return 0;
}


/*----------------match char function for stack---------------*/


int match_char(char a, char b){
    if(a == '[' && b == ']')
        return 1;
    if(a == '{' && b == '}')
        return 1;
    if(a == '(' && b == ')')
        return 1;
    return 0;    
}