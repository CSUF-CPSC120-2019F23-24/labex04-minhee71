// Name: Peter Choi
// Sales prediction

#include <iostream>

int main ()
{
  // Defining the variables.
  long long predicted_sales, total_increase;
  const int PRIOR_SALES_TOTAL = 2103419277;
  const float PERCENT_INCREASE = .18;

  // Calculating the current year-to-date sales.
  total_increase = PRIOR_SALES_TOTAL * PERCENT_INCREASE;
  predicted_sales = total_increase + PRIOR_SALES_TOTAL;

  // Output of the results.
  std::cout << "Last year\'s sales were $" << PRIOR_SALES_TOTAL << std::endl;
  std::cout << "This years\'s sales prediction: $" << predicted_sales << std::endl << std::endl;

  return 0;
}
