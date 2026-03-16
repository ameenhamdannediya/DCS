#include <stdio.h>
struct student{
    char name[15];
    int age ;
    int rollno;
    float mark;

    };
int main()
{
    int i , n;
    struct student s[100];

    printf("enter thr number of students :" );
    scanf("%d", &n);
    for(i = 0 ; i < n; i++){
        printf("\nstudent %d \n enter name , age , rollno  and mark \n", i+1);
        scanf("%s  %d  %d  %f", &s[i].name , &s[i].age, &s[i].rollno ,&s[i].mark);
    }
    for(i = 0 ; i < n; i++){
        printf("\n name = %s\n age = %d \n rollno = %d \n mark = %f \n", s[i].name , s[i].age, s[i].rollno ,s[i].mark);

    }


    return 0;
}

