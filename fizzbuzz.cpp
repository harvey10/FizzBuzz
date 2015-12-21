//Output prints int STDOUT numbers 1 to 100 but for numbers divisible by 3 prints "Fizz", numbers divisible by 5 prints "Buzz", and numbers divisible
//   by 3 and 5 prints "FizzBuzz".

#include <iostream>

int main() {
  for (int i = 1; i <= 100; i++) { //Numbers 1 to 100
    if ((i%5 == 0) && (i%3 == 0)) //Divisible by both 3 and 5
      std::cout << " FizzBuzz ";
    else if (i%3 == 0) //Divisible by 3
      std::cout << " Fizz ";
    else if (i%5 == 0) //Divisible by 5
      std::cout << " Buzz ";
    else //Not divisible by 3 or 5
      std::cout << " " << i << " ";
  }
  return 0;
}
