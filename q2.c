#include<stdio.h>

int main()
{
    int hr;
    int salary;
    int rate;
    int tax;
    int netsalary;
    
    printf("Enter the No Of Hours: ");
    scanf("%d", &hr);
    
    printf("Enter the rate per hour: ");
    scanf("%d", &rate);
    
    salary = hr*rate;
    tax = salary * 0.1;
    netsalary = salary - tax;
    printf("\nSalary: %d", salary);
    printf("\nTax: %d", tax);
    printf("\nTax: %d", netsalary);
    
    return 0;
}
