#include<stdio.h>
    struct student{
        int rollno;
        char name[50];
        float marks;
    };
    int main() {
        struct student s={1,"Shubham",91};
         struct student s1={2,"Timir",87};
          struct student s2={3,"Amarjeet",87};
          printf("\nStudent information s");
          printf("\n %d %s %f" ,s.rollno,s.name,s.marks);
          printf("\nStudent information s1");
           printf("\n %d %s %f" ,s1.rollno,s1.name,s1.marks);
           printf("\nStudent information s2");
            printf("\n %d %s %f" ,s2.rollno,s2.name,s2.marks);
        return 0;
    }
