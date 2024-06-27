#include <stdio.h>

#define MAX_EMPLOYEES 5

int main() {
    char names[MAX_EMPLOYEES][50];
    float hourly_rates[MAX_EMPLOYEES];
    float hours_worked[MAX_EMPLOYEES];
    int num_employees = 0;

    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Enter name: ");
        scanf("%s", names[i]);

        if (names[i][0] == '-' && names[i][1] == '1') {
            break; 
        }

        printf("Enter hourly rate: ");
        scanf("%f", &hourly_rates[i]);

        if (hourly_rates[i] == -1) {
            break; 
        }

        printf("Enter hours worked: ");
        scanf("%f", &hours_worked[i]);

        if (hours_worked[i] == -1) {
            break; 
        }

        num_employees++;
    }

    for (int i = 0; i < num_employees; i++) {
        printf("\nPay to: %s\n", names[i]);
        printf("Hours worked:                %.1f\n", hours_worked[i]);
        printf("Hourly rate:                 $%7.2f\n", hourly_rates[i]);

        float gross_pay = hourly_rates[i] * hours_worked[i];
        printf("Gross pay:                  $%7.2f\n", gross_pay);

        float base_pay = (hours_worked[i] <= 40) ? gross_pay : (40 * hourly_rates[i]);
        printf("Base pay:                   $%7.2f\n", base_pay);

        float overtime_pay = (hours_worked[i] <= 40) ? 0 : ((hours_worked[i] - 40) * hourly_rates[i] * 1.5);
        printf("Overtime pay:               $%7.2f\n", overtime_pay);

        float taxes_paid = gross_pay * 0.20; 
        printf("Taxes paid:                 $%7.2f\n", taxes_paid);

        float net_pay = gross_pay - taxes_paid;
        printf("Net pay:                    $%7.2f\n", net_pay);

        printf("\n");
    }

    return 0;
}
