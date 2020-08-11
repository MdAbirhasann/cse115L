#include<stdio.h>
int main()
{
    int offer;
    printf("\n 1. SMS Offer  \n 2. Talk-Time Offer \n 3. Internet Offer \n 4. Monthly Plan Offer \n 5. Recharge Offer \n 6. Star Customer Offer \n 7. Gold Customer Offer \n 8. Platinum Customer Offer \n 9. Pay as you Go ");
    
    printf("\nChoose any type of offer (1-9):");
    
    scanf("%d",&offer);

    switch(offer)

    {
       case 1:
       printf("\nsms offer:");
       printf("\n1. 50 sms:5.99 taka \n2. 100sms:8.02 taka \n3. 300 sms:15.00 taka ");
       printf("\nValidity 7 days");
       break;

       case 2:
       printf("\n Talk-Time offer:");
       printf("\n1. 50 minutes:31.95 taka \n2. 300 minutes:179.89 taka "
              "\n3. 1000 minutes:599.63 taka");

       printf("\nValidity 15 days");
       break;

       case 3:
       printf("\nInternet Offer:");
       printf("\n1. 100 MB:42.70 taka \n2. 250 MB:52.37 taka \n3. 1.5 GB:93.55 taka");
       printf("\nValidity 30 days");
       break;

       case 4:
       printf("\nMonthly Plan Offer:");
       printf("\n1. 500 MB,200 SMS,100 minutes Talk-Time:293.47 taka");
       printf("\nValidity 30 days");
       break;

       case 5:
       printf("\nRecharge Offer:\n");
       printf("\n1. 250 MB,20 SMS:on 29 taka recharge\n");
       printf("\nValidity 21 days");
       break;

       case 6:
       printf("\nStar customer Offer:\n");
       printf("\n1. 3 GB,100 minutes,50 sms:120 taka");
       printf("\nValidity 45 days");
       break;

       case 7:
       printf("\nGold Customer Offer:\n");
       printf("\n1. 5 GB,150 minutes,100 sms:130 taka\n");
       printf("\nValidity 45 days");
       break;

       case 8:
       printf("\nPlatinum Customer Offer:\n");
       printf("\n1. 9 GB,200 minutes,150 sms: 150 taka\n");
       printf("\nValidity 45 days");
       break;

       case 9:
       printf("\nPay as you Go:\n");
       printf("\n1. 60 taka per second\n");
       printf("\nValidity till balance remains");
       break;

       default:
        printf("You have selected Invalid Option");
       break;

    }
    return 0;
}

