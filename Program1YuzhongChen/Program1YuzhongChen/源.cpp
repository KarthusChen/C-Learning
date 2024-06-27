#include <stdio.h>

#define OVERTIME_RATE 1.5
#define TAX_RATE 0.2

typedef struct {
    char name[100];
    double hourlyRate;
    double hoursWorked;
} Employee;

double calculateGrossPay(double hourlyRate, double hoursWorked) {
    double regularPay = hourlyRate * hoursWorked;
    double overtimeHours = hoursWorked - 40.0;
    double overtimePay = 0.0;

    if (overtimeHours > 0) {
        overtimePay = overtimeHours * hourlyRate * OVERTIME_RATE;
        regularPay += overtimePay;
    }

    return regularPay;
}

double calculateTaxes(double grossPay) {
    return grossPay * TAX_RATE;
}

double calculateNetPay(double grossPay, double taxes) {
    return grossPay - taxes;
}

int main() {
    Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", employees[i].name);
        printf("Enter hourly rate: ");
        scanf("%lf", &employees[i].hourlyRate);
        printf("Enter hours worked: ");
        scanf("%lf", &employees[i].hoursWorked);

        printf("\nPay to: %s\n", employees[i].name);
        printf("Hourly rate: $%.2lf\n", employees[i].hourlyRate);
        printf("Hours worked: %.1lf\n", employees[i].hoursWorked);

        double grossPay = calculateGrossPay(employees[i].hourlyRate, employees[i].hoursWorked);
        double taxes = calculateTaxes(grossPay);
        double netPay = calculateNetPay(grossPay, taxes);

        printf("Gross paid: $%.2lf\n", grossPay);
        printf("Taxes paid: $%.2lf\n", taxes);
        printf("Take home: $%.2lf\n\n", netPay);
    }

    return 0;
}