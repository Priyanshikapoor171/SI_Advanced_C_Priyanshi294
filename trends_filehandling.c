#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    char brand[30];
    char size[10];
    int qty;
    float mrp;
    float discount;
    float sellingPrice;
    float amount;
};

int main()
{
    FILE *fp;
    struct Product p;
    int n, i;
    float subtotal = 0, gst, total;

    printf("=================================================\n");
    printf("              TRENDS STORE\n");
    printf("                TAX INVOICE\n");
    printf("=================================================\n");

    printf("Enter Number of Products : ");
    scanf("%d", &n);

    fp = fopen("products.dat", "wb");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Details of Product %d\n", i + 1);

        printf("Product ID : ");
        scanf("%d", &p.id);

        printf("Product Name : ");
        scanf("%s", p.name);

        printf("Brand : ");
        scanf("%s", p.brand);

        printf("Size : ");
        scanf("%s", p.size);

        printf("Quantity : ");
        scanf("%d", &p.qty);

        printf("MRP : ");
        scanf("%f", &p.mrp);

        printf("Discount(%%) : ");
        scanf("%f", &p.discount);

        p.sellingPrice = p.mrp - (p.mrp * p.discount / 100);
        p.amount = p.sellingPrice * p.qty;

        fwrite(&p, sizeof(struct Product), 1, fp);
    }

    fclose(fp);

    fp = fopen("products.dat", "rb");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 0;
    }

    printf("\n==============================================================\n");
    printf("ID\tProduct\tBrand\tSize\tQty\tMRP\tDisc\tPrice\tAmount\n");
    printf("==============================================================\n");

    while(fread(&p, sizeof(struct Product), 1, fp))
    {
        printf("%d\t%s\t%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",
               p.id,
               p.name,
               p.brand,
               p.size,
               p.qty,
               p.mrp,
               p.discount,
               p.sellingPrice,
               p.amount);

        subtotal += p.amount;
    }

    fclose(fp);

    gst = subtotal * 0.10;
    total = subtotal + gst;

    printf("==============================================================\n");
    printf("Subtotal        : %.2f\n", subtotal);
    printf("GST (10%%)       : %.2f\n", gst);
    printf("Grand Total     : %.2f\n", total);
    printf("==============================================================\n");
    printf("Store Name      : Reliance Trends\n");
    printf("Invoice No.     : RT2026001\n");
    printf("Payment Mode    : Cash\n");
    printf("Customer Type   : Retail\n");
    printf("==============================================================\n");
    printf("      THANK YOU FOR SHOPPING WITH US!\n");
    printf("==============================================================\n");

    return 0;
} 
/*=================================================
              TRENDS STORE
                TAX INVOICE
=================================================
Enter Number of Products : 3

Enter Details of Product 1
Product ID : 101
Product Name : Jeans
Brand : Levis
Size : M
Quantity : 2
MRP : 2000
Discount(%) : 20

Enter Details of Product 2
Product ID : 102
Product Name : Tshurt
Brand : Nike
Size : L
Quantity : 3
MRP : 1000
Discount(%) : 10

Enter Details of Product 3
Product ID : 103
Product Name : Shoes
Brand : Puma
Size : 8
Quantity : 1
MRP : 3500
Discount(%) : 15

==============================================================
ID      Product Brand   Size    Qty     MRP     Disc    Price   Amount
==============================================================
101     Jeans   Levis   M       2       2000.00 20.00   1600.00 3200.00
102     Tshurt  Nike    L       3       1000.00 10.00   900.00  2700.00
103     Shoes   Puma    8       1       3500.00 15.00   2975.00 2975.00
==============================================================
Subtotal        : 8875.00
GST (10%)       : 887.50
Grand Total     : 9762.50
==============================================================
Store Name      : Reliance Trends
Invoice No.     : RT2026001
Payment Mode    : Cash
Customer Type   : Retail
==============================================================
      THANK YOU FOR SHOPPING WITH US!
==============================================================*/