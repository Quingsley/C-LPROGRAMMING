/*覧覧覧覧覧 INVESTMENT PROBLEM 覧覧覧覧覧*/
#define PERIOD 10
#define PRINCIPAL 5000.00
/*覧覧覧覧覧 MAIN PROGRAM BEGINS 覧覧覧覧覧*/
main()
{ /*覧覧覧覧? DECLARATION STATEMENTS 覧覧覧覧*/
int year;
float amount, value, inrate;
/*覧覧覧覧? ASSIGNMENT STATEMENTS 覧覧覧覧?*/
amount = PRINCIPAL;
inrate = 0.11;
year = 0;
/*覧覧覧覧? COMPUTATION STATEMENTS 覧覧覧覧?*/
/*覧覧覧? COMPUTATION USING While LOOP 覧覧覧覧*/
while(year <= PERIOD)
{
    printf("%2d,%8.2f \n",year, amount);
    value = amount + inrate * amount;
    year = year + 1;
    amount = value;
}
/*覧覧覧覧覧? while LOOP ENDS 覧覧覧覧覧*/
}
/*覧覧覧覧覧覧 PROGRAM ENDS 覧覧覧覧覧*/
