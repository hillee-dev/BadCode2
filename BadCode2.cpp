﻿// BadCode2.cpp
//行为免杀,静态免杀,动态免杀,流量免杀
//shellcode -> 申请一段可以执行的内存 -> 引导其执行

//shellcode -> calc.exe 计算器程序

//申请可以执行的内存    VirtualAlloc()

#include <iostream>
#include<vector>




int main()
{
    std::cout << "Hello World!\n";
    std::cout << "zhongguo";
    std::vector<int> v1{1, 2, 3};
    std::cout << v1;
    return 0;
}
