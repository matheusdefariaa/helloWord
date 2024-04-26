#include "idiomas.h"

void helloWorld(int n)                                                
{
         switch(n){      
                 case 273: printf("PT: Olá, Mundo!\n");break;
                 case 266: printf("IT: Ciao, mondo !\n");break;
                 case 263: printf("JP: こんにちは世界 !\n");break;
                 case 244: printf("FA: ﺱﻼﻣ ﺪﻨﯾﺍ !\n");break;
                 case 259: printf("CS: Ahoj světe !\n");break;
                 case 242: printf("DA: Hej Verden !\n");break;
                 case 246: printf("DE: Hallo Welt !\n");break;
                 case 256: printf("EN: Hello World !\n");break;
                 case 270: printf("HY: Բարեւ աշխարհ !\n");break;
                 case 271: printf("ZH: 你好世界 ！\n");break;
                 case 251: printf("IE: Dia duit Domhanda!\n");break;
                 case 250: printf("LA: Salve Mundus!\n");break;
                 case 245: printf("GA: Maitei Mundo !\n");break;

       		 case 163: version(); break; 
                 case 149: help();break;
                 default: printf("Parâmetro(s) Inválido(s)\nDigite hw -h para mais informações\n");break;
	}
}  
