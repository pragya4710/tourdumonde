#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct Date 
{ 
    int d, m, y; 
}; 
const int monthDays[12] = {31, 28, 31, 30, 31, 30, 
                           31, 31, 30, 31, 30, 31}; 
int countLeapYears(struct Date d) 
{ 
    int years = d.y; 
    if (d.m <= 2) 
        years--; 
    return years / 4 - years / 100 + years / 400; 
} 
  
int getDifference(struct Date dt1,struct Date dt2) 
{ 
    long int n1 = dt1.y*365 + dt1.d; 
    for (int i=0; i<dt1.m - 1; i++) 
        n1 += monthDays[i]; 
    n1 += countLeapYears(dt1); 
    long int n2 = dt2.y*365 + dt2.d; 
    for (int i=0; i<dt2.m - 1; i++) 
        n2 += monthDays[i]; 
    n2 += countLeapYears(dt2); 
    return (n2 - n1); 
} 
int check(int dd,int mm,int yy){
    if(yy>=1900 && yy<=9999)
    {
        if(mm>=1 && mm<=12)
        {
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)){
                return 1;
            }
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11)){
                return 1;
            }
            else if((dd>=1 && dd<=28) && (mm==2)){
                return 1;
            }
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0))){
                return 1;
            }   
            else
                return 0;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
