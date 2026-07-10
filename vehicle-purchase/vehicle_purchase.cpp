#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    if (kind == "car" || "truck"){
        return true;
    }else{
        return false;  
    }
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    int result = option1.compare(option2);
    
    if (result < 0){
        return option1 + "is clearly the better choice";
    }else{
        return option2 + "is clearly the better choice";
    }
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    double finalPrice;
    if (age < 3){
        finalPrice = original_price * (1 - 0.2);
    }else if(age >= 3 && age < 10){
        finalPrice = original_price * (1 - 0.3);
    }else{
        finalPrice = original_price * (1 - 0.5);
    }
    return finalPrice;
}
}
