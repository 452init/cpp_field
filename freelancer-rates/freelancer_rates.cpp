// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
		constexp int billable_work_day_hours = 8;
  	return hourly_rate * billable_work_day_hours;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    return before_discount - (before_discount * (discount/100));
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
	double val = (hourly_rate - (hourly_rate * (discount/100.0)))*176;
	int round = (int)val;

	if (val > round){
		round++;
	}
	return round;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
	int result = (int)(budget/(hourly_rate - (hourly_rate * (discount/100))))/8;
	return result;
}
