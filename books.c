#include <stdio.h>
#include <string.h>
struct books
{
    char title[100];
    char author[100];
    char subject[100];
    int ID[20];
};
int main()
{
    struct books book1;

    strcpy(book1.title,"Lord Of The Rings");
    strcpy(book1.author,"J.R.R TOLKEIN");
    strcpy(book1.subject,"Fiction");

    printf("Title=%s\n",book1.title);
    printf("Author=%s\n",book1.author);
    printf("Subject=%s\n",book1.subject);

    return 0;
}