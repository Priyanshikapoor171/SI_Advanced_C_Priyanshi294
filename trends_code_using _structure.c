//ROLLNO-2502901520294
//trends code using structure
#include <stdio.h>
struct Product
{
    int id;
    char item[30];
    char brand[30];
    float mrp;
    int offer;
    char size[5];
    int stock;
};
int main()
{
    struct Product p[12] =
    {
        {101,"JEANS","Levis",2499,25,"32",20},
        {102,"T-SHIRT","Puma",999,20,"M",25},
        {103,"SHIRT","Allen Solly",1799,15,"L",15},
        {201,"KURTI","Biba",1499,30,"M",18},
        {202,"LEGGINGS","Zara",1299,25,"S",22},
        {203,"TOP","Only",799,10,"L",30},
        {301,"SHOES","Bata",2999,20,"8",12},
        {302,"SNEAKERS","Adidas",3499,35,"9",10},
        {303,"HANDBAGS","Levie",1999,15,"7",15},
        {401,"SANDALS","Zara",1599,25,"-",25},
        {402,"WALLETS","Wildcraft",899,10,"-",20},
        {403,"CAP","U.S Polo",699,20,"-",30}
    };

    int choice, p_id, qty;
    int i, found;
    float amount = 0, bill = 0;
    printf("\n\n===============================================");
    printf("\n                  TRENDS STORE");
    printf("\n===============================================");
    printf("\n1.Inventory");
    printf("\n2.Purchase");
    printf("\n3.Checkout");
    printf("\n4.Exit");
    printf("\n------------------------------------------------");
    do
    {
        printf("\nEnter Choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\n===============================================================================");
                printf("\n%-5s %-12s %-15s %-8s %-7s %-6s %-6s",
                       "ID","Item","Brand","MRP","Offer","Size","Stock");
                printf("\n===============================================================================");
                for(i = 0; i < 12; i++)
                {
                    printf("\n%-5d %-12s %-15s %-8.0f %-6d%% %-6s %-6d",
                           p[i].id,
                           p[i].item,
                           p[i].brand,
                           p[i].mrp,
                           p[i].offer,
                           p[i].size,
                           p[i].stock);
                }
                printf("\n===============================================================================");
                break;
            case 2:
                printf("\nEnter Item ID : ");
                scanf("%d", &p_id);
                found = 0;
                for(i = 0; i < 12; i++)
                {
                    if(p[i].id == p_id)
                    {
                        found = 1;
                        printf("\n--------------------------------------");
                        printf("\nItem Name : %s", p[i].item);
                        printf("\nBrand     : %s", p[i].brand);
                        printf("\nMRP       : %.2f", p[i].mrp);
                        printf("\nOffer     : %d%%", p[i].offer);
                        printf("\nSize      : %s", p[i].size);
                        printf("\nStock     : %d", p[i].stock);
                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);
                        if(qty <= p[i].stock)
                        {
                            amount = qty * p[i].mrp;
                            amount = amount - (amount * p[i].offer / 100.0);
                            p[i].stock -= qty;
                            bill += amount;
                            printf("\nPurchase Successful!");
                            printf("\nAmount = %.2f", amount);
                        }
                        else
                        {
                            printf("\nInsufficient Stock!");
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
                printf("\n           TRENDS STORE");
                printf("\n======================================");
                printf("\nSubtotal      : %.2f", bill);
                printf("\nGST (5%%)      : %.2f", bill * 0.05);
                printf("\nGrand Total   : %.2f", bill * 1.05);
                printf("\n======================================");
                printf("\n THANK YOU FOR SHOPPING WITH US");
                printf("\n======================================");
                break;
            case 4:
                printf("\nThank You");
                break;
            default:
                printf("\nInvalid Choice");
        }

    } while(choice != 4);
    return 0;
}

/*OUTPUT
===============================================
                  TRENDS STORE
===============================================
1.Inventory
2.Purchase
3.Checkout
4.Exit
------------------------------------------------
Enter Choice : 1

===============================================================================
ID    Item         Brand           MRP      Offer   Size   Stock 
===============================================================================
101   JEANS        Levis           2499     25    % 32     20    
102   T-SHIRT      Puma            999      20    % M      25    
103   SHIRT        Allen Solly     1799     15    % L      15    
201   KURTI        Biba            1499     30    % M      18    
202   LEGGINGS     Zara            1299     25    % S      22    
203   TOP          Only            799      10    % L      30    
301   SHOES        Bata            2999     20    % 8      12    
302   SNEAKERS     Adidas          3499     35    % 9      10    
303   HANDBAGS     Levie           1999     15    % 7      15    
401   SANDALS      Zara            1599     25    % -      25    
402   WALLETS      Wildcraft       899      10    % -      20    
403   CAP          U.S Polo        699      20    % -      30    
===============================================================================
Enter Choice : 2

Enter Item ID : 101

--------------------------------------
Item Name : JEANS
Brand     : Levis
MRP       : 2499.00
Offer     : 25%
Size      : 32
Stock     : 20
Enter Quantity : 1

Purchase Successful!
Amount = 1874.25
Enter Choice : 2

Enter Item ID : 201

--------------------------------------
Item Name : KURTI
Brand     : Biba
MRP       : 1499.00
Offer     : 30%
Size      : M
Stock     : 18
Enter Quantity : 1

Purchase Successful!
Amount = 1049.30
Enter Choice : 3


======================================
           TRENDS STORE
======================================
Subtotal      : 2923.55
GST (5%)      : 146.18
Grand Total   : 3069.73
======================================
 THANK YOU FOR SHOPPING WITH US
======================================*/