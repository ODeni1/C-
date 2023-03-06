#include <iostream>

/* 1. Returning value

    double square(double length);
    double cube(double length);

    int main(){
        double length = 6.0;
        double area = square(length);
        double cube = square(length);

        std::cout << "Area is: " << area << "cm^2\n";
        std::cout << "Volume is: " << volume << "cm^3\n";

        return 0;
    }
        double square(double length){
            return length * length;
        }
        double cube(double length){
            return length * length * length;
        }
*/

/* 2. Concatenating strings

    std::string concatStrings(std::string string1, std::string string2);

    int main() {
        std::string firstName = "Denisa";
        std::string lastName = "Balinisteanu";
        std::string fullName = concatStrings(firstName, lastName);

            std::cout << "Hello " << fullName;

        return 0;
    }

    std::string concatStrings(std::string string1, std::string string2){
        return string1 + " " + string2;
    }

*/

/* 3. Overload functions

    void bakePizza();
    void bakePizza(std::string topping1);
    void bakePizza(std::string topping1, std::string topping2);


    int main(){
        bekePizza("pepperoni", "mozzarela");
        return 0;
    }

    void bakePizza(){
        std::cout << "Here is your pizza!\n";
    }

    void bakePizza(std::string topping1){
        std::cout << "Here is your " << toping1 << "pizza" << '\n';
    }

    void bakePizza(std::string topping1, std::string topping2){
        std::cout << "Here is your " << toping1 << "and" << topping2 << "pizza" << '\n';
    }
*/