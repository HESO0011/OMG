

void Shellsort(int* arr, int size)
{
    int step = size / 2;

    while (step != 0) 
    {
        // Сортируем группы элементов отстоящих друг от друга на значение шага 
        for (int i = step; i < size; ++i) {
            int tmp = arr[i];
            int j;

            for (j = i - step; j >= 0 && arr[j] > tmp; j -= step)
                arr[j + step] = arr[j];

            arr[j + step] = tmp;
        }
        step /= 2;
    }
}