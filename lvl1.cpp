#include "levels.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void welcome1(){
std::cout << ""<< std::endl;
std::cout << ""<< std::endl;                                                                
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@            @@@  "<< std::endl;
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@           @@@@  "<< std::endl; 
std::cout << "@@!       @@!       @@!  @@@  @@!       @@!          @@@!!  "<< std::endl;
std::cout << "!@!       !@!       !@!  @!@  !@!       !@!            !@!  "<< std::endl;                                                                
std::cout << "@!!       @!!!:!    @!@  !@!  @!!!:!    @!!            @!@  "<< std::endl;
std::cout << "!!!       !!!!!:    !@!  !!!  !!!!!:    !!!            !@!  "<< std::endl; 
std::cout << "!!:       !!:       :!:  !!:  !!:       !!:            !!:  "<< std::endl;
std::cout << ":!:       :!:        ::!!:!   :!:        :!:           :!:  "<< std::endl;                                                                
std::cout << ":: ::::   :: ::::     ::::    :: ::::   :: ::::        :::  "<< std::endl;
std::cout << ": :: : :  : :: ::       :     : :: ::   : :: : :        ::  "<< std::endl;                                                                 
std::cout << ""<< std::endl;
std::cout << ""<< std::endl; 
}

void pau() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1000000);
#endif
}

