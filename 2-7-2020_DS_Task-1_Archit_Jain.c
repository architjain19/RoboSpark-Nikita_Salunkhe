#include<stdio.h>

struct student_data
{
    int id;
    char name[25];
    int year;
    float cgpa;
} student1, student2;

int main()
{
    //first student details...
    printf("\nEnter first student details --- ");

    printf("\nEnter first students id : ");
    scanf("%d", &student1.id);
    printf("Enter first students name : ");
    scanf("%s", &student1.name);
    printf("Enter first students year : ");
    scanf("%d", &student1.year);
    printf("Enter first students cgpa : ");
    scanf("%f", &student1.cgpa);

    //ssecond student details...
    printf("\nEnter second student details --- ");

    printf("\nEnter second students id : ");
    scanf("%d", &student2.id);
    printf("Enter second students name : ");
    scanf("%s", &student2.name);
    printf("Enter second students year : ");
    scanf("%d", &student2.year);
    printf("Enter second students cgpa : ");
    scanf("%f", &student2.cgpa);

    printf("\nStudent 1 details ---\nStudent 1 - id is : %d", student1.id);
    printf("\nStudent 1 - name is : %s", student1.name);
    printf("\nStudent 1 - year is : %d", student1.year);
    printf("\nStudent 1 - cgpa is : %.2f", student1.cgpa);

    printf("\n\nStudent 2 details ---\nStudent 2 - id is : %d", student2.id);
    printf("\nStudent 2 - name is : %s", student2.name);
    printf("\nStudent 2 - year is : %d", student2.year);
    printf("\nStudent 2 - cgpa is : %.2f", student2.cgpa);

    return 0;
}