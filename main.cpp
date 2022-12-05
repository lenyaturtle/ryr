//========================================================================


#include "TXLib.h"
//Итак.Это мой первый нормальный проект.
void kursor(int x, int y)//x 565 y 145
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_WHITE);
    POINT strelka [3] = {{x+555-565,y+125-145},{x+555-565,y+150-145},{x+570-565,y+135-145}};
    txPolygon(strelka, 3);
    txSetColor (TX_WHITE);
    txLine(x,y,x+570-565,y+155-145);
}
void nebo()
{
    txSetColor(RGB (128, 255, 255));
    txSetFillColor (RGB (128, 255, 255));  //синий(голубой)
    txRectangle (0, 495, 1152, 0);
}
void semlya()
{
    txSetColor(RGB (181, 230, 29));
    txSetFillColor (RGB (181, 230, 29));//светло-зелёный
    txRectangle (0, 495, 1152, 640);
}
void igra()
{
    txSetColor(RGB (0, 0, 0));//чёрный
    txSetFillColor (RGB (255, 242, 0)); //жёлтый
    txCircle(576,495,65);
    txSetColor(TX_WHITE);
    txSetFillColor (TX_WHITE);//белый
    POINT igrat [3] = {{552,470},{551,531},{611,500}};
    txPolygon(igrat, 3);
}
void sila()
{
    txSetColor(TX_BROWN);
    txSetFillColor (RGB (128, 255, 255));//синий(голубой)
    txCircle(808,495,65);
    txSetColor(RGB (163, 73, 164));
    txSetFillColor (RGB (163, 73, 164));//фиолетовый
    POINT molnia [11] = {{780,475},{795,487},{795,472},{807,505},{805,508},{835,530},{820,502},{825,498},{812,483},{815,480},{803,460}};
    txPolygon(molnia, 11);
}
void snania()
{
    txSetColor(RGB (34, 177, 76));
    txSetFillColor (RGB (34, 177, 76));//тёмно-зелёный
    txCircle(355,495,65);
    txSetColor(RGB (185, 122, 87));//коричневый
    txSetFillColor (RGB (185, 122, 87));
    txRectangle(325,545,383,467);
    txSetColor(RGB (163, 73, 164));
    txSetFillColor (RGB (163, 73, 164));//фиолетовый
    txCircle(354,508,20);
}
void xisina()
{
    txSetColor(RGB (185, 122, 87));//коричневый
    txSetFillColor (RGB (185, 122, 87));
    txRectangle(52,347,215,495);
    txSetColor(RGB (255, 242, 0));
    txSetFillColor (RGB (255, 242, 0)); //жёлтый
    POINT soloma [3] = {{53,344},{135,278},{217,344}};
    txPolygon(soloma, 3);
    txSetColor(RGB (95, 58, 39));//тёмно-коричневый
    txSetFillColor (RGB (95, 58, 39));
    txRectangle(85,495,145,428);
}
void fakel()
{
    txSetColor(RGB (185, 122, 87));//коричневый
    txSetFillColor (RGB (185, 122, 87));
    txRectangle(947,395,972,495);
    POINT fire [3] = {{945,392},{960,304},{972,392}};
    txPolygon(fire, 3);
}
void dialog()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 90, 30, FW_BOLD);
txDrawText   (396, 20, 730, 70, "BLOONS TD 6");
}
void ProblemOne()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 30, 10, FW_BOLD );
txDrawText   (1078, 160, 1130, 172, "Гонка");
}
void ProblemTwo()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 30, 10, FW_BOLD);
txDrawText   (1078, 295, 1130, 316, "Босс");
}
void CircleOne()
{
    txSetColor(RGB (185, 122, 87));//коричневый
    txSetFillColor (RGB (34, 177, 76));//тёмно-зелёный
    txCircle(1110,165,35);
 }
