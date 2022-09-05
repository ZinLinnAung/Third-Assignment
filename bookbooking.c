//Zinlinaung

#include <stdio.h>
int BookID[]={1,2,3,4,5,6,7,8,9,10};
int adminIDs[]={110,111,112,113,114,115};
int adminPasswords[]={4905,4906,4907,4908,4909,5100};



void StartSystem()
{
    int adminID;
    int adminPassword;
    printf("Welcome to Library Management System \n");
    printf("Enter your admin ID :");
    scanf("%d",&adminID);
    printf("Enter your admin password :");
    scanf("%d",&adminPassword);
    for(int i=0;i<6;i++)
    {

        if(adminID==adminIDs[i])
        {

            if(adminPassword==adminPasswords[i])
            {
                    viewBook();
                 SearchBook();
                 Order();
                break;
            }else
            {
                printf("wrong password");
                break;
            }
        }
    }







}
void LibrarySystem()
{

}
void viewBook()
{
    for(int i=0;i<10;i++)
    {
        BookNames(i);
    }
}
void BookNames(i)
{
    switch (i)
        {
        case 0:
            printf("book ID : %d ,bookname: skyhigh\n",BookID[i]);
            break;
        case 1:
            printf("book ID : %d ,bookname: cleanCode\n",BookID[i]);
             break;
        case 2:
            printf("book ID : %d ,bookname: codeComplete\n",BookID[i]);
             break;
        case 3:
            printf("book ID : %d ,bookname:  Introduction to Algorithms\n",BookID[i]);
             break;
        case 4:
            printf("book ID : %d ,bookname: Structure and Interpretation of Computer Programs (SICP)\n",BookID[i]);
             break;
        case 5:
            printf("book ID : %d ,bookname:  Design Patterns\n",BookID[i]);
             break;
        case 6:
            printf("book ID : %d ,bookname:  The Pragmatic Programmer\n",BookID[i]);
             break;
        case 7:
            printf("book ID : %d ,bookname:  Head First Design Patterns\n",BookID[i]);
             break;
        case 8:
            printf("book ID : %d ,bookname:  Refactoring\n",BookID[i]);
             break;
        case 9:
            printf("book ID : %d ,bookname:  The Art of Computer Programming\n",BookID[i]);
             break;
        default:
            printf("book not found");
        }
}
void SearchBook()
{
    printf("==========Search Book===========\n");
int searchID;
printf("Enter BookID :");
scanf("%d",&searchID);
for(int i=0;i<10;i++)
{

    if(searchID==BookID[i])
    {
         BookNames(i);
    }
}
}
void Order()
{

    int BookIDno;


    int ans;
    printf("==============Order Book===============\n");
    printf("Enter BookID :");
    scanf("%d",&BookIDno);
    int* bookaddress=&BookIDno;
    for(int i=0;i<10;i++)
    {

        if(*bookaddress==BookID[i])
        {
             BookNames(i);
             printf("Do you want to order this book?(1.Yes,2,No)\nYour Answer :");
             scanf("%d",&ans);
             if(ans==1)
             {
                 printf("your ordered books \n");
                 BookNames(i);
                 printf("order completed\n");
                 break;
             }
             else if(ans==2)
             {

                printf("thanks for using booking system\n");
                break;
             }


        }
    }

}
int main()
{
    while(1)
    {
        StartSystem();

    }

}
