#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */

double selectionswitchQuantityOfSubstance(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
           "1 - ����������;\n"
           "2 - ����������;\n"
           "3 - �����;\n"
           "4 - ���������;\n"
           "5 - ���������;\n"
           "6 - ����-�����;\n\t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("�������� ��������, � ������� �� ������ �������������� ���� ��������.\n"
           "�� ����� �������� �� �� ��������, ��� �� ������� � �������� ��������������:\n"
           "1 - ����������;\n"
           "2 - ����������;\n"
           "3 - �����;\n"
           "4 - ���������;\n"
           "5 - ���������;\n"
           "6 - ����-�����;\n\t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������, \n��� �� ��������� �������������� "
                "���� � �� �� ��������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = MkMole2mMole(MEASUREMENT);
            break;
        case 13:
            key.gate = MkMole2Mole(MEASUREMENT);
            break;
        case 14:
            key.gate = MkMole2kMole(MEASUREMENT);
            break;
        case 15:
            key.gate = MkMole2MgMole(MEASUREMENT);
            break;
        case 16:
            key.gate = MkMole2PoundMole(MEASUREMENT);
            break;
        case 21:
            key.gate = mMole2MkMole(MEASUREMENT);
            break;
        case 23:
            key.gate = mMole2Mole(MEASUREMENT);
            break;
        case 24:
            key.gate = mMole2kMole(MEASUREMENT);
            break;
        case 25:
            key.gate = mMole2MgMole(MEASUREMENT);
            break;
        case 26:
            key.gate = mMole2PoundMole(MEASUREMENT);
            break;
        case 31:
            key.gate = Mole2MkMole(MEASUREMENT);
            break;
        case 32:
            key.gate = Mole2mMole(MEASUREMENT);
            break;
        case 34:
            key.gate = Mole2kMole(MEASUREMENT);
            break;
        case 35:
            key.gate = Mole2MgMole(MEASUREMENT);
            break;
        case 36:
            key.gate = Mole2PoundMole(MEASUREMENT);
            break;
        case 41:
            key.gate = kMole2MkMole(MEASUREMENT);
            break;
        case 42:
            key.gate = kMole2mMole(MEASUREMENT);
            break;
        case 43:
            key.gate = kMole2Mole(MEASUREMENT);
            break;
        case 45:
            key.gate = kMole2MgMole(MEASUREMENT);
            break;
        case 46:
            key.gate = kMole2PoundMole(MEASUREMENT);
            break;
        case 51:
            key.gate = MgMole2MkMole(MEASUREMENT);
            break;
        case 52:
            key.gate = MgMole2mMole(MEASUREMENT);
            break;
        case 53:
            key.gate = MgMole2Mole(MEASUREMENT);
            break;
        case 54:
            key.gate = MgMole2kMole(MEASUREMENT);
            break;
        case 56:
            key.gate = MgMole2PoundMole(MEASUREMENT);
            break;
        case 61:
            key.gate = PoundMole2MkMole(MEASUREMENT);
            break;
        case 62:
            key.gate = PoundMole2mMole(MEASUREMENT);
            break;
        case 63:
            key.gate = PoundMole2Mole(MEASUREMENT);
            break;
        case 64:
            key.gate = PoundMole2kMole(MEASUREMENT);
            break;
        case 65:
            key.gate = PoundMole2MgMole(MEASUREMENT);
            break;
        default:
            printf("�� ������� �������� �������������� ��������, "
                   "��� �� ��������� �������������� � ��������, ������� ��� ������������\n");
            break;
    }

    return key.gate;
}