void CircleTwo()
{
    txSetColor(RGB (185, 122, 87));//коричневый
    txSetFillColor (RGB (34, 177, 76));//тёмно-зелёный
    txCircle(1110,102,35);
}
void dialog2()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (300, 560, 417, 586, "ЗНАНИЯ");
}
void dialog3()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (525, 560, 630, 590, "ИГРАТЬ");
}
void dialog4()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (745, 560, 862, 590, "СУПЕРСИЛЫ");
}
void travka()
{
    txSetColor(RGB (181, 230, 29));
    txSetFillColor (RGB (181, 230, 29));//светло-зелёный
    txRectangle(0, 0, 1152, 640);
}
void doroga()
{
    txSetColor(RGB (179, 89, 0));
    txSetFillColor (RGB (179, 89, 0));//коричневый 2!!!!
    txRectangle(0, 340, 490, 310);
    txRectangle(455, 340, 500, 160);
    txRectangle(455, 160, 675, 200);
    txRectangle(677, 160, 640, 335);
    txRectangle(640, 335, 1152, 300);
}
void menu()
{
    txSetColor(RGB (179, 89, 0));
    txSetFillColor (RGB (179, 89, 0));//коричневый 2!!!!
    txRectangle(1030, 0, 1152, 640);
}
void voinShip()
{
    txSetColor(RGB (179, 89, 0));//коричневый 2!!!!
    txSetFillColor (TX_WHITE);//белый
    txRectangle(1030, 0, 1152, 90);
}
void voinMech()
{
    txSetColor(RGB (179, 89, 0));//коричневый 2!!!!
    txSetFillColor (TX_WHITE);//белый
    txRectangle(1030, 90, 1152, 175);
}
void voinKopie()
{
    txSetColor(RGB (179, 89, 0));//коричневый 2!!!!
    txSetFillColor (TX_WHITE);//белый
    txRectangle(1030, 175, 1152, 255);
}
void voinShipTekst()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (1030, 25, 1132, 70, "Воин с\n"
                                  "шипами");
}
void voinMechTekst()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (1032, 92, 1114, 155, "Воин с\n"
                                   "мечом");
}
void voinKopieTekst()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (1035, 185, 1120, 235, "Воин с\n"
                                  "копьём");
}
void voinShipTekstCena()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (1050, 58, 1120,90, "200$");
}
void voinMechTekstCena()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (1044, 140, 1105, 173, "325$");
}
void voinKopieTekstCena()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (1040, 225, 1103, 260, "400$");
}
void dengi()
{
    txSetColor(RGB (179, 89, 0));//коричневый 2!!!!
    txSetFillColor (RGB (179, 89, 0));
    txRectangle(22, 9, 126, 45);
}
void dengiSumma()
{
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (37, 15, 106, 38, "650$");
}
void microchelik()
{
txSetColor (TX_WHITE, 4);
txSetFillColor(TX_WHITE);
txCircle(347,200,17);
txLine(318,295,345,255);
txLine(374,295,345,255);
txLine(346,216,345,255);
txLine(321,230,346,216);
txLine(375,247,346,216);
}
void knopka()
{
    txSetColor(RGB (34, 177, 76));
    txSetFillColor (RGB (34, 177, 76));//тёмно-зелёный
    txRectangle(1095, 590, 1150, 637);
    txSetColor(TX_WHITE);
    txSetFillColor (TX_WHITE);//белый
    POINT vpered [3] = {{1107,595},{1145,615},{1107,635}};
    txPolygon(vpered, 3);
}
void knopkaSila()
{
    txSetColor(RGB (128, 255, 255));
    txSetFillColor (RGB (128, 255, 255));//синий (голубой)
    txRectangle(1030, 590, 1091, 638);
    txSetColor(RGB (163, 73, 164));
    txSetFillColor (RGB (163, 73, 164));//фиолетовый

}
void knopkaBoss()
{
    txSetColor(TX_BLACK);//Чёрный
    txSetFillColor (TX_BLACK);
    txRectangle(1026, 537, 1150, 587);
}
void ship(int x, int y)
{
    txSetColor(RGB (127, 127, 127));
    txSetFillColor (RGB (127, 127, 127));//серый
    POINT ostro [3] = {{317,213},{317,237},{297,225}};
    txPolygon(ostro, 3);
}
void sharik(int x)
{
    txSetColor(TX_RED);
    txSetFillColor (TX_RED);
    txCircle(45,302,20);
}
void boss(int x)
{
    txSetColor(RGB (0, 162, 232));
    txSetFillColor (RGB (0, 162, 232));
    txEllipse(98,222,275,323);
    txSetColor(TX_WHITE);
    txSetFillColor (RGB (0, 162, 232));
    POINT syb [3] = {{98,217},{127,235},{100,257}};
    txPolygon(syb, 3);
    POINT syb2 [3] = {{135,230},{163,222},{145,192}};
    txPolygon(syb2, 3);
    POINT syb3 [3] = {{173,220},{187,190},{200,220}};
    txPolygon(syb3, 3);
}
void dengiSumma2()
{
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (37, 15, 106, 38, "450$");
}
void text()
{
txSetColor(RGB(255, 255, 255));
txSetFillColor(RGB(255, 255, 255));
txSelectFont ("Arial", 45, 15, FW_BOLD);
txDrawText   (1030, 590, 1091, 638, "Большой \n"
                                  "Взрыв");
}
void dark()
{
txSetColor(TX_BLACK);
txSetFillColor(TX_BLACK);
txRectangle(0, 0, 1152, 640);
}


