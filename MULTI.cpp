//{============================================================================
//! @file       MULTI.cpp
//! @brief      Главная страница системы помощи
//}============================================================================

/*! @mainpage

    @section    MainPage              Случай в пустыне

                $Version:
                $Date:
                $Copyright:

    @par        Ссылки:
             -  @ref BACK_GROUND         "Фон"
             -  @ref TREE                "Кактусы"
             -  @ref PEREKATI_POLE       "Перекати поле"
             -  @ref HOSE_MAN            "Лошадь и ковбой"

*/






#include "TXLib.h"


 // Рисование фона
void BACK_GROUND (double x, double y, double TIME, COLORREF SKY, COLORREF YEARTH);
// Рисование Кактусов
void TREE ( double x, double y, double TIME, COLORREF TRE_KRONA, COLORREF TRE_STVOL, double ZOOM, double RANDOM_CROWN);
// Рисование перекати поля
void PEREKATI_POLE (double TIME, COLORREF PEREKATI_POLE_COLOR, double ZOOM );
// Рисование лощади и ковбоя
void HOSE_MAN (double x, double y, double TIME, COLORREF HOSE, COLORREF MAN, double ZOOM);

int main()
    {
    txCreateWindow (800, 600);

    int i = 0;
    int j = 0;
    while (i<101)
        {
        BACK_GROUND(0, 0, i, TX_BLUE, TX_BROWN);
        PEREKATI_POLE (j, TX_BLACK, 1 );
        HOSE_MAN (0, 0, j, TX_RED, TX_PINK, 1) ;
        i++;
        j+=4;
        Sleep (50);
        txClear();
        if (j==340)
            {
            while (i>0)
                {
                BACK_GROUND(0, 0, i, TX_BLUE, TX_BROWN);
                PEREKATI_POLE (j, TX_BLACK, 1 );
                HOSE_MAN (0, 0, j, TX_RED, TX_PINK, 0.9) ;
                i--;
                j-=4;
                Sleep (50);
                txClear();
                }
            }
        }



    }
