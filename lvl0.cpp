#include "levels.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void welcome(){
std::cout << ""<< std::endl;
std::cout << ""<< std::endl;                                                     
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@           @@@@@@@@   "<< std::endl;
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@          @@@@@@@@@@  "<< std::endl;
std::cout << "@@!       @@!       @@!  @@@  @@!       @@!          @@!   @@@@  "<< std::endl;
std::cout << "!@!       !@!       !@!  @!@  !@!       !@!          !@!  @!@!@  "<< std::endl;
std::cout << "@!!       @!!!:!    @!@  !@!  @!!!:!    @!!          @!@ @! !@!  "<< std::endl;
std::cout << "!!!       !!!!!:    !@!  !!!  !!!!!:    !!!          !@!!!  !!!  "<< std::endl;
std::cout << "!!:       !!:       :!:  !!:  !!:       !!:          !!:!   !!!  "<< std::endl;
std::cout << " :!:      :!:        ::!!:!   :!:        :!:         :!:    !:!  "<< std::endl;
std::cout << " :: ::::   :: ::::    ::::     :: ::::   :: ::::     ::::::: ::  "<< std::endl;
std::cout << ": :: : :  : :: ::      :      : :: ::   : :: : :      : : :  :   "<< std::endl;
std::cout << ""<< std::endl;
std::cout << ""<< std::endl;                                                             
}

void pausa() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1000000);
#endif
}

