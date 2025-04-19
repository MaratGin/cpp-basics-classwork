// Исходный код программы на С++.

#include <iostream>

int main() {

  // 1. for loop

  // Python: for i in range(5) ...
  for (int i = 0; i < 5; i++) {
    if (i == 1) {
      continue;  // оператор "пропуска итерации"
    }

    if (i == 3) {
      break;  // оператор "выхода из цикла"
    }
  }

  // 2. while loop

  int i = 5;

  while (i > 0) {
    i -= 1;  // "i = i - 1"
  }

  for (int i = 0; i <= 10; i += 2) {
    std::cout << i << " ";
  }

  for (int i = 5; i >= 0; --i) {
    std::cout << i << " ";
  }

  for (int i = 0; i < 100 && i % 5 != 0; ++i) {
    std::cout << i << " ";
  }
  
  return 0;
}

/*
 * Задания:
 * 1. Как реализовать убывающий for-loop (от 5 до 0)?
 * A:     for (int i = 5; i >= 0; --i) {
 *           std::cout << i << " ";
 *         }
 * 2. Как реализовать for-loop с шагом индекса в 2 или 3?
 * A:        for (int i = 0; i <= 10; i += 2) {
 *           std::cout << i << " ";
 *          }
 * 3. Можно ли написать более сложное (составное) условие выхода из цикла?
 * A: Да, например:  for (int i = 0; i < 100 && i % 5 != 0; ++i) {
                          std::cout << i << " ";
                      }
 */