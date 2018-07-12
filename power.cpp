/*! \file */
#include <iostream>
//! \fn Raise int to specific power
/*!
 \param iBase Integer to raise in specific power
 \param power Power
 \return result of operation
*/
int reisePower (int iBase,int power)
{
		int iResult=1;
		for(int i2=1;i2<=power;++i2)
			iResult*=iBase;
			return iResult;
}
void Test(int power, int iBase){
        for(int i=0;i<power;++i)
       		std::cout<<reisePower(i,iBase)<<" ";
        std::cout<<std::endl;
}
int main(){
        Test(10,2);
	Test(7,3);
	return 0;
}
