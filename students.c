#include <stdio.h>
#include <string.h>

struct students
{
    char name[100];
    int roll_no;
    int mobile_no;
    char email_address[100];
};
int main()
{
    struct students student[5];
    int i;

    for(i=0;i<5;i++)
    {

    printf("Enter name=");
    fgets(student[i].name,sizeof(student[i].name),stdin);

    printf("Enter RollNo=");
    scanf("%d",&student[i].roll_no);

    printf("Enter Mobile Number=");
    scanf("%d",&student[i].mobile_no);

    printf("Enter Email Address=");
    scanf("%s",&student[i].email_address);

    getchar();
    }

    for(i=0;i<5;i++)
    {
        printf("\nName=%s\n",student[i].name);
        printf("Roll No=%d\n",student[i].roll_no);
        printf("Mobile Number=%d\n",student[i].mobile_no);
        printf("Email Address=%s\n",student[i].email_address);

    }

    return 0;

}
