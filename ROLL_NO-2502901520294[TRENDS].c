//ROLL_NO-2502901520294[TRENDS]
// GENERATE_AN_INVOICE_OF_DIFFERENT_OUTLETS_AND_WHICH_INCLUDES_ENTITE'S ID_PRODUCTQUANTITY_PRODUCTMREP_PRODUCTDISCOUNT_AND_PRODUCTFEATURES[SOZE,WEIGHT,MODEL]
//THIS_ONLINE/E-INVOICE_SYSTEM_PROVIDES_THE_FEATURES_REPRESENT_THE_WHOLE_STOCK
//ALSO_PROVIDE_THE_FUNCTIONALITY_TO_ADD_A_SINGLE_OR_MORE_ITEMS 
//ONCE_THE_REQUIREMENT_IS_DONE_USER_CAN_GENERATE_THE_E-RECITE_BY_OWN
//HINT:
//EACH_ITEM_AND_THEIR_OTHER_PROPERTIES_WILL_STORE_IN_AN_ARRAY_OF_SAME_SIZE
//WITH_THE_HELP_OF_LOOP_WE_CAN_TAKE
//Check_choice_is_valid_or_not
#include <stdio.h>
int main() 
{
  int id[12]={101,102,103,
        201,202,203,
        301,302,303,
        401,402,403};
  char item[12][30]={"JEANS","T-SHIRT","SHIRT","KURTI","LEGGIGNS","TOP","SHOES","SNEAKERS","HANDBAGS","SANDALS","WALLETS","CAP"};
  char brand[12][30]={"Levis","Puma","Allen Solly","Biba","Zara","Only","Bata","Adidas","Levie","Zara","Wildcarft","U.S Polo"};
  float mrp[12] = { 2499,999,1799,
        1499,1299,799,
        2999,3499,1999,
        1599,899,699};
int offer[12] = {25,20,15,
        30,25,10,
        20,35,15,
        25,10,20};
    char size[12][5] = {"32","M","L",
        "M","S","L",
        "8","9","7",
        "-","-","-"};
int stock[12] = {20,25,15,
        18,22,30,
        12,10,15,
        25,20,30};
int choice,p_id,qty;
int i,found;
float amount=0;
float bill =0;
int *s=stock;


printf("\n\n===============================================");
printf("\n                  TRENDS STORE");
printf("\n\n===============================================");
printf("\n1.Inventory");
printf("\n2.Purchase");
printf("\n3.Checkout");
printf("\n4.Exit");
printf("\n---------------------------------------------------");
 do
 {
 printf("\nEnter Choice : ");
        scanf("%d", &choice);
switch(choice)
{
    case 1:
printf("\n===============================================================================");
 printf("\n%-5s %-12s %-15s %-8s %-7s%-6s %-6s",
       "ID","Item","Brand","MRP","Offer","Size","Stock");
 printf("\n=======================================================================");
for(i=0;i<12;i++)
{
    printf("\n%-5d %-12s %-15s %-8.0f %-6d%% %-6s %-6d",
       id[i], item[i], brand[i],
       mrp[i], offer[i], size[i], stock[i]);
}
printf("\n========================================================================");
break;
case 2:
printf("\nEnter Item ID : ");
            scanf("%d",&p_id);
            found = 0;
           for(i=0;i<12;i++)
{
       if(id[i] == p_id)
{
    found = 1;
    printf("\n--------------------------------------");
    printf("\nItem Name : %s",item[i]);
    printf("\nBrand     : %s",brand[i]);
    printf("\nMRP       : %.2f",mrp[i]);
    printf("\nOffer     : %d%%",offer[i]);
    printf("\nSize      : %s",size[i]);
    printf("\nStock     : %d",stock[i]);
    printf("\nEnter Quantity : ");
    scanf("%d",&qty);
    if(qty<= stock[i])
{
    amount=qty*mrp[i];
    amount=amount-(amount*offer[i]/100.0);
    stock[i]-=qty;
    bill+=amount;
    printf("\nPurchase Successful!");
  printf("\nAmount = %.2f",amount);
 }
else
{
    printf("\nInsufficient stock!");
}
}
}
if(found == 0)
{
 printf("\nInvalid Item ID!");
}
break;
case 3:
printf("\n\n======================================");
printf("\n         TRENDS STORE");
printf("\n================================================");
printf("\nSubtotal      : %.2f",bill);
printf("\nGST (5%%)      : %.2f",bill*0.05);
printf("\nGrand Total   : %.2f",bill*1.05);
printf("\n================================================");
printf("\n THANK YOU FOR SHOPPING WITH US");
printf("\n=================================================");
 break;
 case 4:
 printf("\nThank you");
 break;
 default:
 printf("\nInvalid choice");
}
}while(choice!=4);

    return 0;
}


/*output
===============================================
                  TRENDS STORE

===============================================
1.Inventory
2.Purchase
3.Checkout
4.Exit
---------------------------------------------------
Enter Choice : 1

===============================================================================
ID    Item         Brand           MRP      Offer  Size   Stock 
=======================================================================
101   JEANS        Levis           2499     25    % 32     20    
102   T-SHIRT      Puma            999      20    % M      25    
103   SHIRT        Allen Solly     1799     15    % L      15    
201   KURTI        Biba            1499     30    % M      18    
202   LEGGIGNS     Zara            1299     25    % S      22    
203   TOP          Only            799      10    % L      30    
301   SHOES        Bata            2999     20    % 8      12    
302   SNEAKERS     Adidas          3499     35    % 9      10    
303   HANDBAGS     Levie           1999     15    % 7      15    
401   SANDALS      Zara            1599     25    % -      25    
402   WALLETS      Wildcarft       899      10    % -      20    
403   CAP          U.S Polo        699      20    % -      30    
========================================================================
Enter Choice : 2

Enter Item ID : 201

--------------------------------------
Item Name : KURTI
Brand     : Biba
MRP       : 1499.00
Offer     : 30%
Size      : M
Stock     : 18
Enter Quantity : 2

Purchase Successful!
Amount = 2098.60
Enter Choice : 2

Enter Item ID : 401

--------------------------------------
Item Name : SANDALS
Brand     : Zara
MRP       : 1599.00
Offer     : 25%
Size      : -
Stock     : 25
Enter Quantity : 1

Purchase Successful!
Amount = 1199.25
Enter Choice : 3


======================================
         TRENDS STORE
================================================
Subtotal      : 3297.85
GST (5%)      : 164.89
Grand Total   : 3462.74
================================================
 THANK YOU FOR SHOPPING WITH US
=================================================
Enter Choice : 4

Thank you*/

