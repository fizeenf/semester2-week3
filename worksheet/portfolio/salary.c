
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Fizeen Farooq
 * ID: 201877255
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    double salary = 36250.0;
    double ni_rate = 0.08;
    double tax_rate = 0.15;

    // calculate the deductions and final take-home salary
    double ni_contributions = salary * ni_rate;
    double salary_after_NI = salary - ni_contributions; 

    double taxable_amount = 0.0;
    if (salary_after_NI > 12500.0 ) {
      taxable_amount = salary_after_NI  - 12500.0;
    }

    double tax_contributions = taxable_amount * tax_rate;
    double take_home = salary - ni_contributions - tax_contributions;
    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);

    printf("Salary £ % .2f\n", salary);
    printf("NI contribution £ % .2f\n", ni_contributions);
    printf("Tax contribution £ % .2f\n", tax_contributions);
    printf("Take home salary £ % .2f\n", take_home);

    return 0;
 }