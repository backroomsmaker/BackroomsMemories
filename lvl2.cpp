#include "levels.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void welcome2(){
std::cout << ""<< std::endl;
std::cout << ""<< std::endl;                                                                
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@           @@@@@@   "<< std::endl;
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@          @@@@@@@@  "<< std::endl;
std::cout << "@@!       @@!       @@!  @@@  @@!       @@!               @@@  "<< std::endl;
std::cout << "!@!       !@!       !@!  @!@  !@!       !@!              @!@   "<< std::endl;
std::cout << "@!!       @!!!:!    @!@  !@!  @!!!:!    @!!             !!@    "<< std::endl;
std::cout << "!!!       !!!!!:    !@!  !!!  !!!!!:    !!!            !!:     "<< std::endl;
std::cout << "!!:       !!:       :!:  !!:  !!:       !!:           !:!      "<< std::endl;
std::cout << " :!:      :!:        ::!!:!   :!:        :!:         :!:       "<< std::endl;
std::cout << " :: ::::   :: ::::    ::::     :: ::::   :: ::::     :: :::::  "<< std::endl;
std::cout << ": :: : :  : :: ::      :      : :: ::   : :: : :     :: : :::  "<< std::endl;
std::cout << ""<< std::endl;
std::cout << ""<< std::endl; 
}

void paus() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1000000);
#endif
}