bool lvl0() {
    int stanza1;
    std::cout << ""<< std::endl;
    std::cout << "                 Jashin L. presenta"<< std::endl; 
    std::cout << ""<< std::endl;
    pausa();
    pausa();
    pausa();
    welcome();
    std::cout << ""<< std::endl; 
    pausa();
    pausa();
    pausa();
    std::cout << ""<< std::endl;
    std::cout << " Il silenzio è soffocante, rotto solo dal ronzio incessante delle luci."<< std::endl;
    std::cout << ""<< std::endl; 
    std::cout << ""<< std::endl;  
    std::cout << " L'aria è pesante e stantia, come se nessuno avesse camminato in quelle stanze per anni. "<< std::endl;
    std::cout << ""<< std::endl;
    std::cout << ""<< std::endl; 
    std::cout << " La solitudine è palpabile, e l'atmosfera è carica di una tensione indefinibile, come se qualcosa potesse accadere in qualsiasi momento."<< std::endl; 
    std::cout << ""<< std::endl; 
    std::cout << "I corridoi si torcono e si voltano in modi che sfidano la logica, e le stanze sembrano cambiare quando non vengono osservate."<< std::endl; 
    std::cout << ""<< std::endl;
    std::cout << "Il tempo sembra non avere senso qui; potrebbero essere passati minuti o ore."<< std::endl; 
    std::cout << ""<< std::endl; 
    std::cout << "I tentativi di mappare il labirinto sono spesso vani, con i percorsi che cambiano e si rivelano inaffidabili."<< std::endl; 
    std::cout << ""<< std::endl;
    pausa();
    pausa();
    pausa(); 
    std::cout << ""<< std::endl; 
    std::cout << "Sei in una stanza con due stanze adiacenti." << std::endl;
    std::cout << "1. Stanza di sinistra" << std::endl;
    std::cout << "2. Stanza di destra" << std::endl;
    std::cout << "Quale stanza scegli? "<< std::endl;
    std::cin >> stanza1;
    switch(stanza1){
        ROOM1:case 1:
            int stanza2;
            std::cout << "Entri in una stanza larga e vuota."<< std::endl;
            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
            std::cout << ""<< std::endl;
            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
            std::cin >> stanza2;
            switch(stanza2){
                int stanza3;
                ROOM2:case 1:
                    std::cout << ""<< std::endl;
                    std::cout << "La luce fioca delle lampade fluorescenti crea ombre lunghe e distorte sulla moquette."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cin >> stanza3;
                    switch(stanza3){
                        int stanza4;
                        ROOM3:case 1:
                            std::cout << ""<< std::endl;
                            std::cout << "Procedi lungo un corridoio senza fine, con pareti uniformi e una moquette che si estende fino all'orizzonte."<< std::endl;
                            std::cout << ". Non ci sono porte, quadri o altre caratteristiche; solo l'interminabile ripetizione delle stesse textures."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cin >> stanza4;
                            switch(stanza4){
                                ROOM4:case 1:
                                    goto ROOM6;
                                case 2:
                                    goto ROOM3;
                                case 3:
                                    goto ROOM11;
                             }
                        int stanza5;
                        ROOM5:case 2:
                            std::cout << "Questa stanza è stranamente angolare, con pareti che si incontrano in angoli non ortogonali."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Non ci sono mobili o oggetti di alcun tipo, solo il pavimento, le pareti e il soffitto che si incontrano in un design che sfida la logica."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cin >> stanza5;
                            switch(stanza5){
                                case 1:
                                    goto ROOM8;
                                case 2:
                                    goto ROOM5;
                                case 3:
                                    goto ROOM8;
                             }
                        int stanza6;
                        ROOM6:case 3:
                            std::cout << ""<< std::endl;
                            std::cout << "Una stanza insolitamente lunga e stretta si estende davanti a te."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Le pareti sono nude, senza decorazioni o interruzioni, e il pavimento è coperto dalla stessa moquette consumata presente in tutto il livello."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cin >> stanza6;
                            switch(stanza6){
                                case 1:
                                    goto ROOM3;
                                case 2:
                                    std::cout << "Riesci a trovare una ventola e ti infili dentro."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei uscito dal livello 0, ma in quale sarai capitato ora?"<< std::endl;
                                    return true;
                                case 3:
                                    goto ROOM8;
                             }
                     }
                int stanza7;
                ROOM7:case 2:
                    std::cout << ""<< std::endl;
                    std::cout << "Una stanza con moquette color mostarda, notevolmente sbiadita e macchiata."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Le pareti sono nude e il soffitto ha una lampada fluorescente che emette un ronzio costante."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                    std::cin >> stanza7;
                    switch(stanza7){
                        int stanza8;
                        case 1:
                            std::cout << ""<< std::endl;
                            std::cout << "Un corridoio che sembra estendersi infinitamente, con pareti beige e pavimento in moquette."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Nessuna porta o finestra interrompe la monotonia delle pareti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cin >> stanza8;
                            switch(stanza8){
                                ROOM8:case 1:
                                    goto ROOM7;
                                case 2:
                                    goto ROOM21;
                                case 3:
                                    goto ROOM20;
                             }
                        int stanza9;
                        ROOM9:case 2:
                            std::cout << ""<< std::endl;
                            std::cout << "Una piccola stanza con un angolo particolarmente buio."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Nonostante le luci tremolanti, questo angolo rimane avvolto nell'oscurità, rendendo impossibile vedere cosa si nasconda."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cin >> stanza9;
                            switch(stanza9){
                                case 1:
                                    goto ROOM1;
                                case 2:
                                    goto ROOM9;
                                case 3:
                                    goto ROOM10;
                             }
                        int stanza10;
                        ROOM10:case 3:
                            std::cout << ""<< std::endl;
                            std::cout << " Una stanza vuota dove ogni suono sembra riecheggiare in modo insolito."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Il leggero ronzio delle luci si amplifica, creando una sensazione di inquietudine."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cin >> stanza10;
                            switch(stanza10){
                                case 1:
                                    goto ROOM5;
                                case 2:
                                    goto ROOM10;
                                case 3:
                                    goto ROOM6;
                             }
                     }
                int stanza11;
                ROOM11:case 3:
                    std::cout << ""<< std::endl;
                    std::cout << "Una stanza più grande, caratterizzata da file di colonne senza ornamenti. "<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Non c'è altro in questa stanza, solo la ripetizione geometrica delle colonne."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                    std::cout << ""<< std::endl;
                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                    std::cin >> stanza11;
                    switch(stanza11){
                        int stanza12;
                        ROOM12:case 1:
                            std::cout << ""<< std::endl;
                            std::cout << "Mentre procedi, il corridoio compie curve inaspettate."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Nonostante la mancanza di segni distintivi, ogni volta che giri sembra portarti in un luogo leggermente diverso ma ugualmente monotono."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cin >> stanza12;
                            switch(stanza12){
                                case 1:
                                    goto ROOM11;
                                case 2:
                                    goto ROOM5;
                                case 3:
                                    goto ROOM6;
                             }
                        int stanza13;
                        case 2:
                            std::cout << ""<< std::endl;
                            std::cout << "Questa stanza ha un'acustica strana, dove anche il più piccolo rumore produce eco."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Il pavimento e le pareti sembrano assorbire il suono tranne che per le tue proprie movenze."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cin >> stanza13;
                            switch(stanza13){
                                case 1:
                                    goto ROOM5;
                                case 2:
                                    goto ROOM12;
                                case 3:
                                    goto ROOM3;
                             }
                        int stanza14;
                        case 3:
                            std::cout << ""<< std::endl;
                            std::cout << "Un corridoio che si piega in una serie di zigzag, sempre con lo stesso pavimento in moquette e pareti beige."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Nonostante il percorso tortuoso, ogni sezione sembra identica alla precedente."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cin >> stanza14;
                            switch(stanza14){
                                case 1:
                                    goto ROOM19;
                                case 2:
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Ti senti trascinato da qualcuno verso il muro della stanza."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Finisci per trapassare le pareti e perdi i sensi."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    return true;
                                case 3:
                                    goto ROOM6;
                             }
                     }
             }
        int stanza15;
        case 2:
            std::cout << ""<< std::endl;
            std::cout << "Una stanza dall'aspetto normale, ma con un soffitto insolitamente alto."<< std::endl;
            std::cout << ""<< std::endl;
            std::cout << "Le lampade fluorescenti sono appese a lunghe catene, oscillando leggermente con una brezza impercettibile."<< std::endl;
            std::cout << ""<< std::endl;
            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
            std::cout << ""<< std::endl;
            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
            std::cin >> stanza15;
            switch(stanza15){
                        int stanza16;
                        case 1:
                            std::cout << ""<< std::endl;
                            std::cout << "Un punto dove diversi corridoi si incontrano, tutti ugualmente sbiaditi e privi di caratteristiche."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegliere una direzione sembra quasi irrilevante data la somiglianza tra le opzioni."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cin >> stanza16;
                            switch(stanza16){
                                int stanza17;
                                case 1:
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza17;
                                    switch(stanza17){
                                        case 1:
                                            goto ROOM6;
                                        case 2:
                                            goto ROOM6;
                                        case 3:
                                            goto ROOM8;
                                     }
                                int stanza18;
                                case 2:
                                    std::cout << ""<< std::endl;
                                    std::cout << "Una stanza dove sorprendentemente non c'è eco."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << " I suoni sembrano soffocati, come se l'aria stessa assorbisse ogni rumore."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza18;
                                    switch(stanza18){
                                        case 1:
                                            goto ROOM11;
                                        case 2:
                                            std::cout << ""<< std::endl;
                                        case 3:
                                            goto ROOM19;
                                     }
                                int stanza19;
                                ROOM19:case 3:
                                    std::cout << ""<< std::endl;
                                    std::cout << "Una stanza larga e vuota, con pareti e pavimenti che mostrano un'usura uniforme."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Non c'è nulla che interrompa il panorama di degrado e abbandono."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza19;
                                    switch(stanza19){
                                        case 1:
                                            goto ROOM20;
                                        case 2:
                                            goto ROOM5;
                                        case 3:
                                            goto ROOM24;
                                     }
                             }
                        int stanza20;
                        ROOM20:case 2:
                            std::cout << ""<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Mentre cammini, noti che le ombre sembrano comportarsi in modo strano, allungandosi e ritraendosi in modi che non corrispondono alle fonti di luce."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cin >> stanza20;
                            switch(stanza20){
                                int stanza21;
                                ROOM21:case 1:
                                    std::cout << ""<< std::endl;
                                    std::cout << "Una stanza dove le lampade fluorescenti tremolano costantemente, creando un effetto strobo che rende difficile concentrarsi e navigare."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza21;
                                    switch(stanza21){
                                        case 1:
                                            goto ROOM6;
                                        case 2:
                                            goto ROOM21;
                                        case 3:
                                            std::cout << ""<< std::endl;
                                            std::cout << "Appare un palloncino dal muro."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Non riesci a resistere all'impulso di afferrare la corda del palloncino."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Improvvisamente vieni teletraportato in un nuovo livello."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << ""<< std::endl;
                                            return true;
                                     }
                                int stanza22;
                                ROOM22:case 2:
                                    std::cout << ""<< std::endl;
                                    std::cout << "Una piccola stanza dove il ronzio delle luci sembra sparire, lasciando un silenzio pressante e inaspettato."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza22;
                                    switch(stanza22){
                                        case 1:
                                            goto ROOM6;
                                        case 2:
                                            goto ROOM22;
                                        case 3:
                                            goto ROOM10;
                                     }
                                int stanza23;
                                ROOM23:case 3:
                                    std::cout << ""<< std::endl;
                                    std::cout << "Camminando in questa stanza, noti che il pavimento è insolitamente irregolare sotto la moquette, con dossi e avvallamenti che alterano il tuo passo."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza23;
                                    switch(stanza23){
                                        case 1:
                                            goto ROOM22;
                                        case 2:
                                            goto ROOM6;
                                        case 3:
                                            goto ROOM11;
                                     }
                             }
                        int stanza24;
                        ROOM24:case 3:
                            std::cout << ""<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Una stanza dove, per qualche motivo, le lampade fluorescenti sono tutte spente, lasciando il luogo in una semi-oscurità inquietante."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                            std::cout << ""<< std::endl;
                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                            std::cin >> stanza24;
                            switch(stanza24){
                                int stanza25;
                                ROOM25:case 1:
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza25;
                                    switch(stanza25){
                                        case 1:
                                            goto ROOM26;
                                        case 2:
                                            goto ROOM11;
                                        case 3:
                                            goto ROOM6;
                                     }
                                int stanza26;
                                ROOM26:case 2:
                                    std::cout << ""<< std::endl;
                                    std::cout << "Questa stanza si distingue per la sua bizzarra acustica."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Ogni passo e rumore che fai sembra essere assorbito dalle pareti, creando un effetto di smorzamento che rende l'ambiente ancora più inquietante."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "La moquette è logora e macchiata, e la luce tremolante da sopra crea un'atmosfera sinistra."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza26;
                                    switch(stanza26){
                                        case 1:
                                            goto ROOM22;
                                        case 2:
                                            std::cout << ""<< std::endl;
                                            std::cout << "Vedi un muro particolarmente nero."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Quasi come se fosse estraneo al livello stesso."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Mentre ti avvicini lo oltrepassi e vieni risucchiato."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << ""<< std::endl;
                                            return true;
                                        case 3:
                                            goto ROOM11;
                                     }
                                int stanza27;
                                ROOM27:case 3:
                                    std::cout << ""<< std::endl;
                                    std::cout << "Mentre avanzi, il corridoio presenta svolte brusche e inaspettate"<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Ogni angolo ti conduce a un altro tratto identico di corridoio, con la stessa moquette logora e pareti sporche."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                    std::cout << ""<< std::endl;
                                    std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                    std::cin >> stanza27;
                                    switch(stanza27){
                                        case 1:
                                            goto ROOM12;
                                        case 2:
                                            goto ROOM5;
                                        int stanza28;
                                        ROOM28:case 3:
                                            std::cout << ""<< std::endl;
                                            std::cout << "Entrando in questa stanza, sei colpito dal silenzio assoluto che pervade lo spazio."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Anche il costante ronzio delle luci fluorescenti sembra essere scomparso qui."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Le pareti sembrano assorbire ogni suono, lasciando una quiete totale che è sia pacifica che profondamente inquietante."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Sei in una stanza con tre stanze adiacenti."<< std::endl;
                                            std::cout << ""<< std::endl;
                                            std::cout << "Scegli una delle stanza scegliendo con un numero da 1 a 3."<< std::endl;
                                            std::cin >> stanza28;
                                            switch(stanza28){ 
                                                case 1:
                                                    goto ROOM11;
                                                case 2:
                                                    goto ROOM22;
                                                case 3:
                                                    goto ROOM19;
                                             }
                                     }
                             }
                    }
            }
    return false;
}

