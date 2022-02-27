#include <iostream>
#include <string>

int main()
// Integer Types
{
  /*   // Braced Initializers
    int elephant_count; // Variable may contain random garbage value WARNING
    std::cout << "Elephant count : " << elephant_count << std::endl;

    int lion_count{}; // Inits to zero
    std::cout << "Lion count : " << lion_count << std::endl;

    int dog_count{10}; // Inits to 10
    std::cout << "dog count : " << dog_count << std::endl;

    int cat_count{15}; // Inits to 15
    std::cout << "Cat count : " << cat_count << std::endl;

    // Can use an expression as initializer
    int domesticated_animals{dog_count + cat_count};
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl; */

  // Functional Initialization
  int apple_count(5);
  int orange_count(10);

  int fruit_count(apple_count + orange_count);

  // Information lost. Less safe than braced inits
  int narrowing_conversion_functional(2.9);

  std::cout << "Apple count : " << apple_count << std::endl;
  std::cout << "Orange count : " << orange_count << std::endl;
  std::cout << "Fruit count : " << fruit_count << std::endl;
  std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl;
}