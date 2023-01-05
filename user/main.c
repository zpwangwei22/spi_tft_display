#include"head.h"


int main()
{
//    uint32_t Display_ID = 0x00000000;
    TFT_SPI_Init();
//    my_usart_init();
    char arr[3][3] = {{'#', '#', '#'},{ '@', '@', '@'}, {'$', '$', '$'}};    
    while(1)
    {
//        printf("TFT test\r\n");
//        Display_ID = TFT_ReadID();
//        printf("ID: %lx\r\n", Display_ID);
//        printf("COLORMODE : %X\r\n", Read_ColorMode());
/*        SetScreenColor(RED);
        delay_s(1);
        SetScreenColor(GREEN);
        delay_s(1);
        SetScreenColor(BLUE);
*/
//        FillRectangle(0, 70, ST7735_WIDTH, 70, GREEN);
//        SetScreenColor(YELLOW);
//        delay_s(1);
//        SetScreenColor(CYAN);
//        delay_s(1);
//        SetScreenColor(MAGENTA);
//        delay_s(1);
        SetRotation(0);
        SetScreenColor(BLACK);
        delay_s(1);
        DrawImage(0, 0, 128, 128, TestImage);
        TFT_WriteChar(0, 130, 'L', Font_7x10, GREEN, BLACK);
        TFT_WriteChar(7, 130, 'O', Font_7x10, GREEN, BLACK);
        TFT_WriteChar(13, 130, 'V', Font_7x10, GREEN, BLACK);
        TFT_WriteChar(20, 130, 'E', Font_7x10, GREEN, BLACK);
        TFT_WriteString(0, 139, "LINUX", Font_7x10, GREEN, BLACK);
        delay_s(2);
        SetRotation(1);
        SetScreenColor(BLACK);
        DrawImage(0, 0, 128, 128, TestImage);
        TFT_WriteString(130, 64, "LOVE", Font_7x10, GREEN, BLACK);
        TFT_WriteString(130, 74, "YOU", Font_7x10, GREEN, BLACK);
        delay_s(1);
        SetRotation(2);
        SetScreenColor(BLACK);
        DrawImage(0, 0, 128, 128, TestImage);
        TFT_WriteString(0, 130, "LOVE", Font_7x10, GREEN, BLACK);
        TFT_WriteString(0, 139, "LINUX", Font_7x10, GREEN, BLACK);
        delay_s(1);
        SetRotation(3);
        SetScreenColor(BLACK);
        DrawImage(0, 0, 128, 128, TestImage);
        TFT_WriteString(130, 64, "LOVE", Font_7x10, GREEN, BLACK);
        TFT_WriteString(130, 74, "YOU", Font_7x10, GREEN, BLACK);
        delay_s(2);
        SetRotation(4);
        SetScreenColor(BLACK);
        for(uint8_t i = 0; i < 3; i++)
        {
            for(uint8_t j = 0; j < 3; j++)
            {
                TFT_WriteChar(0 + j*7 , 0 + i*10 , arr[i][j], Font_7x10, GREEN, BLACK);
            }
        }
        delay_s(20);
    }

}






