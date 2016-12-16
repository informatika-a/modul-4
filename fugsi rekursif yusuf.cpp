#include <iostream>
#include <conio.h>
using namespace std;
int fb(int n)
{
if (n==1)

return 0;
else if (n==2)
return (1);
else
return (fb (n-1)+fb(n-2));
}
int main()
{
int n;
cout<<"fungsi rekursif untuk mencari bilangan sampai ke-n : ";cin>>n;
for(int i=1;i<=n;i++)
cout<<fb(i)<<" ";

cout<<endl;
}
