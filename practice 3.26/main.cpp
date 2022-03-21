#include <iostream>
// A palindromes is a number or a text phrase that read the same backward as forward.
using namespace std;

int main()
{
    int wee;// num supposed to read forward
    int eew;// num supposed to read backwards
    int a;
    int b;
    int c;
    int d;
    int e;
    int g;
    int h;
    int i;
    int j;
    int k;
    //a = wee / 10000;
    //b = eew % 10;
    //c = wee / 1000 - wee / 10000 * 10 ;
    //d = ( eew % 100 - eew % 10 ) / 10;
    //e = wee / 100 - wee / 1000 * 10;
    //g = ( eew % 1000 - eew % 100 ) / 100;
    //h = wee / 10 - wee / 100 * 10;
    //i = ( eew % 10000 - eew % 1000 ) /1000;
    //j = wee - wee / 10 * 10;
    //k = ( eew - eew % 10000 ) / 10000;

    cout << "Enter a five-digit integers (or enter -1 to quit): " << endl;
    cin  >> wee;

    if ( wee == -1 )
        {
        return 0;
        }

    while ( wee != -1)
        {
    if ( wee < 9999 || wee > 99999)
    {
      cout << "PLEASE ENTER A FIVE- DIGIT INTERGERS!!\n " << endl;
      cout << "Enter a five-digit integers: " << endl;
      cin  >> wee;
    }

      eew = wee;
      a = wee / 10000;
      b = eew % 10;
      c = wee / 1000 - wee / 10000 * 10 ;
      d = ( eew % 100 - eew % 10 ) / 10;
      e = wee / 100 - wee / 1000 * 10;
      g = ( eew % 1000 - eew % 100 ) / 100;
      h = wee / 10 - wee / 100 * 10;
      i = ( eew % 10000 - eew % 1000 ) /1000;
      j = wee - wee / 10 * 10;
      k = ( eew - eew % 10000 ) / 10000;

    if ( a == b && c == d && e == g && h == i && j == k)
       {
           cout << "This is a palindrome!!\n" << endl;
       }
      else
         {
        cout << "This is not a palindrome!!\n" << endl;
         }

    wee = 0;

    cout << "Enter a five-digit integers (or enter -1 to quit): " << endl;
    cin  >> wee;

    if ( wee == -1 )
        {
        return 0;
        }

        }

    return 0;
}
