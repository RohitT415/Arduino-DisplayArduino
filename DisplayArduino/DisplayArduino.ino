#include <LCDWIKI_GUI.h> //Core graphics library
#include <LCDWIKI_KBV.h> //Hardware-specific library

LCDWIKI_KBV mylcd(ILI9486,A3,A2,A1,A0,A4);

//define some colour values
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

char message[] = {'A','r','d','u','i','n','o'};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mylcd.Init_LCD();
  Serial.println(mylcd.Read_ID(), HEX);
  mylcd.Fill_Screen(BLACK);
}

void loop() {
  // put your main code here, to run repeatedly:
  mylcd.Set_Text_colour(WHITE);
  mylcd.Set_Text_Size(4);
  mylcd.Print_String(message, 0, 0);
}
