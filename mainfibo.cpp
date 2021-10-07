#include <cstdlib>
#include <iostream>
#include <iostream>
using namespace std;
int main() {
    int f1 = 1,f2 = 1;
    int f3;
    int number;
    int array[]={1,1};
    cin>>number;
    while(f1+f2 < number)
    {
      f3=f1+f2;
      f1=f2;
      f2=f3;
      //for(int i=0;i<number;i++)
      //{
       array[3]=number;
      //}
    }
    
    while (number >= 0)
    {
     if (number == 0)
        break;
     if (number > 0) 
        for (int i=0;i<number;i++)
           { 
            if (number - i >= 0 )
            number = number - i;
           
           cout<<i;
    }
}
    
    system("PAUSE");
    return 0;
}
