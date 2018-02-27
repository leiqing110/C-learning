//File1    
#include<iostream>    
using namespace std;    
    
void fn();    
int n;  //定义静态全局变量 ，尝试加上static关键字是否能成功   
    
int main(void)    
{    
    n = 20;    
    cout<<n<<endl;    
    fn();    
    return 0;    
}    