#include<iostream>
int main(){
bool b =42;
int i = b;
i = 3.14;
std::cout<<i<<std::endl;
double pi = i;
signed char c = 1;
signed char c2 = 10000000; //输出将变为10000模256的余
//为什么10000000就变成负数了呢，理应是取模算法出了bug
//https://stackoverflow.com/questions/11630321/why-does-c-output-negative-numbers-when-using-modulo
//stf上给出了这种问题，有空看看
//赋给带符号类型一个超出它表示范围的值时，结果是未定义的
//此时程序可能继续工作、崩溃、生成垃圾数据
//avoid nonprotable!就是要避免类似的定义失败的问题 
std::cout<<int(c)<<"    "<<int(c2)<<std::endl;//
}
