#include<iostream.h>

int main()
{
  int row,col,matr[1000];
  cin>>row>>col;
  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cin>>matr[i][j];
    }
  }
  int sum = 0;
  for(int i = 1; i < row-1; i++)
  {
    for(int j = 1; j < col-1; j++)
    {
      sum = sum + matr[i][j];
    }
  }
  cout<<sum;
}
