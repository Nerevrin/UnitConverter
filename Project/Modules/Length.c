#include <stdio.h>

                // - ����������� ������� ��������� - ��, ��, ����, �� ( ��, ???) -//

/////////////////////////////����������/////////////////////////////////////////////
double millimetresTOcentimetres(double LENGTH) // ������� �� ����������� � ����������
{
   LENGTH = LENGTH / 10;
    return LENGTH;
}

double millimetresTOmetres(double LENGTH) // ������� �� ����������� � �����
{
    LENGTH = LENGTH / 1000;
     return LENGTH;
}

double millimetresTOkilometres(double LENGTH) // ������� �� ����������� � ���������
{
    LENGTH = LENGTH / 1000000;
     return LENGTH;
}
//////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////����������//////////////////////////////////////////
double centimetresTOmillimetres(double LENGTH) // ������� �� ����������� � ����������
{
    LENGTH = LENGTH * 10;
     return LENGTH;
}

double centimetresTOmetres(double LENGTH) // ������� �� ����������� � �����
{
    LENGTH = LENGTH / 100;
     return LENGTH;
}

double centimetresTOkilometres(double LENGTH) // ������� �� ����������� � ���������
{
    LENGTH = LENGTH / 100000;
     return LENGTH;
}
/////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////�����////////////////////////////////////////////
double metresTOmillimetres(double LENGTH) // ������� �� ������ � ����������
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}

double metresTOcentimetres(double LENGTH) // ������� �� ������ � ����������
{
    LENGTH = LENGTH * 100;
     return LENGTH;
}

double metresTOkilometres(double LENGTH) // ������� �� ������ � ���������
{
    LENGTH = LENGTH / 1000;
     return LENGTH;
}
////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////���������//////////////////////////////////////////
double kilometresTOmillimetres(double LENGTH) // ������� �� ���������� � ����������
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}

double kilometresTOcentimetres(double LENGTH) // ������� �� ���������� � ����������
{
    LENGTH = LENGTH * 100000;
     return LENGTH;
}

double kilometresTOmetres(double LENGTH) // ������� �� ���������� � �����
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}
///////////////////////////////////////////////////////////////////////////////////


                //-���������� ������� ��� - ���, ���, ����(�������), ����(������), ���� -//

//--------------------------------------����--------------------------------------------------//
double FootTOYard(double LENGTH) // ������� �� �����  � ����
{
    LENGTH = LENGTH / 3;
     return LENGTH;
}


double FootTONauticalMile(double LENGTH) // ������� �� ����� � ������� ����.
{
    LENGTH = LENGTH / 6076.1154855643 ft;// ����� ���������
     return LENGTH;
}


double FootTOStatuteMile(double LENGTH) // ������� �� ����� � ������  ����.
{
    LENGTH = LENGTH / 5280.0000010236 ft (survey) ft;// ����� ���������
     return LENGTH;
}


double FootTOInch(double LENGTH) // ������� �� ����� � ����.
{
    LENGTH = LENGTH * 12;
     return LENGTH;
}
//--------------------------------------------------------------------------------------------//

//--------------------------------------����--------------------------------------------------//
double YardTOFoot(double LENGTH) // ������� �� �����  � ����
{
    LENGTH = LENGTH * 3;
     return LENGTH;
}

double YardTONauticalMile(double LENGTH) // ������� �� �����  � ������� ����
{
    LENGTH = LENGTH / 2025.3718285214 yd // ���� ��������
     return LENGTH;
}


double YardTOStatuteMile(double LENGTH) // ������� �� �����  � ������  ����
{
    LENGTH = LENGTH /1760.........;//��������
     return LENGTH;
}

double YardTOInch(double LENGTH) // ������� �� �����  � ����
{
    LENGTH = LENGTH * 36;
     return LENGTH;
}

//--------------------------------------���� �������--------------------------------------------------//
double NauticalMileTOFoot(double LENGTH) // ������� �� ������� ����� � ����
{
    LENGTH = LENGTH * 6076.1154855643 ft;// ��������
     return LENGTH;
}

double NauticalMileTOYard(double LENGTH) // ������� �� ������� ����� � ����
{
    LENGTH = LENGTH * 2025.3718285214 yd;// ��������
    return LENGTH;
}

double NauticalMileTOStatuteMile(double LENGTH) // ������� �� ������� ����� � ������ ����
{
    LENGTH = LENGTH ??????????????????;// ��������
     return LENGTH;
}

double NauticalMileTOInch(double LENGTH) // ������� �� ������� ����� �  ����
{
    LENGTH = LENGTH / 1.3714902807775E-5 miles;
     return LENGTH;
}

//--------------------------------------���� ������--------------------------------------------------//


//---------------------------------------------------------------------------------------------------//


//--------------------------------------����---------------------------------------------------------//
double InchTOFoot(double LENGTH) // ������� �� �����  � ����
{
    LENGTH = LENGTH / 12;
     return LENGTH;
}

double InchTOYard(double LENGTH) // ������� �� �����  � ���
{
    LENGTH = LENGTH / 36;
     return LENGTH;
}

double InchTONauticalMile(double LENGTH) // ������� �� �����  � ������� ����
{
    LENGTH = LENGTH / 72913.385826772 in;// ������
     return LENGTH;
}

double InchTOStatuteMile(double LENGTH) // ������� �� �����  � ������  ����
{
    LENGTH = LENGTH / !????????????????
     return LENGTH;
}
//---------------------------------------------------------------------------------------------------//
