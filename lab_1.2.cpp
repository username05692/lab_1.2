#include <stdio.h>
#include <stdlib.h> // ���������� ������� 
#include <clocale>

int main() {
	setlocale(LC_ALL, "ukr");// ������������ ��������� ����������
    int N;
    printf("�����i�� ����i� ������: ");// ���������� ������ ������
    scanf_s("%d", &N);

    // �������� �������� ���'�� ��� ������
    int* array = (int*)malloc(N * sizeof(int));

    // ���������� ������ 
    printf("����i�� �������� ������:\n");
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &array[i]);
    }
    double p=1; // ����� �������� � ������ �������� �� �� �������
    for (int i = 0; i < N; i++) {
        if (i % 2 == 1) {
            p *= array[i];
        }
    } 
    // ���� ����������
    printf("������� �������i� � ������� ���������: %.1lf", p);
    double first = -1, last = -1; // ���������� ������ ��� ������� ����
    // ����� ������� ��������
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

   // ����� ���� �� �������� ����������
    double sum=0;
    for (int i = first+1; i < last; i++) {
        sum += array[i];
    }
    //��������� ���������� 
    printf("���� �i� ������: %.1lf", sum);
    free(array);  // ��������� �������� ���'��

        }
  


   

