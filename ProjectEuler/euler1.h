#pragma once

/* @brief находит сумму всех чисел меньше value_, кратных 3 или 5
* @param value число до которого(не включительно) проверяются все числа на кратность 3-м или 5-ти
* @param multipies_ массив кратных чисел
* @param size_ кол-во кратных чисел
* @return сумма всех чисел меньше value, кратных массиву кратных
*/
long long Problem_1(const unsigned int value_, const int* multiplies_, const unsigned int size_);

/* @brief находит сумму всех четных элементов ряда Фибоначчи, которые не превышают value
* @param value_ верхняя граница ряда Фибоначчи
* @param fib1(2) числа Фиббоначи
* @return сумма всех четных элементов ряда Фибоначчи, которые не превышают value
*/
unsigned long long Problem_2(value);

/* @brief находит простые числа кратные value_
* @param value_ входное число
* @param delmax_ простое кратное, явл. максимальным
* @param del_ простое кратное, не явл. максимальным
* @return максимальное простое кратное
*/
unsigned long long Problem_3(value);


/* @brief находит cамый большой палиндром, полученный умножением двух двухзначных чисел
* @param larPal_ наибольший палиндром
* @param dig числа перебора
* @param result_ текущее проверяемое
* @return cамый большой палиндром
*/
unsigned int Problem_4(value_);

/* @brief Problem_5 
*Определяет самое маленькое число, которое делится нацело на все числа от 1 до value
* @param value входной параметр, вводится в консоль(нат. число)
* @param number на 0 итеррации = value, каждый цикл прибавляет value, пока не будет делится на все числа от 1 до value
* @param i перебираются все числа от value до 1, на свойство делителя number'a
* @return самое маленькое число, которое делится нацело на все числа от 1 до value
*/
unsigned long long Problem_5(value);


