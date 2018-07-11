/*! \file */
#include <iostream>
//! \fn Raise int to specific power
/*!
 \param iBase Integer to raise in specific power
 \param power Power
 \return result of operation
*/
int raisePower (int iBase,int power)
{
		int iResult=1;
		for(int i2=1;i2<=power;++i2)
			iResult*=iBase;
			return iResult;
}
int main()
{
        int iBase=2,iResult;
        for(int i1=0;i1<10;++i1)
        {

	iResult = raisePower(iBase,i1);
        std::cout<<iResult<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
