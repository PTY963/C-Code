//int main()
//{
//	int year = 0;
//	int a = 10;
//	int b = 20;//良好的风格，变量在定义的时候同时初始化
//
//	if ( year >= 2000)//良好的代码风格； if for while等关键字后加空格，以凸显关键字
//	{
//		;
//	}
//
//	if(year>=2000)//不良的风格，当前编译器自动转换成上面的良好风格，这就是我之前的风格！！！
//	{
//		;
//	}
//
//	if ((a >= b) && (c >= d))//良好的风格
//	{
//		;
//	}
//
//	for (i = 0; i < 10; i++)//书上（高质量C++/C 编程指南）写到这种空格太多
//	{
//		;
//	}
//
//	for (i = 0; i < 10; i++)//但当前编译器自动转换成这种多余空格的这种风格 ？？？？？
//	{
//		;
//	}
//
//	x = a < b ? a : b;//良好的风格
//	x = a<b?a:b;//不良的风格
//	int *p = &y;//良好的风格，一元操作符&前后不加空格
//	int* p = &y;//当前编译器把*自动转到int右边
//	array[5] = 0;//不要写成array [ 5 ] = 0;
//	b->Function();//不要写成b -> Function();
//	return 0;
//}
//int main()
//{
//	if ((very_long_variable1 >= very_long_variable2)
//		&&(very_long_variable3) <= (very_long_variable4)
//		&& (very_long_variable4 <= (very_long_variable5))
//	{
//		;
//	}
//	//长行拆分，代码行最大长度宜控制在70到80个字符以内
//	//长表达式要在低优先级操作符处拆分成行，操作符放在新行之首（以便突出操作符）
//	//拆分的新行要进行适当的缩进，使排版整齐
//	return 0;
//}
int main()
{
	//修饰符的位置
	//定义一个指针类型的变量:
	int* a;//语义更加直观
	int *b;

	return 0;
}