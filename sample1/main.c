/***********************************************************************/
/*                                                                     */
/*  FILE        :Main.c                                                */
/*  DATE        :                                                      */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :                                                      */
/*                                                                     */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/*                                                                     */
/***********************************************************************/

#include "iodefine.h"

void main(void);

void main(void)
{
	
	volatile unsigned short x,y;
	
	
	PM0_bit.no0 = 0;	//ポート0のモードを出力モードに設定する
	
	while(1){
	
		P0_bit.no0 = 0;	//ポート出力をL
		x = 0xFF;
		y = 0x02;
		while(y--){
			while(x--); //時間つぶし　0xFF回デクリメントするだけの処理
		}
		
		P0_bit.no0 = 1; //ポート出力をH
		
		x = 0xFF;
		y = 0x02;
		while(y--){
			while(x--); //時間つぶし　0xFF回デクリメントするだけの処理
		}
		
	}
	
}
