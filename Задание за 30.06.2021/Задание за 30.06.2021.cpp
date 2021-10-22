// Задание за 30.06.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
//1. Поиск минимума:
int minArray(const int array[], size_t size)
{
    int min = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (min > array[i])
            min = array[i];
    }
    return min;
}
//2. Поиск максимума:
int maxArray(const int array[], size_t size)
{
    int max = array[0];
    for (size_t i = 0; i < size; ++i)
    {
        if (max < array[i])
            max = array[i];
    }
    return max;
}
//3. Поиск суммы элементов массива: 
int summaArray(const int array[], size_t size)
{
    int summa = 0;
    for (size_t i = 0; i < size; ++i)
       summa += array[i];
    return summa;
}
//4. Поиск произведения массива:
int multiplicationArray(const int array[], size_t size)
{
    int multiplication = 1;
    for (size_t i = 0; i < size; ++i)
        multiplication *= array[i];
    return multiplication;
}

//5. Поиск индекса заданного элемента в массиве, если такого элемента в массиве нет то возвращать -1
int indexArray(int array[], size_t size, int number)
{
        int index = -1;
    for (size_t i = 0; i < size; i++)

        if (array[i] == number)
            return 1;  
        else
    return index;
}

//6. Проверка наличия элемента в массиве. Возвращает true, если элемент в массиве есть, false – нет.
bool chekElement(int array[], size_t size, int value)
{
 
    for (int i = 0; i < size; i++)
    {
    if (array[i])   
        return true;
    else     
       return false;    
    }

}
 
//7. Печать массива на экран:
void printArray(int array[], size_t size)
{
    for (size_t i = 0; i < size; ++i)    
        cout << array[i] << " ";
        cout << endl;
}

//8. Среднее арифметическое элеметов массива:
int SredAmassiv(int array[], size_t size)
{
    int summa = 0;
    for (size_t i = 0; i < size; ++i)
        summa += array[i];
    return summa/ size;
   }

//9. Подсчёт количества отрицательных элементов массива.
int minusArray(int array[], size_t size)
{
    
    int sumMinus = 0;
    for (size_t i = 0; i < size; i++)
    {      
      if (array[i] < 0)
      sumMinus += array[i];       
    }
    return sumMinus;
}

//10.Подсчёт количества вхождений элемента в массив:
int pArray(int array[], size_t size)
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i])
            count += 1;
    }
    return count;
}

//11. Подсчёт количества чётных элементов в массив:
int pChetArray(int array[], size_t size)
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i]%2==0)
            count += 1;
    }
    return count;
}
//12. Подсчёт количества положительных элементов в массиве:
int pPlusArray(int array[], size_t size)
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i]>=0)
            count += 1;
    }
    return count;
}
//13. Подсчёт количества нечётных элементов в массиве:
int pNechetArray(int array[], size_t size)
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i]%2!=0)
            count += 1;
    }
    return count;
}

//14. Проверка является ли массив отсортированным по возрастанию.Если массив отсортирован, то возвращать true, иначе - false.:
bool pOtsortirovan (int array[], size_t size)
{
    for (int i = 0; i < size - 1; i++) 
    {
        if (array[i] > array[i + 1]) 
        {
            return false;
        }
    }
    return true;
}




//II.
//1. Функцию, которая вычисляет число a в степени n
long long int pow(int z, unsigned short int n)
{
    return n == 0 ? 1 : z * pow(z, n - 1);
}
//2. Функцию, которая вычисляет факториал числа n
long long int factorial(unsigned short int   n)
{
    return n <= 1 ? 1 : n * factorial(n - 1);
}

