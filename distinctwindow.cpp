#include <iostream>
using namespace std;
#include <vector>
int
main ()
{
  int array1[100];
  vector < int >a;
  int N;
  cout << "enter number of elements you want:" << endl;;
  cin >> N;
  cout << "Enter elements:" << endl;

  //  store input from user to array
  for (int i = 0; i < N; ++i)
    {
      cin >> array1[i];
    }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < N; ++n)
    {
      cout << array1[n] << "  ";
    }
  int d;


  int k = 2;
  for (int i = 0; i < N; i = i + k)
    {
      int c = 1;
      for (int j = i; j < i + k; j++)
	{

	  if (array1[i] != array1[j])
	    {
	      c++;
	    }

	}
      cout << "\n" << "Number of distinct elements between index:" << i <<
	"  to  " << k + i - 1 << " are: " << c;
      a.push_back (c);

    }

  return 0;
}
