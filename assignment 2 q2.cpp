#include <iostream>
using namespace std;

int A[7] = {64, 34, 25, 12, 22, 11, 90};

void Bub_Sort()
{
    
      for (int i = 0; i < 6; i++)
      {
          for(int j = 0; j<6-i; j++){
                if (A[j] > A[j + 1])
                {
                          int swap;
                          swap = A[j];
                          A[j] = A[j + 1];
                          A[j + 1] = swap;
                }
      }
    }
}

void ShowArr()
{
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "original array\n";
    ShowArr();
    Bub_Sort();
    cout << "sorted array\n";
    ShowArr();
}