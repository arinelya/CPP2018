#include <iostream>
int main()
{
	int iBase=2;
	for(int i1=0;i1<10;++i1)
	{
		int iResult;
		iResult=1;
		for(int i2=1;i2<=i1;++i2)
			iResult=iResult*iBase;
			std::cout<<iResult<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
