#include <stdio.h>
int main()
{
   
  int x,c=0,diff;
  float p;
  scanf("%d%f",&x,&p);
    p=p/100;
    while(1)
    {
    c=c+x;
    diff=x*p;
    if(diff==0)
      {break;}
    x=x-diff;
    }
    printf("%d\n",c);
    return 0;
}