//3. Функцию, которая вычисляет сумму цифр произвольного целого числа n
int sumNumber(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

//4. Функцию, которая проверяет является ли заданное число n полиндромом:
bool IsPalindrome(int number)
{
    int n = 0;
    int temp = number;
    while (temp != 0) {
        n = 10 * n + temp % 10;
        temp /= 10;
    }
    if (number == n)
        return true;
    else
        return false;
}

//5. Функцию, складывающую два целых числа:
int sumNumbers(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}
 
//6. Функцию, определяющую является ли число простым, то есть возвращающую true, если число простое, иначе - false
bool IsPrime(int number)
{
    for (size_t i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

//7. Функцию, определяющую является ли число чётным, то есть возвращающую true, если число чётное, иначе - false
bool chet(int n)
{
        if (n % 2 == 0)
            
    return true;
        return false;
}

int main()
{
   



    srand(time(NULL));
    unsigned const int size = 5;
    int array[size];
    //7. Печать массива на экран
    for (size_t i = 0; i < size; ++i)
        array[i] = rand() % 10 - 5;
    cout << "Your massiv: " << endl;
    printArray(array,size);
    
   // //1. Поиск минимума.
    int min = minArray(array,size);
    cout << "Minimum value in massiv: " << min << endl;
    printArray(array, size);

   // //2. Поиск максимума.
    int max = maxArray(array, size);
    cout << "Maximum value in massiv: " << max << endl;
    printArray(array, size);

   // //3. Поиск суммы элементов массива
    int summa = summaArray(array, size);
    cout << "Summa value in massiv: " << summa << endl;
    printArray(array, size);

   // //4. Поиск произведения элементов массива
    int multiplication = multiplicationArray(array, size);
    cout << "Multiplication value in massiv: " << multiplication << endl;
    printArray(array, size);

   // //5. Поиск индекса заданного элемента в массиве, если такого элемента в массиве нет то возвращать - 1
    int number;
    cout << "Enter number for search: ";
    cin >> number;
    cout << endl;
    int index = indexArray(array, size, number);
    cout << "Index array value in massiv: " << index << endl;
    printArray(array, size);
   // //6. Проверка наличия элемента в массиве. Возвращает true, если элемент в массиве есть, false – нет.
    int value;
    cout << "Enter the elements for cheking: " << endl;
    cin >> value;
    int cE = chekElement(array, size,value);
    cout << cE << endl;
    printArray(array, size);

   // //8. Среднее арифметическое элеметов массива:
    int srA = SredAmassiv(array, size);
    cout << "Srednee arifmeticheskoe massiva: " << srA<< endl;
    printArray(array, size);

   // //9. Подсчёт количества отрицательных элементов массива
    int minus = minusArray(array, size);
    cout << "Summa minus array array value in massiv: " << minus << endl;
    printArray(array, size);

   // //10.Подсчёт количества вхождений элемента в массив:
    cout << "Kolichestvo vhojdeniy elementov to massiv:" << pArray(array, size) << endl;
    printArray(array, size);

   // //11. Подсчёт количества чётных элементов в массив:
    cout << "Kolichestvo vhojdeniy chetnyh elementov to massiv:" << pChetArray(array, size) << endl;
    printArray(array, size);

   // //12. Подсчёт количества положительных элементов в массиве:
    cout << "Kolichestvo vhojdeniy + elementov to massiv:" << pPlusArray(array, size) << endl;
    printArray(array, size);

   // //13. Подсчёт количества нечётных элементов в массиве:
    cout << "Kolichestvo vhojdeniy don't chet elementov to massiv:" << pNechetArray(array, size) << endl;
    printArray(array, size);

    //14. Проверка является ли массив отсортированным по возрастанию.Если массив отсортирован, то возвращать true, иначе - false.:
    cout << "Otsortirovan massiv:" << pOtsortirovan(array, size) << endl;
    printArray(array, size);
    

   // //1. Функцию, которая вычисляет число a в степени n
    int a;
    unsigned short int e;
    cout << "Enter your number: " << endl;
    cin >> a;
    cout << "Enter your number pow: " << endl;
    cin >> e;
    cout << "Your pow number: " << pow(a, e) << endl;

    //2. Функцию, которая вычисляет факториал числа n
    unsigned int n;
    cout << "Enter your number for factorial: " << endl;
    cin >> n;
    cout << "Your factorial: " << factorial(n) << endl;

    ////3. Функцию, которая вычисляет сумму цифр произвольного целого числа n
    unsigned int b;
    cout << "Enter your number for Sum number: " << endl;
    cin >> b;
    cout << "Your sum number: " << sumNumber(b) << endl;

    //4. Функцию, которая проверяет является ли заданное число n полиндромом:
    int f;
    cout << "Enter your number for polindrom: " << endl;
    cin >> f;
    cout << "Your polindrom number: " << IsPalindrome(f) << endl;

    //5. Функцию, складывающую два целых числа:
    int s = 0, d = 0;
    cout << "Enter your number for a+b: " << endl;
    cin >> s >> d;
    cout << "Your summa number: "<<sumNumbers(s, d)<<endl;
  
     
    //6. Функцию, определяющую является ли число простым, то есть возвращающую true, если число простое, иначе - false
    unsigned int p;
    cout << "Enter your number for prostoe: " << endl;
    cin >> p;
    cout << "Your prostoe number: " << IsPrime(p) << endl;
   // //7. Функцию, определяющую является ли число чётным, то есть возвращающую true, если число чётное, иначе - false
    unsigned int h;
    cout << "Enter your number for chet: " << endl;
    cin >> h;
    cout << "Your chet number: " << chet(h) << endl;\

    return 0;
}