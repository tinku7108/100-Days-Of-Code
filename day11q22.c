#include <stdio.h>

int main() {
    float cost_price, selling_price;
    float profit_percent, loss_percent;
    printf("Enter cost price: ");
    scanf("%f", &cost_price);

    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    profit_percent = ((selling_price - cost_price) / cost_price) * 100.0;
    loss_percent = ((cost_price - selling_price) / cost_price) * 100.0;

    printf("Total profit = %.2f\n ", profit_percent);
    printf("Total loss = %.2f\n ", loss_percent);
    return 0;
}