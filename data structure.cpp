#include<stdio.h>
#include<string.h>
struct Student
{
    int age;
    char first[55];
    char last[55];
    int standard;
};
int main()
{
    struct Student s;
    scanf("%d",&s.age);
    scanf("%s",s.first);
    scanf("%s",s.last);
    scanf("%d",&s.standard);
    printf("%d %s %s %d",s.age,s.first,s.last,s.standard);
    return 0;
}

