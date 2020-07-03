//Balance bracket program
#include<stdio.h>
#include<string.h>

//poping
int pop(char *arr, int top, int *count)
{   //traversing backward
    if(arr[top]==')')
    {   // printf("\nPoped element is : %c\n", arr[top]);
        top = top - 1;
        (*count)++;
        return top;   
    }
    else
    {
        return top;
    }
}
//pushing
int push(char element, char *arr, int top)
{   //stack full condition
    if (top==strlen(arr))
    {
        printf("Stack is full");
        return top;
    }
    else
    {   //pushing
        top = top + 1;
        arr[top]=element;
        // printf("\nPushed\n");
        return top;   
    }
}

//main
int main()
{
    int top=-1;
    char arr[100];
    //inputting brackets
    printf("\nEnter the brackets : ");
    scanf("%s", &arr);
    
if (strlen(arr)<=100)
{
    for (int i = 0; i < arr[i]!='\0'; i++)
    {   //pushing
        top = push(arr[i], arr, top);
    }
    
    //printing inputted brackets
    // for (int i = 0; i < arr[i]!='\0'; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    
    int c=0;
    int *cnt = &c;
    for (int j = 0; j < arr[j]!='\0'; j++)
    {
        if (top==-1)
        {   //stack empty condition
            printf("Stack is empty");
            return top;
        }
        else
        {   //poping
            top = pop(arr, top, cnt);   
        }
    }

    //final condition checking
    top = top + 1;
    printf("Solution : ");
    if (c==top)
    {
        printf("They are balanced\n");
    }
    else
    {
        printf("They are not balanced\n");
    }
      
}
else
{   //maximium limit condition
    printf("Crossed maximum limit of space provided, please try again !!!\n");
}

    


return 0;
}