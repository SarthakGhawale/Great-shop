/*c program for a  shop Made by .......<help in understanding some consept>Param Jasani CM GPN,<suggetion by>Shripad Kulkrni AILM GPN,GOOGLE.com,GeeksforGeek.com() made with mingw-64 gcc compiler ,used code editor VScode ,notepad,made for windows 10 ,Gaidense by codewithharry AND GPNagpur Basic of programming mam(NIKITA KATARIA) ,And whole code is made without any external copied code by Anup Waithkar , Kunal Chandak,Sarthak Ghawale*/
#include <stdio.h>
#include <stdlib.h>
int fspnt(FILE *fspnt)
{
    fprintf(fspnt, "Formal s size pant|                      ->             200Rs           \n");
}
int fmpnt(FILE *fmpnt)
{
    fprintf(fmpnt, "|Formal M size pant                      ->             500Rs           \n");
}
int fxpnt(FILE *fxpnt)
{
    fprintf(fxpnt, "|Formal x size pant                      ->             700Rs           \n");
}
int fxlpnt(FILE *fxlpnt)
{
    fprintf(fxlpnt, "|Formal xl size pant                     ->             1000Rs          \n");
}
int fxspnt(FILE *fxspnt)
{
    fprintf(fxspnt, "|Formal xs size pant                     ->             150Rs           \n");
}
int jspnt(FILE *jspnt)
{
    fprintf(jspnt, "|Jeans  s size pant                      ->             280Rs           \n");
}
int jmpnt(FILE *jmpnt)
{
    fprintf(jmpnt, "|Jeans  M size pant                      ->             555Rs           \n");
}
int jxpnt(FILE *jxpnt)
{
    fprintf(jxpnt, "|Jeans  x size pant                      ->             778Rs           \n");
}
int jxlpnt(FILE *jxlpnt)
{
    fprintf(jxlpnt, "|Jeans  xl size pant                     ->             1100Rs          \n");
}
int jxspnt(FILE *jxspnt)
{
    fprintf(jxspnt, "|Jeans  xs size pant                     ->             150Rs           \n");
}
int cspnt(FILE *cspnt)
{
    fprintf(cspnt, "|cotton s size pant                      ->             280Rs           \n");
}
int cmpnt(FILE *cmpnt)
{
    fprintf(cmpnt, "|cotton M size pant                      ->             555Rs           \n");
}
int cxpnt(FILE *cxpnt)
{
    fprintf(cxpnt, "|cotton x size pant                      ->             778Rs           \n");
}
int cxlpnt(FILE *cxlpnt)
{
    fprintf(cxlpnt, "|cotton xl size pant                     ->             1100Rs          \n");
}
int cxspnt(FILE *cxspnt)
{
    fprintf(cxspnt,"|cotton xs size pant                     ->             150Rs           \n");
}
int fssrt(FILE *fssrt)
{
    fprintf(fssrt, "|Formal s size shirt                      ->             300Rs           \n");
}
int fmsrt(FILE *fmsrt)
{
    fprintf(fmsrt, "|Formal M size shirt                      ->             600Rs           \n");
}
int fxsrt(FILE *fxsrt)
{
    fprintf(fxsrt, "|Formal x size shirt                      ->             740Rs           \n");
}
int fxlsrt(FILE *fxlsrt)
{
    fprintf(fxlsrt, "|Formal xl size shirt                     ->             1200Rs          \n");
}
int fxssrt(FILE *fxssrt)
{
    fprintf(fxssrt, "|Formal xs size shirt                     ->             110Rs           \n");
}
int jssrt(FILE *jssrt)
{
    fprintf(jssrt, "|Tshirt s size shirt                      ->             200Rs           \n");
}
int jmsrt(FILE *jmsrt)
{
    fprintf(jmsrt, "|Tshirt M size shirt                      ->             300Rs           \n");
}
int jxsrt(FILE *jxsrt)
{
    fprintf(jxsrt, "|Tshirt x size shirt                      ->             500Rs           \n");
}
int jxlsrt(FILE *jxlsrt)
{
    fprintf(jxlsrt, "|Tshirt xl size shirt                     ->             700Rs          \n");
}
int jxssrt(FILE *jxssrt)
{

    fprintf(jxssrt, "|Tshirt xs size shirt                     ->             80Rs           \n");
}
int cssrt(FILE *cssrt)
{
    fprintf(cssrt, "|cotton s size shirt                     ->             300Rs           \n");
}
int cmsrt(FILE *cmsrt)
{
    fprintf(cmsrt, "|cotton M size shirt                     ->             500Rs           \n");
}
int cxsrt(FILE *cxsrt)
{
    fprintf(cxsrt, "|cotton l size shirt                     ->             700Rs           \n");
}
int cxlsrt(FILE *cxlsrt)
{
    fprintf(cxlsrt, "|cotton xl size shirt                    ->              900Rs          \n");
}
int cxssrt(FILE *cxssrt)
{
    fprintf(cxssrt, "|cotton xs size shirt                    ->             100Rs           \n");
}
int ftie(FILE *tie)
{
    fprintf(tie, "|price of tie                            ->             130Rs           \n");
    
}
int scoat(FILE *scoat){
    fprintf(scoat,"|price of s size coat                    ->             400Rs           \n");
}
int mcoat(FILE *mcoat){
    fprintf(mcoat,"|price of M size coat                    ->             800Rs           \n");
}
int lcoat(FILE *lcoat){
    fprintf(lcoat,"|price of L size coat                    ->             1000Rs          \n");
}
int xlcoat(FILE *xlcoat){
    fprintf(xlcoat,"|price of xl size coat                    ->             1200Rs           \n");
}
int xscoat(FILE *xscoat){
    fprintf(xscoat,"|price of xs size coat                    ->             200Rs           \n");
}
int main()
{
    char c[100];
    FILE *ptr;
    printf("Enter costomers name(add .txt in end)\n");
    gets(c);
    ptr = fopen(c, "w");
    fprintf(ptr, "                              -------------------------------------\n                              |       _____                        |\n                              |      /     \\      |\\  /|           |\n                              |     |       |     | \\/ |           |\n                              |     |       |     |    |           |\n                              |      \\_____/      |    |           |\n                              |                    CLOTHS,Nagpur   |\n                              --------------------------------------\n");
    fprintf(ptr, " _______________________________________________________________________\n/OM cloths(nagpur,sadar)                                                \\\n|^^^^^^^^^^^^^^^^^^^^^^                                                 | \n");
    fprintf(ptr, "| :: %s ::|\n", c);

    int pant = 0, printer, shirt = 0, menu, srcounter = 1, k = 0, tie = 0, e, coat = 0, endloop, num, w, total=0, start, item[100], i = 0;
    printf("                              -------------------------------------\n                              |       _____                        |\n                              |      /     \\      |\\  /|           |\n                              |     |       |     | \\/ |           |\n                              |     |       |     |    |           |\n                              |      \\_____/      |    |           |\n                              |                    CLOTHS,Nagpur   |\n                              --------------------------------------\n");
    printf("Do you want to make the bill (enter :2)\n");
    printf("Do you want to quit (enter :3)\n");
    scanf("%d", &start);
    while (start < 1 || start > 3)
    {
        printf("You enterd wrong value \n Enter correct value\n");
        printf("Do you want to cheak the bill (enter :1)\n");
        printf("Do you want to make the bill (enter :2)\n");
        printf("Do you want to quit (enter :3)\n");
        scanf("%d", &start);
    }
    if (start == 3)
    {
        return 0;
    }
    if (start == 2)
    {
        start = 6;
        while (start == 6)
        {
            i++;
            printf("What do you want to purchase\n1: Pant\n2: Shirt\n3: Tie\n4: coat\n");
            printf("\n press 6 if done\n");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("which pant you want to purchase \n1: formal\n2: Jeans\n3: cotton\n");
                scanf("%d", &pant);
                if (pant == 1)
                {
                    printf("Which size of pant you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                    scanf("%d", &pant);
                    if (pant == 1)
                    {
                        item[i] = 200;
                        fspnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 2)
                    {
                        item[i] = 500;
                        fmpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 3)
                    {
                        item[i] = 700;
                        fxpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 4)
                    {
                        item[i] = 1000;
                        fxlpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 5)
                    {
                        item[i] = 175;
                        fxspnt(ptr);
                        pant = 0;
                    }
                    else
                    {
                        break;
                   }
                }
                else if (pant == 2)
                {
                    printf("Which size of pant Jeans you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                    scanf("%d", &pant);
                    if (pant == 1)
                    {
                        item[i] = 280;
                        jspnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 2)
                    {
                        item[i] = 555;
                        jmpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 3)
                    {
                        item[i] = 778;
                        jxpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 4)
                    {
                        item[i] = 1100;
                        jxlpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 5)
                    {
                        item[i] = 175;
                        jxspnt(ptr);
                        pant = 0;
                    }
                }
                else if (pant == 3)
                {
                    printf("Which size of pant you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                    scanf("%d", &pant);
                    if (pant == 1)
                    {
                        item[i] = 380;
                        cspnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 2)
                    {
                        item[i] = 600;
                        cmpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 3)
                    {
                        item[i] = 800;
                        cxpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 4)
                    {
                        item[i] = 1200;
                        cxlpnt(ptr);
                        pant = 0;
                    }
                    else if (pant == 5)
                    {
                        item[i] = 200;
                        cxspnt(ptr);
                        pant = 0;
                    }
                }
            }
            else if (menu == 2)
            {

                printf("which shirt you want to purchase \n1: formal\n2: Tshirt\n3: cotton\n");
                scanf("%d", &shirt);
                if (shirt == 1)
                {
                    printf("Which size of shirt you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                    scanf("%d", &shirt);
                    if (shirt == 1)
                    {
                        item[i] = 200;
                        fssrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 2)
                    {
                        item[i] = 500;
                        fmsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 3)
                    {
                        item[i] = 700;
                        fxsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 4)
                    {
                        item[i] = 1000;
                        fxlsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 5)
                    {
                        item[i] = 175;
                        fxssrt(ptr);
                        shirt = 0;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (shirt == 2)
                {
                    printf("Which size of Tshirt you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                    scanf("%d", &shirt);
                    if (shirt == 1)
                    {
                        item[i] = 280;
                        jssrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 2)
                    {
                        item[i] = 555;
                        jmsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 3)
                    {
                        item[i] = 778;
                        jxsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 4)
                    {
                        item[i] = 1100;
                        jxlsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 5)
                    {
                        item[i] = 175;
                        jxssrt(ptr);
                        shirt = 0;
                    }
                }
                else if (shirt == 3)
                {
                    printf("Which size of shirt you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                    scanf("%d", &num);
                    if (shirt == 1)
                    {
                        item[i] = 380;
                        cssrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 2)
                    {
                        item[i] = 600;
                        cmsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 3)
                    {
                        item[i] = 800;
                        cxsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 4)
                    {
                        item[i] = 1200;
                        cxlsrt(ptr);
                        shirt = 0;
                    }
                    else if (shirt == 5)
                    {
                        item[i] = 200;
                        cxssrt(ptr);
                        shirt = 0;
                    }
                }
            }
            else if (menu==3)
            {
                item[i]=130;
                ftie(ptr);
                tie=0;
            }
            else if (menu==4)
            {
                 printf("Which size of coat you want\n1: S\n2: M\n3: L\n4: XL\n5: Xs\n");
                 scanf("%d",&coat);
                if (coat==1)
                {
                    item[i]=400;
                    scoat(ptr);
                    coat=0;
                }
                else if (coat==2)
                {
                    item[i]=800;
                    mcoat(ptr);
                    coat=0;
                }
                else if (coat==3)
                {
                    item[i]=1000;
                    lcoat(ptr);
                    coat=0;
                }
                else if (coat==4)
                {
                    item[i]=1200;
                    xlcoat(ptr);
                    coat=0;
                }
                else if (coat==5)
                {
                    item[i]=200;
                    xscoat(ptr);
                    coat=0;
                }

            }
        
        
                total +=item[i];    
        printf("do you want to purchase another thing (Press:-6)else enter any integer\n");
        scanf("%d", &start);
         }
}
    

    fprintf(ptr, "|Dear costomer your total amount to pay is %dRs  Thnx for coming here   \n", total);
    fprintf(ptr, "|phonepe no.xxxxxxxxx mail:-xx@xmail.com web:  www.omcloths.com  win+ptr  \n");
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

    printf("Thanks a lot for coming in world's best cloth shop\n");
    return 0;
}