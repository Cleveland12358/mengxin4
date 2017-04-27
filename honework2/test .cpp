#include<iostream>
#include "456.h"
using namespace std;
int main()
{
   double r=0,s=0;//初始化半径，面积。
   cout<<"请输入圆的半径";
   cin>>r;
   s=cirs(r);
   cout<<"圆的面积为";
   cout<<s<<endl;
   return 0;

}