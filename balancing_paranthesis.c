//c program to perform balancing parenthesis 
//bhavishya.c 20csr029
#include<stdio.h>
#include<string.h>
int main()
{
    char exp[20];
    printf("Enter the Expression :");
    scanf("%[^\n]%*c",exp);
    char stk[10];
    int top =-1;
    int len = strlen(exp);
    
    for(int i=0;i<len;i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i]=='[')
        {
            stk[++top]=exp[i];
    
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i]==']')
        {
            if(exp[i] ==')' && stk[top]=='(')
            {
              
                top--;
            }
            else if(exp[i] =='}' && stk[top]=='{')
            {
                
                top--;
            }
            else if(exp[i] ==']' && stk[top]=='[')
            {
        
                top--;
            }
        }
        
    }

    if(top==-1)
        printf("Expression is Valid !");
    else
        printf("Expression is not Valid ");
}

/*
output :
Enter the Expression :(a+b)
Expression is Valid !

...Program finished with exit code 0
Press ENTER to exit console.*/



