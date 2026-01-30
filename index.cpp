@include<iostream>
using namespace std;

int main()
{
  cout << "Hello, World" << endl;
  cout << "Hello Hieu" << endl;
  cout << "Hello Linux" << endl;
  int n; cin >> n;
  int *a = new int[n];
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for(auto it : a)
  {
    cout << it << " ";
  }
  return 0;
}
