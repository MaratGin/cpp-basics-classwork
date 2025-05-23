#include <iostream>

int main() {

  int a = 3;

  // указатель
  int* pointer_to_a = &a;  // указатель на 'a'

  // ссылка: ссылка & на int
  int& reference_to_a = a;

  // Ссылка - это почти указатель, но удобнее.
  // Различия:
  // 1. Ссылка - это alias (псевдоним) переменной.
  // 2. Не нужно использовать оператор разыменования * для получения доступа к данным по ссылке.
  // 3. Ссылка является неизменяемым типом данных, ее сразу необходимо инициализировать (нет nullptr).

  // 1. Чтение данных по ссылке.
  int var = reference_to_a;  // эквивалентно: int var = *pointer_to_a

  // 2. Запись данных по ссылке.
  reference_to_a = 5;  // эквивалентно: *pointer_to_a = 5

  int a = 10;
  int& ref = a;

  int b = 10;
  int* ptr = &a;

  return 0;
}

/*
 * Задания:
 * 1. Можно ли изменить участок памяти, на который ссылается ссылка?
 * A: нет, она неизменяема
 * 2. Опишите ситуацию, когда использование ссылки целесообразно.
 * A: Например, когда нужно передать аргумент в функцию без копирования
 * 3. В чем разница между & слева и справа от знака =? int& = ... vs. ... = &var
 * A: & СЛЕВА  — объявление ссылки
 *    & СПРАВА - взятие адреса (указатель)
 */