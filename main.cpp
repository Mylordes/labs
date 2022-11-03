//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//
//void audit (int a, int n)
//{
//
//
//	if ( a > 0 && a < 1000 )
//
//	{
//		cout << "Ти дебіл, шо ти робиш,a повинно бути додатнім та менше 1000 \n";
//
//
//	}
//
//
//	else if ( n > 10 )
//
//		{
//			cout << "Ти дебіл, шо ти робиш,n повинно бути менше або равно 10. \n";
//
//		}
//
//
//}
////double x0 = a;
//
//int main()
//
//{
//
//        cout << "Введіть натуральне число a, яке більше 0 та менше 1000: \n";
//
//        double a, n, x;
//
//        cin >> a;
//
//		audit(a,0);
//
////        cout <<"Введіть ступiнь коріня n, менше 10: \n";
//
//        cin >> n;
//
//		audit(0,n);
//
//		double eps = 0;
//        double x0 = a;
//
//        x = ( n - 1 ) * x0 /n + a / ( n * pow ( x0, ( n - 1)));
//
//		int k = 0;
//
//		double ans = pow ( a, 1 / n );
//
//		while  ( abs (x0  - x)  > eps )
//        {
//			x0 = x;
//
//			x = ( n - 1 ) * x0 /n + a / ( n * pow ( x0, ( n - 1)));
//
//
//			k = k + 1;
//
//        }
//
//		cout << "Бібліотечна відповідь: "<< ans << endl;
//        cout << "Відповідь: "  << x << endl;
//		cout << "кількісь ітерацій: "  << k << endl;
//
//            return 0;
//}
//
//
//
//
////test 1
////a:3
////n:5
////output: 1.24573
//
////test 2
////a:5
////n:4
////output: 1.49535
//
////test3
////a: 1001
////output: a повинно бути додатнім та менше 1000
//
////test 4
////a: 9
////n: 11
////output: n повинно бути менше або равно 10
//



























//
//
//
//
//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//
//int main()
//
//{
//
//		cout << "Введіть натуральне число a, яке більше 0 та менше 1000: \n";
//
//		double a, n, x;
//
//		cin >> a;
//
//		if ( a < 0 || a > 1000 )
//
//		{
//			cout << "a повинно бути додатнім та менше 1000 \n";
//
//			return 0;
//		}
//
//		cout <<"Введіть ступiнь коріня n, менше 10: \n";
//
//		cin >> n;
//
//		if ( n > 10 )
//
//		{
//			cout << "n повинно бути менше або равно 10 \n";
//
//			return 0;
//		}
//
//		double eps = 0;
//		double x0 = a;
//
//		x = ( n - 1 ) * x0 /n + a / ( n * pow ( x0, ( n - 1)));
//
//		int k = 0;
//		double ans = pow(a, 1 / n );
//
//		while  ( abs (x0  - x)  > eps )
//		{
//			x0 = x;
//
//			x = ( n - 1 ) * x0 /n + a / ( n * pow ( x0, ( n - 1)));
//
//
//			k = k + 1;
//
//		}
//
//
//		cout << "Бібліотечна відповідь: "<< ans << endl;
//		cout << "Відповідь: "  << x << endl;
//		cout << "кількісь ітерацій: "  << k << endl;
//
//
//			return 0;
//}
		
//test 1
//a:3
//n:5
//output: 1.24573

//test 2
//a:5
//n:4
//output: 1.49535

//test3
//a: 1001
//output: a повинно бути додатнім та менше 1000

//test 4
//a: 9
//n: 11
//output: n повинно бути менше або равно 10










































//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//
//
////double x0 = a;
//
//int main()
//
//{
//
//	float a[10] = { 6, 5.2, -3, 4.23, 5.78, -23.1, 6, 7, 8, -9.56};
//
//	int n=10;
//
//	int i, j, k=-1; float s = 0;
//
//	for (i=0; i<n; i++)
//
//	if (a[i]<0) { k=i; } // break; }
//
//	if (k==-1)
//
//	cout<< “not found negative element\n”;
//
//	else
//
//	{
//
//	cout<< “ index last negative element = “ << k << endl;
//
//	for (j=k+1; j<n; j++)
//
//	s = s + a[j];
//
//	cout << “s=” << s << endl;
//
//	}
//
//	if (k==n-1)
//
//	cout << “after last negative element no elements\n”;
//}

//test 1
//імя :3
//рік:5
//output: 1.24573
//
//test 2
//a:5
//n:4
//output: 1.49535
//
//test3
//a: 1001
//output: a повинно бути додатнім та менше 1000
//
//test 4
//a: 9
//n: 11
//output: n повинно бути менше або равно 10






//#include <iostream>
//#include <math.h>
//using namespace std;
//
//
//int main()
//
//{
//  setlocale(LC_CTYPE, "rus");
//  cout << " input n" << endl;
//  double n;
//  cin >> n;
//   if ( n < 0 )
//
//		{
//			cout << "n повинно бути більше нуля\n";
//
//			return 0;
//		}
//
//  else{
//  double d = 2 * n;
//  double k = 1;
//  double x = 0;
//  double c = 0;
//
//  while (n != 0)
//  {
//
//
//	k *= d;
//	if (d == n)
//	{
//	  x = x + k;
//	  k = 1;
//	  n--;
//	  d = 2 * n;
//	  d++;
//
//	  c = c + 1;
//	}
//	d--;
//
//  }
//  cout << "summa= " << x << endl;
//  cout << ": " << c;
//
//  }
//
//}
//







//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//double fl=0;
//
//void audit (int a, int n)
//
//{
//
//
// if ( a < 0 || a > 1000 )
//
// {
//
//  fl = 1;
//
// }
//
//
// else if ( n > 10 )
//
//  {
//  
//   fl = 2;
//  }
//
//
//}
//
////double x0 = a;
//
//int main()
//
//{
//
//		
//
//		double a, n, x;
//
//		cin >> a;
//
//	audit(a,0);
//
//	if (fl == 1)
//  else
//
//	
//
//		cin >> n;
//
//  audit(0,n);
//  if (fl == 2) 
//
//
//	double eps = 1e-5;
//	double x0 = a;
//
//	x = ( n - 1 ) * x0 /n + a / ( n * pow ( x0, ( n - 1)));
//
//  int k = 0;
//
//
//  while  ( abs (x0  - x)  > eps )
//		{
//   x0 = x;
//
//   x = ( n - 1 ) * x0 /n + a / ( n * pow ( x0, ( n - 1)));
//
//
//   k = k + 1;
//
//
//		}
//
//	double ans = pow ( a, 1 / n );
//
//
//		
//
//			return 0;
//}