int curr(int dd,int mm,int yy){
    time_t T= time(NULL);
    struct  tm tm = *localtime(&T);
    int cdd=tm.tm_mday;
    int cmm=tm.tm_mon+1;
    int cyy=tm.tm_year+1900;
    if(cyy<yy){
        return 1;
    }
    else if(cyy==yy && cmm<mm){
        return 1;
    }
    else if(cyy==yy && cmm==mm && cdd<=dd){
        return 1;
    }
    else {
        return 0;
    }
    
}
int main()
{  
printf("\n\n\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("           ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("           ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("           ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦    ¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦            \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦      ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦        ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦    ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦            \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("               ¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦¦    \n");
printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");



    int child,ch=0,c=0,s=0,adults=-1,m=0,p=0,a=0,year,date,price=0,total,fare,c1=0,act,days,endday=1,endmonth=1,endyear=2019,startday=1,startmonth=1,startyear=2019;
    char air,class1,* dest,*flight;
    while(ch>2 || ch<1){
printf("\n\n**************************************************************************************** VOTRE VOYAGE ORGANISE ****************************************************************************************************\n");
        printf("\nSelect your package:\n");
        printf("1. National package\n");
        printf("2. International package\n");
        printf("Your valuable response is: ");
        scanf("%d",&ch);
    }
    if(ch==1)
    {
        while(c<1 || c>6){
            printf("\n************************************************************************************************** CHOIS VOTRE ENDROIT **************************************************************************************** \n\n");
            printf("1. Assam \n2. Kolkata\n3. Mumbai\n4. Jaipur\n5. Delhi\n6. Goa\n");
            printf("Your valuable response is:");
            scanf("%d",&c);
        }
        printf("\n");
    }
    if(ch==2)
    {
        while(c1<1 || c1 > 6){
             printf("\n******************************************************************************** CHOIS VOTRE ENDROIT ************************************************************************************************************ \n\n");
            printf("1. Canada\n2. America\n3. Switzerland\n4. Australia\n5. Sydney\n6. Thailand\n");
            printf("Your valuable response is:");
            scanf("%d",&c1);
        }
        printf("\n");
    }
    
    while(s<1 || s>3){
        if(c==1)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 4939\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8865\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 14400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=4939; dest="ASSAM      ";}
        else if(s==2) {fare=8865; dest="ASSAM      ";}
        else {fare=14400;dest="ASSAM      ";}
        }

        
        if(c==2)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 4938\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8890\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 14500\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=4938; dest="KOLKATA    ";}
        else if(s==2) {fare=8890;dest="KOLKATA    ";}
        else {fare=14500;dest="KOLKATA    ";}
        }

        
        if(c==3)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 4937\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8860\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 15400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=4937; dest="MUMBAI     ";}
        else if(s==2) {fare=8860; dest="MUMBAI     ";}
        else {fare=15400;dest="MUMBAI     ";}
        }

        
        if(c==4)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 5939\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 9865\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 24400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=5939;dest="JAIPUR     ";}
        else if(s==2) {fare=9865;dest="JAIPUR     ";}
        else {fare=24400;dest="JAIPUR     ";}
        }
        
        if(c==5)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 4559\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8500\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 16400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=4559;dest="DELHI      ";}
        else if(s==2) {fare=8500;dest="DELHI      ";}
        else {fare=16400;dest="DELHI      ";}
        }
        
        if(c==6)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 5439\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8865\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 15400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=5439;dest="SHIMLA     ";}
        else if(s==2) {fare=8865;dest="SHIMLA     ";}
        else {fare=15400;dest="SHIMLA      ";}
        }
        
        
        if(c1==1)
        {
        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 5939\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 1065\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 14300\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=5939;dest="CANADA     ";}
        else if(s==2) {fare=1065;dest="CANADA     ";}
        else {fare=14300;dest="CANADA     ";}
        }
        
        if(c1==2)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 6939\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8875\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 14400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=6939;dest="AMERICA    ";}
        else if(s==2) {fare=8875;dest="AMERICA    ";}
        else {fare=14400;dest="AMERICA    ";}
        }
        
        if(c1==3)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 8939\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 1165\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 14240\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=8939;dest="SWITZERLAND";}
        else if(s==2) {fare=1165;dest="SWITZERLAND";}
        else {fare=14240;dest="SWITZERLAND";}
        }
        
        if(c1==4)
        {

        printf("\n**************************************************************************************** CHOIS VOTRE VOYAGE ************************************************************************************************************** \n\n");
        printf("\n1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 6889\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8865\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 28400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=6889;dest="AUSTRALIA  ";}
        else if(s==2) {fare=8865;dest="AUSTRALIA  ";}
        else {fare=28400;dest="AUSTRALIA  ";}
        }
        
        if(c1==5)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 2440\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8980\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 23400\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=2440;dest="SYDNEY     ";}
        else if(s==2) {fare=8980;dest="SYDNEY     ";}
        else {fare=23400;dest="SYDNEY     ";}
        }
        
        if(c1==6)
        {

        printf("Select your travel:\n\n");
        printf("1 -> Flight : IndiGo ");
        printf("Class of Travel : Economy ");
        printf("Min. fare: 5430\n");

        printf("2 -> Flight : Air India ");
        printf("Class of Travel : Premium Economy ");
        printf("Min. fare: 8880\n");

        printf("3 -> Flight : Jet Airways ");
        printf("Class of Travel: Business class ");
        printf("Min. fare: 28000\n\n");
        printf("Your valuable response is:");
        scanf("%d",&s);
        if(s==1) {fare=5430;dest="THAILAND   ";}
        else if(s==2) {fare=8880;dest="THAILAND   ";}
        else {fare=28000;dest="THAILAND   ";}
        }
    }
    if(s==1){flight="INDIGO     ";}
    else if(s==2){flight="AIR INDIA  ";}
    else if(s==3){flight="JET AIRWAYS";}  

    while(adults<0){
        printf("\n**************************************************************************************** PASSAGERE SELECTION ******************************************************************************************************\n");
        printf("\nPlease enter number of adults: ");
        scanf("%d",&adults);
        printf("\nEnter number of children(4<Age<12):");
        scanf("%d",&child);
    }

 printf("\n************************************************************************************* SELECTION DE DATE ********************************************************************************************************* \n\n");
	printf("\nPlease enter your duration of trip in format of dd/mm/yyyy");
    while(!check(startday,startmonth,startyear) || !(curr(startday,startmonth,startyear))){
        printf("\nDate of Journey: ");
        scanf("%d/%d/%d",&startday,&startmonth,&startyear);
    }

    while((!check(endday,endmonth,endyear) || !(curr(endday,endmonth,endyear)))){        
        printf("\nDate of Return: ");
        scanf("%d/%d/%d",&endday,&endmonth,&endyear);
	}

    struct Date sd={startday,startmonth,startyear};
    struct Date ed={endday,endmonth,endyear};
    days = getDifference(sd,ed);

    while(m<1 || m>3){
    printf("\n********************************************************************************* AUBERGE POUR VOUS ***************************************************************************************************************");
    printf("\nSelect your Accomodation Type\n");
    printf("1 -> 3 Star Hotel(price 2440 per head, per day)\n");
    printf("2 -> 5 Star Hotel(price 4840 per head, per day)\n");
    printf("3 -> 7 Star Hotel(price 7740 per head, per day)\n\n");
    printf("Your valuable response is: ");
    scanf("%d",&m);
    }
    while(p<1 || p>4){
        printf("\n****************************************************************************************** TYPE DE PACKAGE ********************************************************************************************************\n");
        printf("\nPlease enter your Package Type\n");
        printf("1. European package (180 per head ,per day)\n");
        printf("2. Continental package (380 per head ,per day)\n");
        printf("3. American package (650 per head ,per day)\n");
        printf("4. Modified American package (340 per head ,per day)\n\n");
        printf("Your valuable response is: ");
        scanf("%d",&p);
    }
    while(a>3 || a<1){
        printf("\n************************************************************************************ VOYAGE REGIONALE *********************************************************************************************************\n");
        printf("\nPlease select your Travel Option\n");
        printf("1. Transportation only(440 per head)\n");
        printf("2. Sight-seeing(650 per head)\n");
        printf("3. Both(1000 per head)\n\n");
        printf("Your valuable response is: ");
        scanf("%d",&a);
    }
    int f,tf,gst,at,pt,to;
    if(m==1){at=2440;}
    else if(m==2){at=4840;}
    else{at=7740;}

    if(p==1){pt=180;}
    else if(p==2){pt=380;}
    else if(p==3){pt=650;}
    else{pt=340;}

    if(a==1){to=440;}
    else if(a==2){to=650;}
    else{to=1000;}

    f = fare*adults + at*adults*days + pt*adults*days + to*adults + 0.5*fare*child + 0.5*at*child*days + 0.5*pt*child*days + 0.5*to*child;
    tf = f + 0.15*f + 10000;
    
    system("cls");
    
    

