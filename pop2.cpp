#include <fstream>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int sum (int num) {
int s = 0; 
if (num < 0) num = -num;
cout << num << endl;
while (num > 0)
{  
    s = s + num % 10;
    num = floor(num/10);
} return s;
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int length;
    fin >> length;
    
    int array[length];
    for (int i = 0; i <length;i++){
        int cushFromAfghanistan;
        fin >> cushFromAfghanistan;
        array[i] = cushFromAfghanistan;
    }
    for (int i = 0; i < length; i++) {
        int j = 0, k = 1;
        for (int i = 0; i < length-1;i++) {
            if (sum(array[j]) > sum(array[k])) {
                swap(array[j], array[k]);
                } else if ((sum(array[j]) == sum(array[k])) && array[j] > array[k]) swap(array[j], array[k]);
            j++;
            k++;
        }
    }
    for (int i = 0;i < length;i++) fout << array[i] << ' ';
    
    system("pause");
}
