#include <stdio.h>
#include <stdlib.h> // підключення бібліотек 
#include <clocale>

int main() {
	setlocale(LC_ALL, "ukr");// встановлення української локалізації
    int N;
    printf("Ввведiть розмiр масиву: ");// визначення розміру масиву
    scanf_s("%d", &N);

    // виділення динамічної пам'яті для масиву
    int* array = (int*)malloc(N * sizeof(int));

    // заповнення масиву 
    printf("Введiть елементи масиву:\n");
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &array[i]);
    }
    double p=1; // пошук елементів з парним індексом та їх добуток
    for (int i = 0; i < N; i++) {
        if (i % 2 == 1) {
            p *= array[i];
        }
    } 
    // вивід результатів
    printf("Добуток елементiв з парними нормерами: %.1lf", p);
    double first = -1, last = -1; // оголошення змінних для індексів нулів
    // пошук нульвих елементів
    for (int i = 0; i < N; i++) {
        if (array[i] == 0) {
            if (first == -1) {
                first = i;
            }
            else {
                last = i;
            }
        }
        
    }

   // пошук суми між нульвими елементами
    double sum=0;
    for (int i = first+1; i < last; i++) {
        sum += array[i];
    }
    //виведення результату 
    printf("Сума мiж нулями: %.1lf", sum);
    free(array);  // Звільнення динамічної пам'яті

        }
  


   