void BACK_GROUND (double x, double y, double TIME, COLORREF SKY, COLORREF YEARTH)

    {

    txSetFillColor (SKY);
    txRectangle (0-TIME, 0, 1600-TIME, 600);
    txSetFillColor (TX_BROWN);
    txRectangle (0-TIME, 450, 1600-TIME, 600);
    TREE (0+x,0+10, TIME, TX_GREEN, TX_RED, 1,rand()%2);
    TREE (200+x,0-10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (100+x,0-40, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (0+x,0+10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (300+x,0-10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (400+x,0-40, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (500+x,0+10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (600+x,0-10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (700+x,0-40, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (800+x,0+10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (900+x,0-10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (1000+x,0-40, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (1100+x,0-10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (1200+x,0-40, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (1300+x,0+10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (1400+x,0-10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (1500+x,0-40, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    TREE (1600+x,0+10, TIME, TX_GREEN, TX_RED, 1, rand()%2);
    }

void TREE ( double x, double y, double TIME, COLORREF TRE_KRONA, COLORREF TRE_STVOL, double ZOOM, double RANDOM_CROWN)
{

txSetFillColor (TRE_KRONA) ;
POINT KAKTUS[16] = {{((x+60)*ZOOM)-TIME, ((500)*ZOOM)+y}, {((x+60)*ZOOM)-TIME, ((450)*ZOOM)+y}, {((x+45)*ZOOM)-TIME, ((450)*ZOOM)+y}, {((x+45)*ZOOM)-TIME, ((400)*ZOOM)+y}, {((x+55)*ZOOM)-TIME, ((400)*ZOOM)+y}, {((x+55)*ZOOM)-TIME, ((440)*ZOOM)+y}, {((x+60)*ZOOM)-TIME, ((440)*ZOOM)+y}, {((x+60)*ZOOM)-TIME, ((400)*ZOOM)+y}, {((x+75)*ZOOM)-TIME, ((400)*ZOOM)+y}, {((x+75)*ZOOM)-TIME, ((440)*ZOOM)+y}, {((x+80)*ZOOM)-TIME, ((440)*ZOOM)+y}, {((x+80)*ZOOM)-TIME, ((410)*ZOOM)+y},{((x+90)*ZOOM)-TIME, ((410)*ZOOM)+y}, {((x+90)*ZOOM)-TIME, ((455)*ZOOM)+y}, {((x+75)*ZOOM)-TIME, ((455)*ZOOM)+y}, {((x+75)*ZOOM)-TIME, ((500)*ZOOM)+y}};
txPolygon (KAKTUS, 16);

txSetFillColor (TRE_STVOL) ;
if (rand()%2==1)
{
POINT VORON[4] = {{((x+48)*ZOOM)-TIME, ((405)*ZOOM)+y}, {((x+52)*ZOOM)-TIME, ((405)*ZOOM)+y}, {((x+52)*ZOOM)-TIME, ((395)*ZOOM)+y}, {((x+48)*ZOOM)-TIME, ((395)*ZOOM)+y}};
txPolygon (VORON, 4);
}


}

void PEREKATI_POLE (double TIME, COLORREF PEREKATI_POLE_COLOR, double ZOOM )
{


    txSetFillColor (PEREKATI_POLE_COLOR) ;
    txCircle (800-TIME, 550, 20*ZOOM);


}

void HOSE_MAN (double x, double y, double TIME, COLORREF HOSE_COLOR, COLORREF MAN_COLOR, double ZOOM)
{

POINT MAN[13] = {{((x+60)*ZOOM)+TIME, ((560)*ZOOM)+y},/**/ {((x+80)*ZOOM)+TIME, ((560)*ZOOM)+y}, /**/{((x+80)*ZOOM)+TIME, ((510)*ZOOM)+y}, /**/{((x+90)*ZOOM)+TIME, ((510)*ZOOM)+y},/**/ {((x+90)*ZOOM)+TIME, ((460)*ZOOM)+y},/**/ {((x+80)*ZOOM)+TIME, ((460)*ZOOM)+y}, /**/{((x+80)*ZOOM)+TIME, ((455)*ZOOM)+y},/**/ {((x+85)*ZOOM)+TIME, ((455)*ZOOM)+y},/**/ {((x+85)*ZOOM)+TIME, ((430)*ZOOM)+y}, {((x+75)*ZOOM)+TIME, ((430)*ZOOM)+y}, {((x+75)*ZOOM)+TIME, ((455)*ZOOM)+y}, {((x+80)*ZOOM)+TIME, ((455)*ZOOM)+y}, {((x+80)*ZOOM)+TIME, ((455)*ZOOM)+y},/* {((x+120)*ZOOM)+TIME, ((600)*ZOOM)+y}, {((x+100)*ZOOM)+TIME, ((600)*ZOOM)+y}, {((x+100)*ZOOM)+TIME, ((550)*ZOOM)+y}, {((x+20)*ZOOM)+TIME, ((550)*ZOOM)+y}, {((x+20)*ZOOM)+TIME, ((600)*ZOOM)+y}, {((x+20)*ZOOM)+TIME, ((550)*ZOOM)+y}, {((x+20)*ZOOM)+TIME, ((600)*ZOOM)+y}*/}  ;



POINT HOSE[18] = {{((x+0)*ZOOM)+TIME, ((600)*ZOOM)+y},/**/ {((x+0)*ZOOM)+TIME, ((510)*ZOOM)+y}, /**/{((x+-20)*ZOOM)+TIME, ((540)*ZOOM)+y}, /**/{((x+-20)*ZOOM)+TIME, ((535)*ZOOM)+y},/**/ {((x+0)*ZOOM)+TIME, ((500)*ZOOM)+y},/**/ {((x+120)*ZOOM)+TIME, ((500)*ZOOM)+y}, /**/{((x+130)*ZOOM)+TIME, ((480)*ZOOM)+y},/**/ {((x+150)*ZOOM)+TIME, ((485)*ZOOM)+y},/**/ {((x+170)*ZOOM)+TIME, ((500)*ZOOM)+y},/**/ {((x+167)*ZOOM)+TIME, ((510)*ZOOM)+y},/**/ {((x+150)*ZOOM)+TIME, ((515)*ZOOM)+y},/**/ {((x+170)*ZOOM)+TIME, ((500)*ZOOM)+y},/**/ {((x+130)*ZOOM)+TIME, ((520)*ZOOM)+y},/**/ {((x+120)*ZOOM)+TIME, ((600)*ZOOM)+y},/**/ {((x+100)*ZOOM)+TIME, ((600)*ZOOM)+y},/**/ {((x+100)*ZOOM)+TIME, ((550)*ZOOM)+y},/**/ {((x+20)*ZOOM)+TIME, ((550)*ZOOM)+y},/**/ {((x+20)*ZOOM)+TIME, ((600)*ZOOM)+y}}  ;


txSetFillColor (HOSE_COLOR) ;
txPolygon (HOSE, 18);

txSetFillColor (MAN_COLOR) ;
txPolygon (MAN, 13);

}


