#include <stdio.h>
#include <stdlib.h>
#ifndef METODOS_H
#define METODOS_H

typedef struct {
    long long int comparacoes;
    long long int trocas;
} Contagem;

Contagem BubbleSort(int vetor[], int size);
Contagem InsertionSort(int vetor[], int size);
Contagem SelectionSort(int vetor[], int size);
Contagem MergeSort(int vetor[], int inicio, int fim, int size);
Contagem intercala(int vetor[], int inicio, int fim, int meio, int size);
Contagem QuickSort(int vetor[], int inicio, int fim);
Contagem particao(int vetor[], int inicio, int fim);

#endif // METODOS_H
