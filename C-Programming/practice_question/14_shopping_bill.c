#include <stdio.h>
int main()
{
    int item_1,item_2,item_3,amount_paidd,MRP,customer_paid;
    float discount,net_amount,change;
    printf("Enter price of the 3 items you bought:  ");
    scanf("%d %d %d",&item_1,&item_2,&item_3);

    MRP=item_1+item_2+item_3;
    discount=(MRP/100)*20;
    net_amount=(MRP-discount);
    customer_paid=MRP;
    change=MRP-net_amount;

    printf("MRP %d \n",MRP);
    printf("Discount %f \n",discount);
    printf("Net Amount %f \n",net_amount);
    printf("Customer Paid : %d \n",customer_paid);
    printf("Change : %f \n", change);
    
    return 0;





}