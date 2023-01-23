#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c[100];
    FILE *ptr;
    printf("****WELCOME****");
    printf("Enter customers name(add .txt in end)\n");
    gets(c);

    int pant,shirt, printer, beverages=0, menu, srcounter = 1, k = 0, snaks = 0, e,sport  = 0, endloop, num, w, total=0, start, item[100], i = 0;
    printf("Do you want to cheak the bill (enter :1)\n");
    printf("Do you want to make the bill (enter :2)\n");
    printf("Do you want to quit (enter :3)\n");
    scanf("%d", &start);
    while (start < 1 || start > 3)
    {
        printf("You enterd wrong value \n Enter correnct value\n");
        printf("Do you want to cheak the bill (enter :1)\n");
        printf("Do you want to make the bill (enter :2)\n");
        printf("Do you want to quit (enter :3)\n");
        scanf("%d", &start);
    }
    if (start == 3)
    {
        printf("Thanks for opening \n");
    }
    if(start==1)
    {
        system(c);
        return 0;
    }
    if (start == 2)
    {
    ptr = fopen(c, "w");
    fprintf(ptr, " _______________________________________________________________________\n/Bill of costomer                                                       \\\n|^^^^^^^^^^^^^^^^^^^^^^                                                         \n");
    fprintf(ptr, "| :: %s ::|\n", c);

        start = 1;
        while (start == 1)
        {
            i++;
            printf("Enter 1 for pant \nEnter 2 for shirt \n");
            printf("\n press 6 if done\n");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("Which size of pant you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                scanf("%d", &pant);
                if (pant == 1)
                {
                    item[i] = 200;
                    printf("You Purchased Formal S size pant of price Rs 200 successfully\n");
                    fprintf(ptr, "Formal S size pant|                      ->             200Rs           \n");
                    pant = 0;
                }
                else if (pant == 2)
                {
                    item[i] = 500;
                    printf("You Purchased Formal M size pant of price Rs 500 successfully\n");
                    fprintf(ptr, "Formal M size pant|                      ->             500Rs           \n");
                    pant = 0;
                }
                else if (pant == 3)
                {
                    item[i] = 700;
                    printf("You Purchased Formal L size pant of price Rs 700 successfully\n");
                    fprintf(ptr, "Formal L size pant|                      ->             700Rs           \n");
                    pant = 0;
                }
                else if (pant == 4)
                {
                    item[i] = 1000;
                    printf("You Purchased Formal XL size pant of price Rs 1000 successfully\n");
                    fprintf(ptr, "Formal XL size pant|                      ->            1000Rs           \n");
                    pant = 0;
                }
            }
            else if (menu==2)
            {
                printf("Which size of shirt you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                scanf("%d",&shirt);
                if (shirt==1)
                {
                    item[i] = 300;
                    printf("You Purchased a Cotton S size shirt of price Rs 300 successfully\n");
                    fprintf(ptr, "|cotton s size shirt                     ->             300Rs           \n");
                }
                else if (shirt==2)
                {
                    item[i] = 500;
                    printf("You Purchased a Cotton M size shirt of price Rs 500 successfully\n");
                    fprintf(ptr, "|cotton M size shirt                     ->             500Rs           \n");
                }
                else if (shirt==3)
                {
                    item[i] = 700;
                    printf("You Purchased a Cotton L size shirt of price Rs 700 successfully\n");
                    fprintf(ptr, "|cotton s size shirt                     ->             700Rs           \n");
                }
                else if (shirt==4)
                {
                    item[i] = 900;
                    printf("You Purchased a Cotton XL size shirt of price Rs 900 successfully\n");
                    fprintf(ptr, "|cotton XL size shirt                     ->             900Rs           \n");
                }
            }
              total +=item[i];    
        printf("do you want to purshes another thing (Press:-1)else enter any integer\n");
        scanf("%d", &start);
         }
}
    fprintf(ptr, "|Dear costomer your total amount to pay is %dRs  Thnx for coming here   \n", total);
    fprintf(ptr, "|phonepe no.xxxxxxxx for home delvery call on this number                 \n");
    fprintf(ptr, "\\________________________________________________________________________/");
    fclose(ptr);
    printf("Your bill is ready in %s \n",c);
    printf("Enter 1 if want to see bill here ,else enter any interger\n");
    int chk;
    scanf("%d", &chk);
    if (chk == 1)
    {
        system(c);
    }
    return 0;
}