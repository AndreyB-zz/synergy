//
//  main.cpp
//  More or less
//
//  Created by Andrey Babichev on 25.02.2023.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int num_a;
    int num_b;
    
    std::cout << "Введите первое число\n";
    scanf("%i", &num_a);
    std::cout << "Введите второе число\n";
    scanf("%i", &num_b);
    if (num_a > num_b) {
        printf("Больше\n");
    } else if (num_a < num_b) {
        printf("Меньше\n");
    } else {
        printf("Равны\n");
    }
    
    return 0;
}
