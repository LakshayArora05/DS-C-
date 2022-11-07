#include <iostream>
using namespace std;
#include <vector>
int
main ()
{
  int array1[100];
  int array2[100];
  int counter=0;
 
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


  int k = 3;
  for (int i = 0; i < N; i = i + k)
    {
      int c = 1;
      for (int j = i; j < i + k; j++)
	{

	  if (array1[i] != array1[j] and j<N)
	    { 
	      
	      
	      c++;
	      cout<<" "<<"i"<<array1[i]<<j<<array1[j]<<" "<<c;
	      
	    }
   
	}
      
      array2[counter]=c;
      counter++;
    



    }
    cout<<"\n"<<"Number of Distinct Elements in "<<k<<" window are";
    for (int i=0;i<counter;i++)
    {
        cout<<" "<<array2[i];
    }
 
  return 0;
}

