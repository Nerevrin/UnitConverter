#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */

double selectionswitchFrequency(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
           "1 - ���������;\n"
           "2 - ���������;\n"
           "3 - ����;\n"
           "4 - ��������;\n"
           "5 - ��������;\n"
           "6 - ��������;\n"
           "7 - ������ �� �������;\n\t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("�������� ��������, � ������� �� ������ �������������� ���� ��������.\n"
           "�� ����� �������� �� �� ��������, ��� �� ������� � �������� ��������������:\n"
           "1 - ���������;\n"
           "2 - ���������;\n"
           "3 - ����;\n"
           "4 - ��������;\n"
           "5 - ��������;\n"
           "6 - ��������;\n"
           "7 - ������ �� �������;\n\t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������, \n��� �� ��������� �������������� "
                "���� � �� �� ��������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = MkHerz2MlHerz(MEASUREMENT);
            break;
        case 13:
            key.gate = MkHerz2Herz(MEASUREMENT);
            break;
        case 14:
            key.gate = MkHerz2kHerz(MEASUREMENT);
            break;
        case 15:
            key.gate = MkHerz2MgHerz(MEASUREMENT);
            break;
        case 16:
            key.gate = MkHerz2Frenel(MEASUREMENT);
            break;
        case 17:
            key.gate = MkHerz2RadSec(MEASUREMENT);
            break;
        case 21:
            key.gate = MlHerz2MkHerz(MEASUREMENT);
            break;
        case 23:
            key.gate = MlHerz2Herz(MEASUREMENT);
            break;
        case 24:
            key.gate = MlHerz2kHerz(MEASUREMENT);
            break;
        case 25:
            key.gate = MlHerz2MgHerz(MEASUREMENT);
            break;
        case 26:
            key.gate = MlHerz2Frenel(MEASUREMENT);
            break;
        case 27:
            key.gate = MlHerz2RadSec(MEASUREMENT);
            break;
        case 31:
            key.gate = Herz2MkHerz(MEASUREMENT);
            break;
        case 32:
            key.gate = Herz2MlHerz(MEASUREMENT);
            break;
        case 34:
            key.gate = Herz2kHerz(MEASUREMENT);
            break;
        case 35:
            key.gate = Herz2MgHerz(MEASUREMENT);
            break;
        case 36:
            key.gate = Herz2Frenel(MEASUREMENT);
            break;
        case 37:
            key.gate = Herz2RadSec(MEASUREMENT);
            break;
        case 41:
            key.gate = kHerz2MkHerz(MEASUREMENT);
            break;
        case 42:
            key.gate = kHerz2MlHerz(MEASUREMENT);
            break;
        case 43:
            key.gate = kHerz2Herz(MEASUREMENT);
            break;
        case 45:
            key.gate = kHerz2MgHerz(MEASUREMENT);
            break;
        case 46:
            key.gate = kHerz2Frenel(MEASUREMENT);
            break;
        case 47:
            key.gate = kHerz2RadSec(MEASUREMENT);
            break;
        case 51:
            key.gate = MgHerz2MkHerz(MEASUREMENT);
            break;
        case 52:
            key.gate = MgHerz2MlHerz(MEASUREMENT);
            break;
        case 53:
            key.gate = MgHerz2Herz(MEASUREMENT);
            break;
        case 54:
            key.gate = MgHerz2kHerz(MEASUREMENT);
            break;
        case 56:
            key.gate = MgHerz2Frenel(MEASUREMENT);
            break;
        case 57:
            key.gate = MgHerz2RadSec(MEASUREMENT);
            break;
        case 61:
            key.gate = Frenel2MkHerz(MEASUREMENT);
            break;
        case 62:
            key.gate = Frenel2MlHerz(MEASUREMENT);
            break;
        case 63:
            key.gate = Frenel2Herz(MEASUREMENT);
            break;
        case 64:
            key.gate = Frenel2kHerz(MEASUREMENT);
            break;
        case 65:
            key.gate = Frenel2MgHerz(MEASUREMENT);
            break;
        case 67:
            key.gate = Frenel2RadSec(MEASUREMENT);
            break;
        case 71:
            key.gate = RadSec2MkHerz(MEASUREMENT);
            break;
        case 72:
            key.gate = RadSec2MlHerz(MEASUREMENT);
            break;
        case 73:
            key.gate = RadSec2Herz(MEASUREMENT);
            break;
        case 74:
            key.gate = RadSec2kHerz(MEASUREMENT);
            break;
        case 75:
            key.gate = RadSec2MgHerz(MEASUREMENT);
            break;
        case 76:
            key.gate = RadSec2Frenel(MEASUREMENT);
            break;
        default:
            printf("�� ������� �������� �������������� ��������, "
                   "��� �� ��������� �������������� � ��������, ������� ��� ������������\n");
            break;
    }

    return key.gate;
}
