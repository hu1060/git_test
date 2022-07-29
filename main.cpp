#include <QCoreApplication>
#include <iostream>
#include "swap_test.h"
using namespace std;


int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int * arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


//void swap(int num1, int num2)
//{
//    cout << "交换之前:" << num1  << ", " << num2 << endl;
//    int temp;
//    temp = num1;
//    num1 = num2;
//    num2 = temp;
//    cout << "交换之后:" << num1 << ", " << num2 << endl;
//}


int main()
{

/*  基本数据类型   */
//    int a1 = 1;
//    short a2 = 2;
//    long a3 = 3;
//    double a4 = 4;
//    char a5 = 'a';
//    float a6 = 3e2;
//    double a7 = 4e-4;
//    string a8 = "he";

//    cout << a1 << " = " << sizeof(a1) << endl;
//    cout << a2 << " = " << sizeof(a2) << endl;
//    cout << a3 << " = " << sizeof(a3) << endl;
//    cout << a4 << " = " << sizeof(a4) << endl;
//    cout << a5 << " = " << sizeof(a5) << endl;
//    cout << a6 << " = " << sizeof(a6) << endl;
//    cout << a7 << " = " << sizeof(a7) << endl;
//    cout << a8 << " = " << sizeof(a8) << endl;


/*  输入输出   */
//    int b1 = 0;
//    cout << "Input a num :" << endl;
//    cin >> b1;
//    cout << b1 << endl;


/*  if语句   */
//    int score = 0;
//        cout << "input your score:" << endl;
//        cin >> score;

//        if (score > 600)
//        {
//            cout << "yi ben" << endl;

//            if (score > 700)
//            {
//                cout << "beijing " << endl;
//            }
//            else if (score > 650)
//            {
//                cout << "qinhua" << endl;
//            }
//        }
//        else if (score > 500)
//        {
//            cout << "er ben" << endl;
//        }
//        else if (score > 400)
//        {
//            cout << "san ben" << endl;
//        }
//        else
//        {
//            cout << "sorry" << endl;
//        }


/*  if语句的使用   */
//    int num1 = 0;
//    int num2 = 0;
//    int num3 = 0;

//    cout << "input pig 1 : " << endl;
//    cin >> num1;

//    cout << "input pig 2 : " << endl;
//    cin >> num2;

//    cout << "input pig 3 : " << endl;
//    cin >> num3;

//    int c = (num1 > num2 ) ? num1 : num2;
//    cout << c << endl;

//    if (num1 > num2)
//    {
//        if (num1 > num3)
//        {
//            cout << "pig1" << endl;
//        }
//        else
//        {
//            cout << "pig3" << endl;
//        }
//    }
//    else
//    {
//        if (num2 > num3)
//        {
//            cout << "pig2" << endl;
//        }
//        else
//        {
//            cout << "pig3" << endl;
//        }
//    }


/*  switch语句   */
//    int score;
//    cout << "Input a score:" << endl;
//    cin >> score;
//    cout << "socre:" << score << endl;
//    switch(score)
//    {
//    case 10:
//        cout << "nice" << endl;
//        break;

//    case 9:
//        cout << "good" << endl;
//        break;

//    case 8:
//        cout << "888" << endl;
//        break;
//    default :
//        cout << "bad" << endl;
//        break;

//    }



/*  循环语句   */

// 随机数种子，防止每次都生成同样的数
//    srand((unsigned int)time(NULL));
//    int num = rand() % 100 + 1;  // 生成0到100之间的随机数

//    int guess = 0;

//    while( 1 )
//    {
//        cout << "input a num : " << endl;
//        cin >> guess;

//        if(guess == num)
//        {
//            cout << "nice" << endl;
//            break;
//        }
//        else if(guess > num)
//        {
//            cout << "too big" << endl;
//        }
//        else
//        {
//            cout << "too small" << endl;
//        }
//    }


/*  水仙花数   */
//    int n = 100;
//    do
//    {
//        int a = 0;
//        int b = 0;
//        int c = 0;

//        a = n % 10;
//        b = n / 10 % 10;
//        c = n / 100;

//        int sum = a * a * a + b * b * b + c * c * c;
//        if(sum == n)
//        {
//            cout << n << endl;
//        }

//        n++;

//    }while(n < 1000);



//    for (int i = 1; i <= 100; i++)
//    {
//        if (i % 7 == 0 || i % 10 == 7 || i / 10 ==7)
//        {
//            cout << i << " : knock knock" << endl;
//        }
//        else
//        {
//            cout << i << endl;
//        }
//    }

//    for(int i = 0; i < 5; i++)
//    {
//        for(int j = 0; j < 5; j++)
//        {
//            cout << "* ";
//        }
//        cout << endl;
//    }


// 乘法表
//    for (int i = 1; i <= 9 ; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cout << j << "x" << i << " = " << i * j << "  ";
//        }
//        cout << endl;
//    }


/*  数组   */
//    for (int i = 0; i < 4; i++)
//    {
//        cout << a[i] << endl;
//    }

//    int arr[5] = {100, 200, 350, 400, 250};
//    int max = arr[0];
//    int index = 0;

//    for (int i = 1; i < sizeof(arr) / sizeof(*arr); i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//            index = i;
//        }
//    }

//    cout << "index " << index << " is max : " << max << endl;


/*  一维数组的逆置   */
//   int arr[5] = {1, 3, 2, 5, 4};
//   int start = 0;
//   int end = sizeof(arr) / sizeof(*arr) - 1;
//   int temp = 0;

//   while (start < end)
//   {
//       temp = arr[start];
//       arr[start] = arr[end];
//       arr[end] = temp;
//       start++;
//       end--;
//   }

//   for (int i = 0; i < 5; i++)
//   {
//       cout << arr[i] << " ";
//   }

//   cout << endl;



/*  冒泡排序  */
//    int arr[5] = {1,5,3,2,6};

//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 1; j < 5 - i - 1; j++)
//        {

//            if (arr[j] > arr[j+1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }

//        }
//    }

//   for (int i = 0; i < 5; i++)
//   {
//       cout << arr[i] << " ";
//   }

//    cout << endl;



/*  二维数组  */
//    int arr1[2][3] = { {1,2,3}, {4,5,6} };

//    for (int i = 0; i < 2; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            cout << arr1[i][j] << " ";
//        }
//        cout << endl;
//    }

//    cout << "size:" << sizeof (arr1) / sizeof (arr1[0][0]) << endl;
//    cout << "第一行占用内存大小 : " << sizeof (arr1[0]) << endl;
//    cout << "第二行占用内存大小 : " << sizeof (arr1[0][0]) << endl;

//    cout << "二维数组的行数 : " << sizeof (arr1[0]) / sizeof (arr1[0]) << endl;
//    cout << "二维数组的列数 : " << sizeof (arr1[0]) / sizeof (arr1[0][0]) << endl;

//    cout <<"数组首地址 : " << arr1 << endl;


/*  二维数组的使用  */
//    int score[3][3] = { {100, 100, 100}, {90, 50, 100}, {60, 70, 80} };
//    int sum[3] = {0,0,0};
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            sum[i] += score[i][j];
//        }
//    }

//    for (int k = 0; k < 3; k++)
//    {
//        cout << "score " << k << " : " << sum[k] << endl;
//    }


/*  函数的定义和调用   */
//    int a = 3, b = 5;
//    cout << a << " + " << b << " = " << add(a, b) << endl;

    // 值传递
//    int num1 = 10;
//    int num2 = 20;

//    cout << num1 << ", " << num2 << endl;
//    swap(num1, num2);

//    cout << num1 << ", " << num2 << endl;



/*   指针   */
// 32位系统中，指针占4个字节，64位中占8个
//    int nTest = 5;
//    int *po = &nTest;

//    cout << "address:" << &nTest << endl;
//    cout << "point address:" << po << endl;
//    cout << "point value :" << *po << endl;
//    cout << "sizeof : " << sizeof(po) << endl;

//    // 野指针
//    int *p1 = (int *)0x1100;

//    // 1. const修饰指针。常量指针,指针的指向可以改，值不可以改
//    int pointerA = 10;
//    int pointerB = 10;

//    const int * p2 = &pointerA;
//    p2 = &nTest;
////    *p2 = 20;  //报错

//    // 2. const修饰常量。指针常量,指向不可以改,值可以改
//    int * const p3 = &pointerA;
////    p3 = &nTest;  // 报错
//    *p3 = 3;

//    // 3. const修饰指针和常量.指向和值都不可以改
//    const int * const p4 = &pointerA;
////    p4 = &pointerB;
////    *p4 = 4;



    // 利用指针访问数组元素
//    int iArr[10] = {1,2,3,45,5,6,7,8,9,12};
//    int *iPointer = iArr;

//    cout << *iPointer << endl;

//    for (int i = 0; i < 10; i++)
//    {
//        cout << *iPointer++ << endl;
//    }


    // 指针和函数
//    int iNum1 = 10, iNum2 = 20;
//    swap(&iNum1, &iNum2);

//    cout << "num1 : " << iNum1 << endl;
//    cout << "num2 : " << iNum2 << endl;

    int arr[] = {1,4,2,5,6,7,3,8,9};
    int len = sizeof(arr) / sizeof(*arr);
    bubbleSort(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }


    return 0;
}
