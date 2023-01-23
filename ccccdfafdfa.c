#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c[100];
    FILE *ptr;
    printf("Enter customers name(add .txt in end)\n");
    gets(c);

    int cosmetics = 0, printer, beverages=0, menu, srcounter = 1, k = 0, e,endloop, num, w, total=0, start, item[100], i = 0;
    printf("___________________________________________                                         |\n|                                         |\n| |\\   /|     /\\    |       |             |\n| | \\/  |    /  \\   |       |             |\n| |     |   /----\\  |       |             |\n| |     |  /      \\ |______ |______       |\n|_________________________________________|\n");
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
    fprintf(ptr, "___________________________________________                                         |\n|                                         |\n| |\\   /|     /\\    |       |             |\n| | \\/  |    /  \\   |       |             |\n| |     |   /----\\  |       |             |\n| |     |  /      \\ |______ |______       |\n|_________________________________________|\n");
    fprintf(ptr, " _______________________________________________________________________\n/Bill of costomer                                                \\\n|^^^^^^^^^^^^^^^^^^^^^^                                                        | \n");
    fprintf(ptr, "| :: %s ::|\n", c);

        start = 1;
        while (start == 1)
        {
            i++;
            printf("Which Domain you want to explore\n1 :Cosmetic\n2 :Beverages \n3 :Snacks\n4 :Electronic");
            printf("\n press 6 if done\n");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("Which things do you want in cosmetic\n1: Soap\n2: Perfume \n");
                scanf("%d", &cosmetics);
                if (cosmetics == 1)
                {
                    printf("Soaps \nEnter the code for given prooduct\n1 :LUX International\t 40/- \n2 :Dettol\t\t 25/-\n3 :Dove  \t\t 30/- \n4 :Lifebuoy \t\t 35/-\n");
                    scanf("%d", &cosmetics);
                    if (cosmetics == 1)
                    {
                        item[i] = 40;
                        printf("You Purchased a LUX International soap of price Rs 40 successfully\n");
                        fprintf(ptr, "|LUX International \t\t->             40Rs           \n");
                        cosmetics = 0;
                    }
                    else if (cosmetics == 2)
                    {
                        item[i] = 25;
                        printf("You Purchased a Dettol soap of price Rs 25 successfully\n");
                        fprintf(ptr, "|Dettol \t\t\t->             25Rs           \n");
                        cosmetics = 0;
                    }
                    else if (cosmetics == 3)
                    {
                        item[i] = 30;
                        printf("You Purchased a Dove soap of price Rs 30 successfully\n");
                        fprintf(ptr, "|Dove \t\t\t\t->             30Rs           \n");
                        cosmetics = 0;
                    }
                    else if (cosmetics == 4)
                    {
                        item[i] = 35;
                        printf("You Purchased a Lifebuoy soap of price Rs 35 successfully\n");
                        fprintf(ptr, "|Lifebuoy \t\t\t->             35Rs          \n");
                        cosmetics = 0;
                    }
                    else
                    {
                        printf("You enterd wrong value\n");
                        break;
                    }
                }
                else if (cosmetics == 2)
                {
                    printf("Perfume \nEnter the code for given prooduct\n1 :Engage\t\t 180/- \n2 :Fogg \t\t 150/-\n3 :Denver\t\t 100/- \n4 :AXE  \t\t  60/-\n");
                    scanf("%d", &cosmetics);
                    if (cosmetics == 1)
                    {
                        item[i] = 180;
                        printf("You Purchased a Engage Perfume of price Rs 180 successfully\n");
                        fprintf(ptr, "|Engage\t\t\t\t->            180Rs           \n");
                        cosmetics = 0;
                    }
                    else if (cosmetics == 2)
                    {
                        item[i] = 150;
                        printf("You Purchased a Fogg Perfume of price Rs 150 successfully\n");
                        fprintf(ptr, "|Fogg\t\t\t\t->            150Rs           \n");
                        cosmetics = 0;
                    }
                    else if (cosmetics== 3)
                    {
                        item[i] = 100;
                        printf("You Purchased a Fogg Perfume of price Rs 150 successfully\n");
                        cosmetics = 0;
                    }
                    else if (cosmetics == 4)
                    {
                        item[i] = 60;
                        printf("You Purchased a  AXE of price Rs 60 successfully\n");
                        fprintf(ptr, "|AXE\t\t\t\t->             60Rs           \n");
                        cosmetics = 0;
                    }
                    else
                    {
                        printf("You enterd wrong value\n");
                        break;
                    } 
                }
                else
                {
                    printf("You enterd wrong value\n");
                }
            }
            else if (menu == 2)
            {
                printf("Beverages \n Enter the code for product\n1: Fanta 750 ml \t\t35/-\n2: Thums-up 750 ml\t\t40/-\n3: Frooti \t\t\t10/-\n4: Coca cola\t\t\t30/-\n5:Pepsi\t\t\t\t25/-\n6: Limca 750ml\t\t\t33/-\n ");  
                scanf("%d", &beverages);
                if (beverages == 1)
                {
                    item[i] = 35;
                    printf("You Purchased a Fanta 750 ml of price Rs 35 successfully\n");
                    fprintf(ptr, "|Fanta 750 ml\t\t\t->            35Rs          \n");
                    beverages = 0;
                }
                else if (beverages == 2)
                {
                    item[i] = 40;
                    printf("You Purchased a Thums-up 750 ml of price Rs 40 successfully\n");
                    fprintf(ptr, "|Thums-up\t\t\t->            40Rs           \n");
                    beverages = 0;
                }
                else if (beverages == 3)
                {
                    item[i] = 10;
                    printf("You Purchased a Frooti of price Rs 10 successfully\n");
                    fprintf(ptr, "|Frooti\t\t\t\t->             10Rs           \n");
                    beverages = 0;
                }
                else if (beverages == 4)
                {
                    item[i] = 30;
                    printf("You Purchased a Coca-cola of price Rs 30 successfully\n");
                    fprintf(ptr, "|Coca cola\t\t\t\t->             30Rs           \n");
                    beverages = 0;
                }
                else if (beverages == 5)
                {
                    item[i] = 25;
                    printf("You Purchased a Pepsi of price Rs 25 successfully\n");
                    fprintf(ptr, "|Pepsi\t\t\t\t->              25Rs           \n");
                    beverages = 0;
                }
                else if (beverages == 6)
                {
                    item[i] = 33;
                    printf("You Purchased a Limca 750ml of price Rs 33 successfully\n");
                    fprintf(ptr, "|Limca\t\t\t->              33Rs          \n");
                
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