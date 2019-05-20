/*
///////////////////////////////////////////////////////////////////////////////// 
//  功能描述   : OLED 4接口演示例程(51系列)
//              说明: 
//              ----------------------------------------------------------------
//              GND    电源地
//              VCC  接5V或3.3v电源
//              D0   接PB13//D6（SCL）
//              D1   接PB15//D7（SDA）
//              RES  接PB14//D4
//              DC   接PB2//D5
//              CS   接PB7///D3               
/
*************************************************************************
*/
#ifndef __OLED_H
#define __OLED_H			  	 


    	
//OLED模式设置
//0:4线串行模式
//1:并行8080模式
#define OLED_MODE 0
#define SIZE 16
#define XLevelL		0x00
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64	    						  
//-----------------OLED端口定义----------------  					   

#define OLED_SCLK PAout(5)	//CLK

#define OLED_SDIN PAout(7)    //DIN

#define OLED_RST  PAout(6)    //RST

#define OLED_DC   PBout(0)    //DC
		     
#define OLED_CS   PBout(1)    //CS

 		     
#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据


//OLED控制用函数
void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);	   							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y, u8 *p);	 
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(u8 x,u8 y,u8 no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
void OLED_adc(u8 x,u8 y,u8 num,u8 len);

void oled_show_canshu();
void oled_offset();


#endif  
	 










