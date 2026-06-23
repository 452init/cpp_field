// INFO: Headers from the standard library should be inserted at the top via
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    constexpr int hours_in_work_day = 8;
    return hourly_rate * hours_in_work_day;
}
// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    constexpr int percentage = 100;
    return before_discount - (before_discount * (discount/percentage));
}
// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    constexpr int work_days_in_month = 22;
    const double discounted_daily_rate =
    apply_discount(daily_rate(hourly_rate), discount);
    return ceil(work_days_in_month * discounted_daily_rate);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    const double discounted_daily = apply_discount(daily_rate(hourly_rate), discount);
    return budget / discounted_daily;
}
