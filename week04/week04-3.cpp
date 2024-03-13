#include <stdio.h>
int main()
{
  int a = 3;///這裡可以改一改,看它做幾次
  while(a>0)
  {
      printf("a是%d\n",a);///一直印
      a--;///a就變小了
  }///其實就是 a -= 1 的縮寫
}
