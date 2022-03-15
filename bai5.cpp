#include <iostream.h>
#include <math.h>
using namespace std;
int kiemTraDieuKienTamGiac(int a,int b,int c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	cout<<"\n Day la 3 canh cua tam giac.";
	else 
	cout<<"\n Day khong la 3 canh cua tam giac.";
}
int kiemTraTamGiac(int a,int b,int c)
{   
if(a+b>c&&a+c>b&&b+c>a)
   {
   	cout<<"\n Chu vi tam giac la:"<<a+b+c;
    int p=(a+b+c)/2;
    cout<<"\n Dien tich tam giac la:"<<sqrt(p*(p-a)*(p-b)*(p-c));
    if(a==b && a==c && b==c)
	cout<<"\n Day la tam giac deu.";
	else if(a==b||a==c||b==c)
	cout<<"\n Day la tam giac can.";
	else if(a*a==b*b+c*c||a*a+b*b==c*c||a*a+c*c==b*b)
	cout<<"\n Day la tam giac vuong.";
	else
	cout<<"\n Day la tam giac thuong.";
   }
}

int main()
{
  int a,b,c;
  cout<<" Nhap vao 3 canh cua mot tam giac:";
  do{
  cout<<"\nNhap a: ";cin>>a;
  cout<<"\nNhap b: ";cin>>b;
  cout<<"\nNhap c: ";cin>>c;
  if(a<=0||b<=0||c<=0)
  cout<<"Nhap lai :";
  }while(a<=0||b<=0||c<=0);
  kiemTraDieuKienTamGiac(a,b,c);
  kiemTraTamGiac(a,b,c);
  cout<<endl;
  return 0;
}