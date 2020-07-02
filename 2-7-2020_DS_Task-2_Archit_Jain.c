#include<stdio.h>

int pop(char *arr, int top, int *count)
{
    if(arr[top]==')')
    {
        // printf("\nPoped element is : %c\n", arr[top]);
        top = top - 1;
        (*count)++;
        return top;
        
    }
    else
    {
        return top;
    }
    
    
    
}



int main()
{
    int top=3;
    

    char arr[4];
    printf("\nEnter any four brackets : ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &arr[i]);
    }
    
printf("\nWe inputted brackets pattern as : %c%c%c%c\n", arr[0], arr[1], arr[2], arr[3]);

int c=0;
int *cnt = &c;

for (int j = 0; j < 4; j++)
{
 top = pop(arr, top, cnt);   
}

//  printf("\nValue of top is : %d", top);
//  printf("\nValue of count(c) is : %d", c);

top = top + 1;
printf("\nSolution : ");
if (c==top)
{
    printf("They are balanced\n");
}
else
{
    printf("They are not balanced\n");
}

return 0;
}