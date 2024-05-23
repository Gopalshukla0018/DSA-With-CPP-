#include <iostream>
using namespace std;

int findmax(int arr[], int size)
{

   int maxvalue = arr[0];
   for (int i = 1; i < size; i++)

   {
      if (arr[i] > maxvalue)
      {
         maxvalue = arr[i];
      }
   }
   return maxvalue;
}
int findmin(int arr[], int size)
{

   int minvalue = arr[0];
   for (int i = 1; i < size; i++)

   {
      if (arr[i] < minvalue)
      {
         minvalue = arr[i];
      }
   }
   return minvalue;
}

int main()
{
   int arr[10] = {1, 12, 19, 12, 1, 1, 12, 19, -20, -20};
   int size = sizeof(arr) / sizeof(arr[0]);
   int minvalue = findmin(arr, size);
   int maxvalue = findmax(arr, size);
   int tempsize = maxvalue - minvalue + 1;
   int temparr[tempsize];
   for (int i = 0; i < tempsize; i++)
   {
      temparr[i] = 0;
   }

   for (int i = 0; i < size; i++)
   {
      temparr[arr[i] - minvalue]++;
   }
   for (int i = 0; i < tempsize; i++)
   {
      if (temparr[i] == 2)
      {
         cout << "unique element is: " << i + minvalue << endl;
         break;
      }
   }

   return 0;
}
