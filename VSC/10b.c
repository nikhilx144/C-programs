#include <stdio.h>
#include <string.h>
union student 
{
    char name[20];
    char subject[20];
    float percentage;
};
int main() 
{
    union student record1;
    printf("Union record1 values example\n");
    strcpy(record1.name, "Mani");
    printf("Name: %s \n", record1.name);
    strcpy(record1.subject, "Physics");
    printf("Subject: %s \n", record1.subject);
    record1.percentage = 99.50;
    printf("Percentage: %f \n", record1.percentage);
}