#include <iostream>

using namespace std;


void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int ARRAY_SIZE = 100;
    int numbers[ARRAY_SIZE];

    for (int i=0; i < ARRAY_SIZE; i++){
        numbers[i] = rand() % ARRAY_SIZE;
        cout<<i<<" -> "<<numbers[i]<<endl;
    }

    //Buuble sort
    for (int i=0; i< ARRAY_SIZE; i++) {
        for (int j=0; j< ARRAY_SIZE - 1; j++) {
            if (numbers[j] > numbers[j+1]) {
                swap(&numbers[j], &numbers[j+1]);
            }
        }    
    }

    cout<<"After sorting\n";
    for (int i=0; i < ARRAY_SIZE; i++){
        cout<<i<<" -> "<<numbers[i]<<endl;
    }

    return 0;
}
