#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */

double selectionswitchAngle(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
           "1 - ������;\n"
           "2 - �����;\n"
           "3 - ��������;\n"
           "4 - ������;\n"
           "5 - ����;\n"
           "6 - ��������;\n"
           "7 - ����;\n\t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("�������� ��������, � ������� �� ������ �������������� ���� ��������.\n"
           "�� ����� �������� �� �� ��������, ��� �� ������� � �������� ��������������:\n"
           "1 - ������;\n"
           "2 - �����;\n"
           "3 - ��������;\n"
           "4 - ������;\n"
           "5 - ����;\n"
           "6 - ��������;\n"
           "7 - ����;\n\t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������, \n��� �� ��������� �������������� "
                "���� � �� �� ��������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = Sec2Min(MEASUREMENT);
            break;
        case 13:
            key.gate = Sec2Degree(MEASUREMENT);
            break;
        case 14:
            key.gate = Sec2Radian(MEASUREMENT);
            break;
        case 15:
            key.gate = Sec2Grad(MEASUREMENT);
            break;
        case 16:
            key.gate = Sec2Sextant(MEASUREMENT);
            break;
        case 17:
            key.gate = Sec2Rumb(MEASUREMENT);
            break;
        case 21:
            key.gate = Min2Sec(MEASUREMENT);
            break;
        case 23:
            key.gate = Min2Degree(MEASUREMENT);
            break;
        case 24:
            key.gate = Min2Radian(MEASUREMENT);
            break;
        case 25:
            key.gate = Min2Grad(MEASUREMENT);
            break;
        case 26:
            key.gate = Min2Sextant(MEASUREMENT);
            break;
        case 27:
            key.gate = Min2Rumb(MEASUREMENT);
            break;
        case 31:
            key.gate = Degree2Sec(MEASUREMENT);
            break;
        case 32:
            key.gate = Degree2Min(MEASUREMENT);
            break;
        case 34:
            key.gate = Degree2Radian(MEASUREMENT);
            break;
        case 35:
            key.gate = Degree2Grad(MEASUREMENT);
            break;
        case 36:
            key.gate = Degree2Sextant(MEASUREMENT);
            break;
        case 37:
            key.gate = Degree2Rumb(MEASUREMENT);
            break;
        case 41:
            key.gate = Radian2Sec(MEASUREMENT);
            break;
        case 42:
            key.gate = Radian2Min(MEASUREMENT);
            break;
        case 43:
            key.gate = Radian2Degree(MEASUREMENT);
            break;
        case 45:
            key.gate = Radian2Grad(MEASUREMENT);
            break;
        case 46:
            key.gate = Radian2Sextant(MEASUREMENT);
            break;
        case 47:
            key.gate = Radian2Rumb(MEASUREMENT);
            break;
        case 51:
            key.gate = Grad2Sec(MEASUREMENT);
            break;
        case 52:
            key.gate = Grad2Min(MEASUREMENT);
            break;
        case 53:
            key.gate = Grad2Degree(MEASUREMENT);
            break;
        case 54:
            key.gate = Grad2Radian(MEASUREMENT);
            break;
        case 56:
            key.gate = Grad2Sextant(MEASUREMENT);
            break;
        case 57:
            key.gate = Grad2Rumb(MEASUREMENT);
            break;
        case 61:
            key.gate = Sextant2Sec(MEASUREMENT);
            break;
        case 62:
            key.gate = Sextant2Min(MEASUREMENT);
            break;
        case 63:
            key.gate = Sextant2Degree(MEASUREMENT);
            break;
        case 64:
            key.gate = Sextant2Radian(MEASUREMENT);
            break;
        case 65:
            key.gate = Sextant2Grad(MEASUREMENT);
            break;
        case 67:
            key.gate = Sextant2Rumb(MEASUREMENT);
            break;
        case 71:
            key.gate = Rumb2Sec(MEASUREMENT);
            break;
        case 72:
            key.gate = Rumb2Min(MEASUREMENT);
            break;
        case 73:
            key.gate = Rumb2Degree(MEASUREMENT);
            break;
        case 74:
            key.gate = Rumb2Radian(MEASUREMENT);
            break;
        case 75:
            key.gate = Rumb2Grad(MEASUREMENT);
            break;
        case 76:
            key.gate = Rumb2Sextant(MEASUREMENT);
            break;
        default:
            printf("�� ������� �������� �������������� ��������, "
                   "��� �� ��������� �������������� � ��������, ������� ��� ������������\n");
            break;
    }

    return key.gate;
}
