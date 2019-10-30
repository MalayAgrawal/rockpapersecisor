#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
    int i,r,cp=0,pp=0;
    char c,p;
    srand(time(0));
    while(cp<5&&pp<5)
    {
        r=rand();
        do
        {
            r=r/10;
            if(r==0)
            {
                r=rand();
            }
        }
        while (r>10||r<2);
        printf("enter your choice");
        scanf("%c",&c);
        if(r<=3)
        p='r';
        else if(r<=6)
        p='p';
        else
        p='s';
        printf("\ncomputer choose  %c\n",p);
        if(p=='r'&&c=='p')
        cp++;
        if(p=='p'&&c=='s')
        cp++;
        if(p=='s'&&c=='r')
        cp++;
        if(c=='r'&&p=='p')
        pp++;
        if(c=='p'&&p=='s')
        pp++;
        if(c=='s'&&p=='r')
        pp++;
        printf("computer score = %d\nyour score = %d\n",pp,cp);

    }
}