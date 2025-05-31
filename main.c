#include <stdio.h>

// Global constants
#define INTEREST_RATE 0.08
#define DISCOUNT_RATE 0.10
#define USD_RATE 3500
#define BONUS_PERCENTAGE 0.05
#define TAX_RATE 0.18

// Global variables
double principal, time, price, salary;

int main() {
    // 1. Simple Interest
    principal = 100000.0;
    time = 2.0;
    double simpleInterest = principal * time * INTEREST_RATE;
    printf("1. Simple Interest: %.2lf\n", simpleInterest);

    // 2. Discounted Price
    price = 50000.0;
    double discount = DISCOUNT_RATE * price;
    double discountedPrice = price - discount;
    printf("2. Discounted Price: %.2lf\n", discountedPrice);

    // 3. Currency Exchange
    double usdNeeded = 700.0;
    double ugsToPay = usdNeeded * USD_RATE;
    printf("3. UGX needed for 700 USD: %.2lf\n", ugsToPay);

    // 4. Bonus
    salary = 1200000.0;
    double bonus = BONUS_PERCENTAGE * salary;
    printf("4. Employee Bonus: %.2lf\n", bonus);

    // 5. Total Cost with Tax
    price = 30000.0;
    double tax = TAX_RATE * price;
    double totalCost = price + tax;
    printf("5. Total Cost with Tax: %.2lf\n", totalCost);

    return 0;
}

Add C program for all 5 tasks