int main()
{
    txCreateWindow (1152, 640);
    int xKursor = 565;
    int yKursor = 145;
    int xShip = 297;
    int yShip = 225;
    int xSharik = -100;
    int xBoss = 98;

    while (yKursor < 495)
    {
        txBegin();
        kursor(xKursor,yKursor);
        nebo();
        semlya();
        igra();
        sila();
        snania();
        xisina();
        fakel();
        dialog();
        ProblemOne();
        ProblemTwo();
        CircleOne();
        CircleTwo();
        dialog2();
        dialog3();
        dialog4();


        yKursor = yKursor + 10;
        txSleep(1);
        txEnd();
    }
    while (xKursor < 1110)
    {
        txBegin();
        kursor(xKursor,yKursor);
        nebo();
        semlya();
        igra();
        sila();
        snania();
        xisina();
        fakel();
        dialog();
        ProblemOne();
        ProblemTwo();
        CircleOne();
        CircleTwo();
        dialog2();
        dialog3();
        dialog4();


    xKursor = xKursor + 10;
    txSleep(1);
    txEnd();
    }
    while (yKursor > 300)
    {
        txBegin();
        kursor(xKursor,yKursor);
        nebo();
        semlya();
        igra();
        sila();
        snania();
        xisina();
        fakel();
        dialog();
        ProblemOne();
        ProblemTwo();
        CircleOne();
        CircleTwo();
        dialog2();
        dialog3();
        dialog4();


    yKursor = yKursor - 10;
    txSleep(1);
    txEnd();
    }
    while (yKursor > 50)
    {
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);


    yKursor = yKursor - 10;
    txSleep(1);
    txEnd();
    }
    while (xKursor > 343)
    {
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);


    xKursor = xKursor - 10;
    txSleep(1);
    txEnd();
    }
    while (yKursor < 245)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);




    yKursor = yKursor + 10;
    txSleep(1);
    txEnd();
    }
    while (xKursor < 1125)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);




    xKursor = xKursor + 10;
    txSleep(1);
    txEnd();
    }
    while (yKursor < 616)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);




    yKursor = yKursor + 10;
    txSleep(1);
    txEnd();
    }
    while (xKursor > 575)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);



    xKursor = xKursor - 5;
    txSleep(1);
    txEnd();
    }
    while (yKursor > 85)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);



    yKursor = yKursor - 5;
    txSleep(1);
    txEnd();
    }
    while (xKursor < 1085)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);



    xKursor = xKursor + 10;
    txSleep(1);
    txEnd();
    }
    while (yKursor < 565)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);



    yKursor = yKursor + 10;
    txSleep(1);
    txEnd();
    }
    while (xKursor > 1062)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);



    xKursor = xKursor - 5;
    txSleep(1);
    txEnd();
    }
    while (yKursor < 615)
    {
        txBegin();
        txBegin();
        kursor(xKursor,yKursor);
        travka();
        doroga();
        menu();
        voinShip();
        voinMech();
        voinKopie();
        voinShipTekst();
        voinMechTekst();
        voinKopieTekst();
        voinShipTekstCena();
        voinMechTekstCena();
        voinKopieTekstCena();
        dengi();
        dengiSumma();
        microchelik();
        knopka();
        knopkaSila();
        knopkaBoss();
        ship(xShip,yShip );
        sharik(xSharik);
        boss(xBoss);



    yKursor = yKursor + 10;
    txSleep(1);
    txEnd();
    }
    while (yKursor < 1000000)
    {
        txBegin();
        dark();



    yKursor = yKursor + 10;
    txSleep(1);
    txEnd();
    }

return 0;
}
