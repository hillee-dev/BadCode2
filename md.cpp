/*
 *
 *wchar_t 用于表示宽字符,大小在不同的平台上可能不同.可以存储Unicode字符的数据类型,当你在字符串字面量前面加上字母L前缀的时候,你告诉编译器这是一个宽字符串字面量.
 *c和cpp是跨平台语言,在windows平台编译生成exe,在linux平台中编译生成的是没有后缀名字的执行文件
 *
 *wchar_t是c和c++标准中定义的类型,
 *WCHAR是Windows编程中对wchar_t的一个特别实现或别名,常用与强调在Windows API中的用途.
 * 
 * HANDLE用来引用操作系统的各种对象和资源,如果创建一个进程,windowsAPI会返回一个代表这个进程的HANDLE,通过这个句柄,可以获取进程信息,
 * 向进程发送信号,获取进程信息.
 *https://xz.aliyun.com/t/13045?time__1311=GqmhBKYIxfxGx0HQ1DuC5a%2Bz2Gox
 *
 *windows
 * c和cpp 与 windows编程 是 两个不同的东西
 * 
 * 但是c和cpp也不一样
 * 
 * 在字符串字面量和字符数组方面,有c风格的,也有cpp风格的
 * c风格的就是char  const char * 
 * 以字符数组的形式存储
 * 空字符作为结束标志]
 * 不可变性  c风格的字符串是不可变的,一旦创建,其内容不能被改变(除非字符串存储在可修改的内存区域,如堆或栈上的数组)
 * c风格的字符串被要求在内存中连续存储,这使得他们可以通过指针和偏移量来访问和操作
 * 
 * 
 * 字符串字面量(const char*)清晰的表达的程序员的意图就是不打算修改所指向的字符串内容,如果你确实需要一个可修改的副本,你应该创建一个字符数组并初始化.
 * 
 * cpp风格的就是 std::string 
 * 类封装
 * 动态内存管理
 * 与c风格字符串的兼容性
 * 
 * 
 * 
 * 
 * 
 * c和cpp中字符串字面量是一系列字符被双引号""包围的序列,并且他们是自动以空字符\0结尾,这是语言规范的一部分,存储在程序的只读数据段中
 * 并赋予他们const char[]或const wchar_t[],具体取决于是否使用了宽字符字面量前缀L.
 * 
 * 在没有指定L前缀的情况下，字符串字面量的类型是const char[]。如果使用了L前缀，如L"hello"，则类型是const wchar_t[]。
 * 
 *
 * 如果创建了字符数组没有初始化的话,只能通过复制或者单个元素赋值循环赋值.
 * 
 * 
 * 
 * cpp中
 * 字符串字面量和字符数组是两个不同的概念,在内存的表现上和使用上都是有区别的
 * 字符串字面量
 * 在程序代码中直接给出的字符序列,是不可修改的,存储在程序的只读数据段
 * 字符串字面量的类型实际上是一个指向字符数组首元素的指针,这个数组的末尾有一个隐含的空字符'\0'作为字符串的结束标志.
 */