#include<stdio.h>
#include<conio.h>
void main()
{
    int f=0,s=1,next,i,no;
    next=f+s;
    printf("enter the number of terms",no);
    scanf("%d", &no);
    printf("%d%d",f,s);
    for(i=0;i<no;i++);
    {
        f=s;
        s=next;
        printf("%d",next);
        scanf("%d", &no);
        printf("%d%d",f,s);
        for(i=0;i<no;i++);
        {
            f=s;
            s=next;
            printf("%d",next);
            next=f+s;
        }
        getch();
    }
        }
    }
}