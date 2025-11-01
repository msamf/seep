#include <iostream>
#include "MexicanRestaurant.hpp"
#include "JapaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
    cout << "Testing Restaurant Inheritance Hierarchy:" << endl;

    MexicanRestaurant laCasa("La Casa", "123 Spice Lane", 4
    );
    JapaneseRestaurant sakura("Sakura", "456 Sushi Road", true);

    MexicanJapaneseFusion fusionFiesta("Fusion Fiesta", "789 Fusion Ave", 3, true); 

    // test inheritance hierarchy
    laCasa.displayInfo();
    laCasa.describeCuisine();
    std::cout << std::endl; 

    sakura.displayInfo();
    sakura.describeCuisine();
    std::cout << std::endl; 

    fusionFiesta.displayInfo();
    fusionFiesta.describeCuisine();
    fusionFiesta.displaySpecialty(); 
    std::cout << std::endl; 

    // add items to the menu
    laCasa.addMenuItem(MenuItem("Tacos", 8.99)); 
    laCasa.addMenuItem(MenuItem("Enchiladas", 12.99)); 
    laCasa.displayMenu(); 
    std::cout << endl; 

    sakura.addMenuItem(MenuItem("Sushi Roll", 14.99)); 
    sakura.addMenuItem(MenuItem("Ramen", 11.99)); 
    sakura.addMenuItem(MenuItem("Edamame", 3.99)); 
    sakura.displayMenu(); 
    std::cout << endl;

    fusionFiesta.addMenuItem(MenuItem("Sushi Tacos", 15.99)); 
    fusionFiesta.addMenuItem(MenuItem("Wasabi Guacamole", 7.99)); 
    fusionFiesta.displayMenu(); 
    std::cout << endl;

    return 0;
}
