#include <iostream>

using namespace std;

int main()
{
string stars = "*****";
string stripes = "=====";

cout << "a." << endl;

int i = 0;
while (i < 5)
{
   cout << stars.substr(0, i) << endl;
   i++;
}

cout << endl << "b." << endl;

i = 0;
while (i < 5)
{
   cout << stars.substr(0, i);
   cout << stripes.substr(i, 5 - i) << endl;
   i++;
}

cout << endl << "c." << endl;

i = 0;
while (i < 10)
{
   if (i % 2 == 0) { cout << stars << endl; }
   else { cout << stripes << endl; }
   i++;
}

   return 0;
}