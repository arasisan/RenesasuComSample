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
	
	
	PM0_bit.no0 = 0;	//�|�[�g0�̃��[�h���o�̓��[�h�ɐݒ肷��
	
	while(1){
	
		P0_bit.no0 = 0;	//�|�[�g�o�͂�L
		x = 0xFF;
		y = 0x02;
		while(y--){
			while(x--); //���ԂԂ��@0xFF��f�N�������g���邾���̏���
		}
		
		P0_bit.no0 = 1; //�|�[�g�o�͂�H
		
		x = 0xFF;
		y = 0x02;
		while(y--){
			while(x--); //���ԂԂ��@0xFF��f�N�������g���邾���̏���
		}
		
	}
	
}