bool lvl1() {
    int scelta;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    pau();
    pau();
    pau();
    pau();
    std::cout<<""<<std::endl;
    welcome1();
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    pau();
    pau();
    pau();
    pau();
    std::cout<<""<<std::endl;
    std::cout<<"Cammino lungo un corridoio che sembra non avere fine."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Le pareti sono ricoperte di vecchi poster sbiaditi e annunci, e ogni tanto inciampo su cavi sparsi sul pavimento."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Entro in una stanza spaziosa dove ogni suono produce echi lunghi e distorti."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<" I muri sono coperti di graffiti incomprensibili, e l'aria è umida e pesante."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"1. Esplora la stanza ulteriormente."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"2. Prosegui verso il corridoio."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"3. Ritorna indietro."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"4. Riposa in quella stanza."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cin>>scelta;
    switch (scelta){
        int a;
        case 1:
            std::cout<<""<<std::endl;
            std::cout<<"La stanza ha un grande orologio da parete."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Le sue lancette sono ferme, ma ogni tanto si muovono bruscamente in modo imprevedibile. "<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Sotto di esso, una serie di sedie impilate in un angolo, come se qualcuno avesse lasciato in fretta."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"1. Esci dalla stanza."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"2. Riposa."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<""<<std::endl;
            std::cin>>a;
            switch(a){
                int vita;
                case 1:
                        std::cout<<""<<std::endl;
                        std::cout<<"Esci facendo attenzione a ciò che è attorno."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Osservi che a metà del percorso c'è un'altra stanza."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Questi corridoi sembrano interminabili e le stanze sembrano moltiplicarsi."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Speri solamente che non sia un labirinto come il livello 0."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Prosegui per il corridoio fino alla fine."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Arriva a metà ed entra nella stanza."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cin>>a;
                        switch(vita){
                            int quadrato;
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"<<NO>>"<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"<<LASCIAMI RIPOSARE>>"<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Più ti avvicini verso la fine del corridoio più la voce diventa forte."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"1. Prosegui."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"2. Ritorna indietro."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cin>>quadrato;
                                    switch(quadrato){
                                        case 1:
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Prosegui verso la fine del corridoio."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"All'improvviso dal fondo, precisamente dall'angolo destra una figura nera esce e ti osserva."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Indica alle tue spalle."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"<<Avresti dovuto lasciarci riposare...>>"<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Non riesci nemmeno a girarti per capire chi parla dietro di te."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"La tua vista ti si annebbia mentre ti rendi conto che vieni fatto a pezzi."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                return false;
                                        case 2: 
                                                std::cout<<""<<std::endl;
                                                std::cout<<"<<Ti ringrazio, entra nella stanza a sinistra e attraversa il muro per andartene e non tornare mai più."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Fai esattamente ciò che la voce ti dice e riesci ad attraversare la parete."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<""<<std::endl;
                                                return true;
                                    }
                            int triangolo;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La stanza è scarsamente illuminata da una luce fluorescente che emette un ronzio costante, creando un'atmosfera surreale."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Le pareti, un tempo di un giallo brillante, ora sono scolorite e macchiate dall'umidità."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<" Pezzi di moquette, consumati e sporchi, si staccano dal pavimento, e l'aria è pervasa da un odore di muffa e polvere."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Nonostante l'ambiente inospitale trovi un momento di pace, seppur breve, seduto in silenzio, raccogliendo le forze per le sfide future."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La consapevolezza della necessità di proseguire la tua esplorazione è palpabile, ma per ora, questo breve riposo offre una tregua benvenuta dalla costante tensione dell'esplorazione."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Qualcosa ti sta accarezzando la testa."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Lo percepisci chiaramente."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"1. Allontanati subito e afferra lo zaino per terra."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"2. Prova ad interagire."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cin>>triangolo;
                                    switch(triangolo){
                                        case 1:
                                                std::cout<<""<<std::endl;
                                                std::cout<<"<<Riposa pure, ti garantirò l'accesso al livello successivo.>>"<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Il pavimento sotto di te diventa vuoto e lo oltrepassi."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                return true;
                                        case 2: 
                                                std::cout<<""<<std::endl;
                                                std::cout<<"<<Riposa pure, ti garantirò l'accesso al livello successivo.>>"<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Il pavimento sotto di te diventa vuoto e lo oltrepassi."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                return true;
                                    }
                        }
                int vita1;
                case 2: 
                        std::cout<<""<<std::endl;
                        std::cout<<"La stanza è scarsamente illuminata da una luce fluorescente che emette un ronzio costante, creando un'atmosfera surreale."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Le pareti, un tempo di un giallo brillante, ora sono scolorite e macchiate dall'umidità."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<" Pezzi di moquette, consumati e sporchi, si staccano dal pavimento, e l'aria è pervasa da un odore di muffa e polvere."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Nonostante l'ambiente inospitale trovi un momento di pace, seppur breve, seduto in silenzio, raccogliendo le forze per le sfide future."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"La consapevolezza della necessità di proseguire la tua esplorazione è palpabile, ma per ora, questo breve riposo offre una tregua benvenuta dalla costante tensione dell'esplorazione."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Qualcosa ti sta accarezzando la testa."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Lo percepisci chiaramente."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Allontanati subito e afferra lo zaino per terra."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Prova ad interagire."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cin>>vita1;
                        switch(vita1){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"<<Riposa pure, ti garantirò l'accesso al livello successivo.>>"<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Il pavimento sotto di te diventa vuoto e lo oltrepassi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return true;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"<<Riposa pure, ti garantirò l'accesso al livello successivo.>>"<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Il pavimento sotto di te diventa vuoto e lo oltrepassi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return true;
                        }
            }
        int b;
        CORR:case 2:
            std::cout<<""<<std::endl;
            std::cout<<"Mentre cammino, le luci sopra di me iniziano a spegnersi una dopo l'altra, lasciandomi in un'oscurità crescente."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"La tensione aumenta mentre mi affretto a trovare una fonte di luce."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"1. Prosegui verso il corridoio."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"2. Infilati nella prima stanza che trovi."<<std::endl;
            std::cout<<""<<std::endl;
            std::cin>>b;
            switch(b){
                int opzione;
                case 1:
                        std::cout<<""<<std::endl;
                        std::cout<<" In un lungo corridoio, sento sussurri indistinti provenire dalle pareti."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Non riesco a capire le parole, ma c'è un tono urgente che mi fa accelerare il passo."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Prosegui verso la fine del corridoio."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Ritorna indietro."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cin>>opzione;
                        switch(opzione){
                            int riposo;
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"<<NO>>"<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"<<LASCIAMI RIPOSARE>>"<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Più ti avvicini verso la fine del corridoio più la voce diventa forte."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"1. Prosegui."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"2. Ritorna indietro."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cin>>riposo;
                                    switch(riposo){
                                            case 1:
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"Prosegui verso la fine del corridoio."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"All'improvviso dal fondo, precisamente dall'angolo destra una figura nera esce e ti osserva."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"Indica alle tue spalle."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"<<Avresti dovuto lasciarci riposare...>>"<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"Non riesci nemmeno a girarti per capire chi parla dietro di te."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"La tua vista ti si annebbia mentre ti rendi conto che vieni fatto a pezzi."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    return false;
                                            case 2:
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"<<Ti ringrazio, entra nella stanza a sinistra e attraversa il muro per andartene e non tornare mai più."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"Fai esattamente ciò che la voce ti dice e riesci ad attraversare la parete."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    std::cout<<""<<std::endl;
                                                    return true;
                                    }
                            case 2: 
                                    goto CORR;
                        }
                int opzione1;
                FOL:case 2: 
                        std::cout<<""<<std::endl;
                        std::cout<<"Scopro una stanza dove tutto è capovolto: i mobili sono attaccati al soffitto, e persino le gocce d'acqua sembrano cadere verso l'alto."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"È un'esperienza che sfida la mia percezione della realtà."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Non riesci più a comprendere nulla."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Cosa sta succedendo?"<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. ???"<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. ???"<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cin>>opzione1;
                        switch(opzione1){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La pressione nella tua testa diventa insostenibile."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Inizi a sanguinare dal naso e dagli occhi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Purtroppo questa è la tua fine."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La pressione nella tua testa diventa insostenibile."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Inizi a sanguinare dal naso e dagli occhi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Purtroppo questa è la tua fine."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                        }
            }
        case 3:
            std::cout<<""<<std::endl;
            std::cout<<"C'è una nuova stanza nella direzione da cui sei apparso."<<std::endl;
            std::cout<<""<<std::endl;
            goto FOL;
        int d;
        case 4:
            std::cout<<""<<std::endl;
            std::cout<<"La stanza è scarsamente illuminata da una luce fluorescente che emette un ronzio costante, creando un'atmosfera surreale."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Le pareti, un tempo di un giallo brillante, ora sono scolorite e macchiate dall'umidità."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<" Pezzi di moquette, consumati e sporchi, si staccano dal pavimento, e l'aria è pervasa da un odore di muffa e polvere."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Nonostante l'ambiente inospitale trovi un momento di pace, seppur breve, seduto in silenzio, raccogliendo le forze per le sfide future."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"La consapevolezza della necessità di proseguire la tua esplorazione è palpabile, ma per ora, questo breve riposo offre una tregua benvenuta dalla costante tensione dell'esplorazione."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Qualcosa ti sta accarezzando la testa."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Lo percepisci chiaramente."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"1. Allontanati subito e afferra lo zaino per terra."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"2. Prova ad interagire."<<std::endl;
            std::cout<<""<<std::endl;
            std::cin>>d;
            switch(d){
                case 1:
                        std::cout<<""<<std::endl;
                        std::cout<<"<<Riposa pure, ti garantirò l'accesso al livello successivo.>>"<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Il pavimento sotto di te diventa vuoto e lo oltrepassi."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                        std::cout<<""<<std::endl;
                        return true;
                case 2: 
                        std::cout<<""<<std::endl;
                        std::cout<<"<<Riposa pure, ti garantirò l'accesso al livello successivo.>>"<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Il pavimento sotto di te diventa vuoto e lo oltrepassi."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Sei riuscito ad uscire dal livello 1."<<std::endl;
                        std::cout<<""<<std::endl;
                        return true;

            }
    }
return false;
}