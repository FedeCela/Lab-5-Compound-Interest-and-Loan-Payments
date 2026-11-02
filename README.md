# Lab-5-Compound-Interest-and-Loan-Payments

# Plan Before Coding
# Program 1: Compound Interest

My program will asks the user to enter the principal balance follow by the annual interest rate and number of times interest is compounded per year.

The program will divide the interest rate by 100 to convert it into decimal form then, I will used the pow function to calculate the final savings amount.

Then the program calculates the interest earned by subtracting the principal from the final amount.

The results displayed are the interest rate, number of compounding periods, principal, interest earned, and final amount in savings.

# Program 2: loan payment
my second code will ask the user to enter the loan amount, annual interest rate as a percentage, and number of monthly payments.

Then the program will convert the annual interest rate from a percentage to a decimal and divide it by 100 and by 12 to get the monthly interest rate. 

The program than will use the loan payment formula to calculate the monthly payment and store the result in a variable. 

After that the program will calculate the total amount paid back and the total interest paid.

Finally the program will display the loan information and the results with two decimal places so the money amounts are easy to read.


# Test Results
After running the code Compound Interest withe the values of $1,000 principal, 4.25% annual interest, compounded 12 times per year I got the result of
Annual interest rate:    4.25%
Times compounded:        12
Principal:               $1000.00
Interest earned:         $43.34
Amount in savings:       $1043.34

After running the code Compound Interest withe my  values of $1,000 principal, 5.96% annual interest, compounded 6 times per year I got the result of
Annual interest rate:    5.96%
Times compounded:        6
Principal:               $1000.00
Interest earned:         $61.10
Amount in savings:       $1061.10

After running the code loan payment with the values of $10000 loan amount, 12% annual interest rate and 36 for monthly payment my result was
Loan amount:             $10000.00
Monthly interest rate:   1.00%
Number of payments:      36
Monthly payment:         $332.14
Amount paid back:        $11957.15
Interest paid:           $1957.15

After running the code loan payment with my values of $539 loan amount, 81.10% annual interest rate and 5 for monthly payment, my result was
Loan amount:             $539.00
Monthly interest rate:   6.76%
Number of payments:      5
Monthly payment:         $130.61
Amount paid back:        $653.04
Interest paid:           $114.04

# Why must a percentage be divided by 100 before using it in a formula?
by dividing by 100 we change the result from a percentage to a decimal and that's what we are looking for in this monetary situation

# How does pow represent exponentiation?
The pow function raises a number to a power. In C++, pow(base, exponent) raises the base number to the exponent. In my loan payment program, I use pow(1.0 + monthly_rate, number_of_payments) to calculate the interest factor over the total number of monthly payments.

# What does the number of compounding periods change in the savings formula?
The number of compounding periods changes how often interest is added to the principal in the savings formula. When interest is compounded more frequently, interest is added more often, which can result in a higher final amount in savings.
 
# How is an annual interest rate converted to a monthly rate?
An annual interest rate is converted to a monthly rate by first dividing the percentage by 100 to convert it into a decimal, and then dividing it by 12 to get the monthly interest rate.

# Why should double be used for these calculations?
The double data type should be used for these calculations because it can store decimal numbers. Interest rates, monthly payments, and interest amounts can include decimals, so using double helps make the calculations more accurate than using int that stores whole numbers.

# Why should calculations use full precision when money is displayed to two decimal places?
like this you can have a more precise result to the hundreds decimal point which is equal to cents.

# How are the amount paid back and total interest calculated?
The total interest paid is calculated by subtracting the original loan amount from the amount paid back. These calculations show how much money is paid in total and how much of that money goes toward interest.

# Why are calculations stored in variables before being displayed?
calculations are store in variables because if they need to be use for a second calculation the answer of the first equation is done already and its easier to display in on the final result of the program.
