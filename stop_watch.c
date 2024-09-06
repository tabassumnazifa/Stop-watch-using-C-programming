#include<stdio.h>
#ifdef WIN32
#else
#include<unistd.h>
#endif // WIN32
main()
{
    int hr,mint,sec;
    printf("\n\n\n\t\t\t\t\t\tIT'S\t A\t DIGITAL\t STOP\t WATCH!!\n");
    printf("\n\tEnter the hour,minute & second:\n");
    scanf("%d%d%d",&hr,&mint,&sec);
    int h=0,m=0,s=0;
    while(1)
    {
       printf("\n\n\n\n\t\t\t\t\t\t\t*******STOP WATCH*******");
        printf("\n\n\n\n\n\t\t\t\t\t\t\t\t*%0.2d:%0.2d:%0.2d*\n",h,m,s);
        printf("\n\n\n\t\t\t\t\t\t\t***************************");

        if(h==hr && m==mint && s==sec)
        {
            break;
        }
        s++;
        sleep(1);
        if(s==60)
        {
            m++;
            s=0;
        }
        else
        {
            system("cls");
        }

        if(m==60)
        {
            h++;
            m=0;
        }
    }
    getch();
}