printf("\n     ***************************************** VOTRE BILLET **************************************\n");
printf("    |#|                                                                                           |#|\n");
printf("    |#|       From :   %d/%d/%d                                               To : %d/%d/%d   |#|\n",startday,startmonth,startyear,endday,endmonth,endyear);
printf("    |#|                                                                                           |#|\n");
printf("    |#|                                  Flight       :         %s                       |#|\n",flight);
printf("    |#|                                                                                           |#|\n");
printf("    |#|                                  Destination  :         %s                       |#|\n",dest);
printf("    |#|                                                                                           |#|\n");
printf("    |#|                                  Fare         :         %d                            |#|\n",f);
printf("    |#|                                                                                           |#|\n");
printf("    |#|                                  Activities   :         10000                             |#|\n");
printf("    |#|                                                                                           |#|\n");
printf("    |#|                                  GST          :         +15 perc.                         |#|\n");
printf("    |#|-------------------------------------------------------------------------------------------|#|\n");
printf("    |#|                                  Total Fare   :         %d                            |#|\n",tf);
printf("    |#|                                                                                           |#|\n");
printf("    **********************************************************************************************\n\n");

printf("\n    --------------------------------------------------------------------------------------------------\n");
printf("     ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦ ¦¦¦¦¦¦ \n");
printf("     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦ ¦¦¦¦¦¦ \n");
printf("     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦         ¦¦¦¦¦¦    ¦¦¦¦¦¦   ¦¦¦¦¦¦           ¦¦¦¦¦¦   ¦¦¦¦¦¦ ¦¦¦¦¦¦ \n");
printf("     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦           ¦¦¦¦¦¦   ¦¦¦¦¦¦ ¦¦¦¦¦¦ \n");
printf("     ¦¦¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦           ¦¦¦¦¦¦   ¦¦¦¦¦¦ ¦¦¦¦¦¦ \n");
printf("     ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦         ¦¦¦¦¦¦  ¦¦¦¦¦¦     ¦¦¦¦¦¦           ¦¦¦¦¦¦                 \n");
printf("     ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦ ¦¦¦¦¦¦ \n");
printf("     ¦¦¦¦¦¦          ¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦ ¦¦¦¦¦¦ \n");
printf("     -------------------------------------------------------------------------------------------------\n");
printf("\n\n**************\n");
printf("SUBMITTED BY:\n");
printf("**************\n");
printf("ANJALI NAGPAL\n");
printf("**************\n");
printf("PRAGYA MEHTA\n");
printf("**************\n");
printf("NANDINI GOEL\n");
printf("**************\n");
printf("TULIKA GOSWAMI\n");
printf("**************\n");
printf("JASLEEN KAUR\n");
printf("**************\n");
}

