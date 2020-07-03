#include<stdio.h>
#include<stdlib.h>

//queue structure forming
typedef struct queue
{
    int arr[100];
    int front, rear;
}queue;
//initializing queue
void init(queue* q){
    q->front=0;
    q->rear=0;
}
//enquering the queue
void enqueue(queue* q, int rollno){
    q->arr[q->rear++]=rollno;
    printf("\nStudent having roll no : %d is enqueued ", rollno);
    // printf("\nRear : %d", q->rear);    
}
//is full function
int isFull(queue* q){
    if (q->front > q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//student info structure forming
struct student_data
{   
    char name[25];
    int roll;
} student[100];


int main()
{
int n;
//inputting no. of students
printf("\nEnter no of students : ");
scanf("%d", &n);

//inputting student details
for (int i = 0; i < n; i++)
{
    printf("\nEnter student %d details --- ", i+1);
    printf("\nEnter student %d name : ", i+1);
    scanf("%s", &student[i].name);
    printf("Enter student %d roll : ", i+1);
    scanf("%d", &student[i].roll);
}
    //queue memory allocation
    queue *q1=(queue *)malloc(sizeof(queue));

    //initializing queue
    init(q1);
    //condition to enquere
    for (int k = 0; k < n; k++)
    {   //even roll no condition
        if (student[k].roll%2==0)
        {   //is queue full?
            if (isFull(q1))
            {
                printf("\nQueue is full");
            }
            else
            {   //enquering even roll nos
                enqueue(q1, student[k].roll);    
            }
            
        }       
    }
 
    return 0;
}