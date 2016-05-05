#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* ������ '../' - escape-������ - ������������ ��� �������� �� ���� ������� ����;
                                ���� ������ ������������ ������� ���, �� ������� ������� ����� ���������; */


double selectionswitchMass(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
           "1 - �����;\n"
           "2 - ���������;\n"
           "3 - �������;\n"
           "4 - �����;\n"
           "5 - �����;\n"
           "6 - �����;\n"
           "7 - ����;\n"
           "8 - �����;\n"
           "9 - ������;\n"
           "10 - ����;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("�������� ��������, � ������� �� ������ �������������� ���� ��������.\n"
           "�� ����� �������� �� �� ��������, ��� �� ������� � �������� ��������������:\n"
           "1 - �����;\n"
           "2 - ���������;\n"
           "3 - �������;\n"
           "4 - �����;\n"
           "5 - �����;\n"
           "6 - �����;\n"
           "7 - ����;\n"
           "8 - �����;\n"
           "9 - ������;\n\t"
           "10 - ����;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\n�� ������� ��������, ������� ��� � ������ ��������� �������, \n��� �� ��������� �������������� "
                "���� � �� �� ��������. \n����������, �������� ���������� �����\n\t");
        scanf("%d", &key.output_choice);
    }

    if(input_choice < 10 && output_choice < 10)
		 key.id = key.input_choice * 10 + key.output_choice;
	  if(input_choice >= 10)
		key.id = key.input_choice * 100 + key.output_choice;
	  if(input_choice < 10 && output_choice >= 10)
		key.id = key.input_choice * 100 + key.output_choice;

    switch(key.id) {
		//�����
        case 12:
            key.gate = Grams_TO_Kilograms(MEASUREMENT);
            break;
        case 13:
            key.gate = Grams_TO_Quintals(MEASUREMENT);
            break;
        case 14:
            key.gate = Grams_TO_Tonnes(MEASUREMENT);
            break;
        case 15:
            key.gate = Grams_TO_Carats(MEASUREMENT);
            break;
        case 16:
            key.gate = Grams_TO_Stones(MEASUREMENT);
            break;
        case 17:
            key.gate = Grams_TO_Funts(MEASUREMENT);
            break;
        case 18:
            key.gate = Grams_TO_Ounces(MEASUREMENT);
            break;
        case 19:
            key.gate = Grams_TO_Drachmas(MEASUREMENT);
            break;
        case 110:
            key.gate = Grams_TO_Grains(MEASUREMENT);
            break;
        //���������
        case 21:
            key.gate = Kilograms_TO_Grams(MEASUREMENT);
            break;
        case 23:
            key.gate = Kilograms_TO_Quintals(MEASUREMENT);
            break;
        case 24:
            key.gate = Kilograms_TO_Tonnes(MEASUREMENT);
            break;
        case 25:
            key.gate = Kilograms_TO_Carats(MEASUREMENT);
            break;
        case 26:
            key.gate = Kilograms_TO_Stones(MEASUREMENT);
            break;
        case 27:
            key.gate = Kilograms_TO_Funts(MEASUREMENT);
            break;
        case 28:
            key.gate = Kilograms_TO_Ounces(MEASUREMENT);
            break;
        case 29:
            key.gate = Kilograms_TO_Drachmas(MEASUREMENT);
            break;
        case 210:
            key.gate = Kilograms_TO_Grains(MEASUREMENT);
            break;
        //�������
        case 32:
            key.gate = Quintals_TO_Kilograms(MEASUREMENT);
            break;
        case 31:
            key.gate = Quintals_TO_Grams(MEASUREMENT);
            break;
        case 34:
            key.gate = Quintals_TO_Tonnes(MEASUREMENT);
            break;
        case 35:
            key.gate = Quintals_TO_Carats(MEASUREMENT);
            break;
        case 36:
            key.gate = Quintals_TO_Stones(MEASUREMENT);
            break;
        case 37:
            key.gate = Quintals_TO_Funts(MEASUREMENT);
            break;
        case 38:
            key.gate = Quintals_TO_Ounces(MEASUREMENT);
            break;
        case 39:
            key.gate = Quintals_TO_Drachmas(MEASUREMENT);
            break;
        case 310:
            key.gate = Quintals_TO_Grains(MEASUREMENT);
            break;
        //�����
        case 43:
            key.gate = Tonnes_TO_Quintals(MEASUREMENT);
            break;
        case 42:
            key.gate = Tonnes_TO_Kilograms(MEASUREMENT);
            break;
        case 41:
            key.gate = Tonnes_TO_Grams(MEASUREMENT);
            break;
        case 45:
            key.gate = Tonnes_TO_Carat(MEASUREMENT);
            break;
        case 46:
            key.gate = Tonnes_TO_Stone(MEASUREMENT);
            break;
        case 47:
            key.gate = Tonnes_TO_Funts(MEASUREMENT);
            break;
        case 48:
            key.gate = Tonnes_TO_Ounces(MEASUREMENT);
            break;
        case 49:
            key.gate = Tonnes_TO_Drachmas(MEASUREMENT);
            break;
        case 410:
            key.gate = Tonnes_TO_Grains(MEASUREMENT);
            break;
        //�����
        case 54:
            key.gate = Carats_TO_Tonnes(MEASUREMENT);
            break;
        case 53:
            key.gate = Carats_TO_Quintals(MEASUREMENT);
            break;
        case 52:
            key.gate = Carats_TO_Kilograms(MEASUREMENT);
            break;
        case 51:
            key.gate = Carats_TO_Grams(MEASUREMENT);
            break;
        case 56:
            key.gate = Carats_TO_Stones(MEASUREMENT);
            break;
        case 57:
            key.gate = Carats_TO_Funts(MEASUREMENT);
            break;
        case 58:
            key.gate = Carats_TO_Ounces(MEASUREMENT);
            break;
        case 59:
            key.gate = Carats_TO_Drachmas(MEASUREMENT);
            break;
        case 510:
            key.gate = Carats_TO_Grains(MEASUREMENT);
            break;
        //�����
        case 65:
            key.gate = Stones_TO_Carats(MEASUREMENT);
            break;
        case 64:
            key.gate = Stones_TO_Tonnes(MEASUREMENT);
            break;
        case 63:
            key.gate = Stones_TO_Quintals(MEASUREMENT);
            break;
        case 62:
            key.gate = Stones_TO_Kilograms(MEASUREMENT);
            break;
        case 61:
            key.gate = Stones_TO_Grams(MEASUREMENT);
            break;
        case 67:
            key.gate = Stones_TO_Funts(MEASUREMENT);
            break;
        case 68:
            key.gate = Stones_TO_Ounces(MEASUREMENT);
            break;
        case 69:
            key.gate = Stones_TO_Drachmas(MEASUREMENT);
            break;
        case 610:
            key.gate = Stones_TO_Grains(MEASUREMENT);
            break;
        //����
        case 76:
            key.gate = Funts_TO_Stones(MEASUREMENT);
            break;
        case 75:
            key.gate = Funts_TO_Carats(MEASUREMENT);
            break;
        case 74:
            key.gate = Funts_TO_Tonnes(MEASUREMENT);
            break;
        case 73:
            key.gate = Funts_TO_Quintals(MEASUREMENT);
            break;
        case 72:
            key.gate = Funts_TO_Kilograms(MEASUREMENT);
            break;
        case 71:
            key.gate = Funts_TO_Grams(MEASUREMENT);
            break;
        case 78:
            key.gate = Funts_TO_Ounces(MEASUREMENT);
            break;
        case 79:
            key.gate = Funts_TO_Drachmas(MEASUREMENT);
            break;
        case 710:
            key.gate = Funts_TO_Grains(MEASUREMENT);
            break;
        //�����
        case 87:
            key.gate = Ounces_TO_Funts(MEASUREMENT);
            break;
        case 86:
            key.gate = Ounces_TO_Stones(MEASUREMENT);
            break;
        case 85:
            key.gate = Ounces_TO_Carats(MEASUREMENT);
            break;
        case 84:
            key.gate = Ounces_TO_Tonnes(MEASUREMENT);
            break;
        case 83:
            key.gate = Ounces_TO_Quintals(MEASUREMENT);
            break;
        case 82:
            key.gate = Ounces_TO_Kilograms(MEASUREMENT);
            break;
        case 81:
            key.gate = Ounces_TO_Grams(MEASUREMENT);
            break;
        case 89:
            key.gate = Ounces_TO_Drachmas(MEASUREMENT);
            break;
        case 810:
            key.gate = Ounces_TO_Grains(MEASUREMENT);
            break;
        //������
        case 98:
            key.gate = Drachmas_TO_Ounces(MEASUREMENT);
            break;
        case 97:
            key.gate = Drachmas_TO_Funts(MEASUREMENT);
            break;
        case 96:
            key.gate = Drachmas_TO_Stones(MEASUREMENT);
            break;
        case 95:
            key.gate = Drachmas_TO_Carats(MEASUREMENT);
            break;
        case 94:
            key.gate = Drachmas_TO_Tonnes(MEASUREMENT);
            break;
        case 93:
            key.gate = Drachmas_TO_Quintals(MEASUREMENT);
            break;
        case 92:
            key.gate = Drachmas_TO_Kilograms(MEASUREMENT);
            break;
        case 91:
            key.gate = Drachmas_TO_Grams(MEASUREMENT);
            break;
        case 910:
            key.gate = Drachmas_TO_Grains(MEASUREMENT);
            break;
        //����
        case 1009:
            key.gate = Grains_TO_Drachma(MEASUREMENT);
            break;
        case 1008:
            key.gate = Grains_TO_Ounce(MEASUREMENT);
            break;
        case 1007:
            key.gate = Grains_TO_Funts(MEASUREMENT);
            break;
        case 1006:
            key.gate = Grains_TO_Stones(MEASUREMENT);
            break;
        case 1005:
            key.gate = Grains_TO_Carats(MEASUREMENT);
            break;
        case 1004:
            key.gate = Grains_TO_Tonnes(MEASUREMENT);
            break;
        case 1003:
            key.gate = Grains_TO_Quintals(MEASUREMENT);
            break;
        case 1002:
            key.gate = Grains_TO_Kilograms(MEASUREMENT);
            break;
        case 1001:
            key.gate = Grains_TO_Grams(MEASUREMENT);
            break;
        default:
            printf("�� ������� �������� �������������� ��������, "
                   "��� �� ��������� �������������� � ��������, ������� ��� ������������\n");
            break;
    }

    return key.gate;
}

