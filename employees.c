#include <stdio.h>
#include <string.h>

struct employee
{
    char name[100];
    int age;
    int mobile_number;
    char email_id[200];
    char blood_group[5];
};

int main()
{
    struct employee emp1,emp2;

    printf("Enter name=");
    scanf("%s",&emp1.name);

    printf("Enter age=");
    scanf("%d",&emp1.age);

    printf("Enter mobile number=");
    scanf("%d",&emp1.mobile_number);

    printf("Enter email address=");
    scanf("%s",&emp1.email_id);

    printf("Blood Group=");
    scanf("%s",&emp2.blood_group);


    printf("Enter name=");
    scanf("%s",&emp2.name);

    printf("Enter age");
    scanf("%d",&emp2.age);

    printf("Enter mobile number=");
    scanf("%d",&emp2.mobile_number);

    printf("Enter email address=");
    scanf("%s",&emp2.email_id);

    printf("Blood Group=");
    scanf("%s",&emp2.blood_group);



    printf("All details of Employee 1=");

    printf("Name=%s\n",emp1.name);
    printf("Age=%d\n",emp1.age);
    printf("Mobile Number=%d\n",emp1.mobile_number);
    printf("Email Address=%s\n",emp1.email_id);
    printf("Blood Group=%s\n",emp1.blood_group);


    printf("All details of Employee 2=");

    printf("Name=%s\n",emp2.name);
    printf("Age=%d\n",emp2.age);
    printf("Mobile Number=%d\n",emp2.mobile_number);
    printf("Email Address=%s\n",emp2.email_id);
    printf("Blood Group=%s\n",emp2.blood_group);



    return 0;

}