bool lvl2() {
    int corridoio;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "" << std::endl;
    welcome2();
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "Appena entrato è come se venissi risucchiato dai tuoi stessi pensieri." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Riesci a sentirla?" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "<<Ti prego non abbandonarci!>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "<<Adrian afferra la mia mano!>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "Vedi tutto oscurato, ma subito dopo ti senti come se ti fossi immerso nei ricordi di altre persone." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    paus();
    paus();
    paus();
    paus();
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "<<Joe, siamo quasi arrivati>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "<<Non parlare, non abbiamo la minima idea di quanto sia grande questo posto.>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "" << std::endl;
    std::cout << "<<Per ora ce la siamo cavati!>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "<<Dov'è la ragazza?>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "<<Non ne ho idea>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "<<Dobbiamo trovarla!>>" << std::endl;
    std::cout << "" << std::endl;
    paus();
    paus();
    paus();
    paus();
    std::cout << "" << std::endl;
    std::cout << "1. Scegli il corridoio centrale." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "2. Scegli il corridoio di destra." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cin >> corridoio;
    switch(corridoio){
        int corridoio1;
        PERCO:case 1:
                std::cout << "" << std::endl;
                std::cout << "Membri della squadra si appoggiano ai muri mentre il pavimento inclinato li porta in discese vertiginose, le torce scivolano via su superfici lisciate dall'usura." << std::endl;
                std::cout << "" << std::endl;
                std::cout << "<<Che strano posto>>" << std::endl;
                std::cout << "" << std::endl;
                std::cout << "<<Tu hai idea di dove conduca questo corridoio?>>" << std::endl;
                std::cout << "" << std::endl;
                std::cout << "<<Perché tu sì? Allora smettila di parlare a sproposito." << std::endl;
                std::cout << "" << std::endl;
                std::cout << "<<Guarda sembra come una enorme sala macchine>>" << std::endl;
                std::cout << "" << std::endl;
                std::cout << "1. Ispeziona la sala macchine." << std::endl;
                std::cout << "" << std::endl;
                std::cout << "2. Ritorna indietro." << std::endl;
                std::cout << "" << std::endl;
                std::cout << "" << std::endl;
                std::cin >> corridoio1;
                switch(corridoio1){
                    int corridoio4;
                    case 1:
                            std::cout << "" << std::endl;
                            std::cout << "Esploratori si muovono con cautela tra filari di macchinari pulsanti, toccando delicatamente superfici arrugginite e osservando ingranaggi che girano senza scopo." << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "<<Cosa stanno alimentando?>>" << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "<<Non voglio saperlo Adrian, troviamo la ragazza e andiamocene subito." << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "1. Vai in fondo alla sala macchine." << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "2. Controlla da dove siete venuti." << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "" << std::endl;
                            std::cin >> corridoio4;
                            switch(corridoio4){
                                int corridoio99;
                                case 1:
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Joe guarda! Dei simboli!>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "Un esploratore prende appunti frenetici mentre tenta di decifrare simboli criptici, confrontandoli con mappe sbiadite e appunti frammentari di precedenti viaggiatori." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Adrian osserva lì in alto>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Perché è raffigurato un uomo nero?>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Potrebbe essere un'entità>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Qualunque cosa sia non voglio averci a che fare>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "1. Continua a decifrare i simboli." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "2. Continua la ricerca della ragazza." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cin >> corridoio99;
                                        switch(corridoio99){
                                            case 1:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "<<Joe questa figura si muove!>>" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "<<Adrian dobbiamo muoverci!>>" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena i due esploratori si girano per andarsene una figura nera appare davanti a loro." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi si fanno annebbiati." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;
                                            case 2:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Dall'inizio della sala macchine arriva come un lamento." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "La squadra si ferma di colpo, nascondendosi dietro strutture di metallo, mentre rumori inquietanti si avvicinano e poi svaniscono improvvisamente nel nulla." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "<<Adrian dove sei?>>" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena l'esploratore gira la testa si ritrova una figura nera a pochi centimetri da lui." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "<<Bentornato a casa>>" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi diventano confusi e riesci a sentire solo urla di dolore." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;
                                        }
                                int corridoio87;
                                case 2:
                                        std::cout << "" << std::endl;
                                        std::cout << "<<C'è nessuno?>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Bravo urla più forte, le entità non ti hanno ancora sentito bene.>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<ADRIAN ATTENTO DIETRO DI TE!>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "1. Prova a combattere qualsiasi cosa sia." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "2. Scappa." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cin >> corridoio87;
                                        switch(corridoio87){
                                            case 1:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena l'esploratore gira la testa si ritrova una figura nera a pochi centimetri da lui." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "<<Bentornato a casa>>" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi diventano confusi e riesci a sentire solo urla di dolore." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;
                                            case 2:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena i due esploratori si girano per andarsene una figura nera appare davanti a loro." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi si fanno annebbiati." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;
                                        }
                            }
                    int corridoio5;
                    case 2:
                            std::cout << "" << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "<<Adrian c'è un muro!>>" << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "<<Il livello sta cambiando! Corri!>>" << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "1. Vai in fondo alla sala macchine." << std::endl;
                            std::cout << "" << std::endl;
                            std::cout << "2. Nasconditi al centro." << std::endl;
                            std::cout << "" << std::endl;
                            std::cin >> corridoio5;
                            switch(corridoio5){
                                int corridoio69;
                                case 1:
                                        std::cout << "" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Qui siamo al sicuro vero?>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Dovremmo.>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "1. Vai verso il centro della sala." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "2. Continua ad esplorare il fondo della stanza." << std::endl;
                                        std::cin >> corridoio69;
                                        switch(corridoio69){
                                            case 1:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena i due esploratori si girano per andarsene una figura nera appare davanti a loro." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi si fanno annebbiati." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;
                                            case 2:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena l'esploratore gira la testa si ritrova una figura nera a pochi centimetri da lui." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "<<Bentornato a casa>>" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi diventano confusi e riesci a sentire solo urla di dolore." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;                                        
                                        }
                                int corridoio45;
                                case 2:
                                        std::cout << "" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Qui siamo al sicuro vero?>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "<<Dovremmo.>>" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "1. Vai verso il fondo della sala." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "2. Continua ad esplorare il centro della stanza." << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cout << "" << std::endl;
                                        std::cin >> corridoio45;
                                        switch(corridoio45){
                                            int corridoio;
                                            case 1:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena i due esploratori si girano per andarsene una figura nera appare davanti a loro." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi si fanno annebbiati." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;
                                            case 2:
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Appena l'esploratore gira la testa si ritrova una figura nera a pochi centimetri da lui." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "<<Bentornato a casa>>" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "I ricordi diventano confusi e riesci a sentire solo urla di dolore." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Utilizzando quanto appreso dai ricordi ripercorri la stessa strada." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Nel punto preciso dovve avevi interrotto quei ricordi trovi due scheletri." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Non c'è tempo per seppellirli." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "Corri verso l'uscita che è in fondo alla sala macchine e riesci ad uscire." << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    std::cout << "" << std::endl;
                                                    return true;
                                        }
                            }
                }
        case 2:
                goto PERCO;
    }
return false;
}
