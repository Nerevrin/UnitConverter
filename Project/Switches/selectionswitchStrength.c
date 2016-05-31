#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Ñèìâîë '../' - escape-ñèìâîë - èñïîëüçóåòñÿ äëÿ ïåðåõîäà íà îäèí óðîâåíü âûøå;
                                Ýòîò ñèìâîë èñïîëüçóåòñÿ ñòîëüêî ðàç, íà ñêîëüêî óðîâíåé íóæíî ïîäíÿòüñÿ; */

double selectionswitchAngle(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Âûáåðèòå âåëè÷èíó, èç êîòîðîé Âû õîòèòå ïðîèçâåñòè êîíâåðòèðîâàíèå:\n"
           "1 - Íüþòîí;\n"
           "2 - Êèëîíüþòîí;\n"
           "3 - Ìèëëèíüþòîí;\n"
           "4 - Ìåãàíüþòîí;\n"
           "5 - Ìèêðîíüþòîí;\n"
           "6 - Êèëîãðàìì-ñèëà;\n"
           "7 - Ôóíò-ñèëà;\n\t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nÂû âûáðàëè âåëè÷èíó, êîòîðîé íåò â ñïèñêå äîñòóïíûõ âåëè÷èí. \nÏîæàëóéñòà, ñäåëàéòå êîððåêòíûé âûáîð\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Âûáåðèòå âåëè÷èíó, â êîòîðóþ Âû õîòèòå êîíâåðòèðîâàòü Âàøó âåëè÷èíó.\n"
           "Íå íóæíî âûáèðàòü òó æå âåëè÷èíó, ÷òî Âû âûáðàëè â êà÷åñòâå êîíâåðòèðóåìîé:\n"
           "1 - Íüþòîí;\n"
           "2 - Êèëîíüþòîí;\n"
           "3 - Ìèëëèíüþòîí;\n"
           "4 - Ìåãàíüþòîí;\n"
           "5 - Ìèêðîíüþòîí;\n"
           "6 - Êèëîãðàìì-ñèëà;\n"
           "7 - Ôóíò-ñèëà;\n\t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nÂû âûáðàëè âåëè÷èíó, êîòîðîé íåò â ñïèñêå äîñòóïíûõ âåëè÷èí, \nèëè Âû ïûòàåòåñü êîíâåðòèðîâàòü "
                "îäíó è òó æå âåëè÷èíó. \nÏîæàëóéñòà, ñäåëàéòå êîððåêòíûé âûáîð\n\t");
        scanf("%d", &key.output_choice);
    }
key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = Newton2kNewton(MEASUREMENT);
            break;
        case 13:
            key.gate = Newton2mNewton(MEASUREMENT);
            break;
        case 14:
            key.gate = Newton2MgNewton(MEASUREMENT);
            break;
        case 15:
            key.gate = Newton2MkNewton(MEASUREMENT);
            break;
        case 16:
            key.gate = Newton2kgsNewton(MEASUREMENT);
            break;
        case 17:
            key.gate = Newton2fsNewton(MEASUREMENT);
            break;
        case 21:
            key.gate = kNewton2Newton(MEASUREMENT);
            break;
        case 23:
            key.gate = Newton2mNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 24:
            key.gate = Newton2MgNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 25:
            key.gate = Newton2MkNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 26:
            key.gate = Newton2kgsNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 27:
            key.gate = Newton2fsNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 31:
            key.gate = mNewton2Newton(MEASUREMENT);
            break;
        case 32:
            key.gate = Newton2kNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 34:
            key.gate = Newton2MgNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 35:
            key.gate = Newton2MkNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 36:
            key.gate = Newton2kgsNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 37:
            key.gate = Newton2fsNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 41:
            key.gate = MgNewton2Newton(MEASUREMENT);
            break;
        case 42:
            key.gate = Newton2kNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 43:
            key.gate = Newton2mNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 45:
            key.gate = Newton2MkNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 46:
            key.gate = Newton2kgsNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 47:
            key.gate = Newton2fsNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 51:
            key.gate = MkNewton2Newton(MEASUREMENT);
            break;
        case 52:
            key.gate = Newton2kNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 53:
            key.gate = Newton2mNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 54:
            key.gate = Newton2MgNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 56:
            key.gate = Newton2kgsNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 57:
            key.gate = Newton2fsNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 61:
            key.gate = kgsNewton2Newton(MEASUREMENT);
            break;
        case 62:
            key.gate = Newton2kNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 63:
            key.gate = Newton2mNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 64:
            key.gate = Newton2MgNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 65:
            key.gate = Newton2MkNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 67:
            key.gate = Newton2fsNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 71:
            key.gate = fsNewton2Newton(MEASUREMENT);
            break;
        case 72:
            key.gate = Newton2kNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 73:
            key.gate = Newton2mNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 74:
            key.gate = Newton2MgNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 75:
            key.gate = Newton2MkNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 76:
            key.gate = Newton2kgsNewton(fsNewton2Newton(MEASUREMENT));
            break;
        default:
            printf("Íå ââåäåíî çíà÷åíèå êîíâåðòèðóåìîé âåëè÷èíû, "
                   "èëè Âû ïûòàåòåñü êîíâåðòèðîâàòü â âåëè÷èíó, êîòîðóþ óæå ïðåîáðàçóåòå\n");
            break;
    }

    return key.gate;
}
