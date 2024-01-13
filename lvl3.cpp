#include "levels.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void bar(){
    unsigned limit = 40000000;

    // creating a wait bar for the calculations! 
    int targetPct = 10;
    unsigned targetCount = limit * targetPct / 100 - 1;

    for (size_t j = 0; j < limit; j++) {
    if (j == targetCount) {
        std::cout << targetPct << "% ";
        targetPct += 10;
        targetCount = limit * targetPct / 100 - 1;
    }
    }
}


void welcome3(){
std::cout << ""<< std::endl;
std::cout << ""<< std::endl;                                                                                                                             
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@          @@@@@@   "<< std::endl;
std::cout << "@@@       @@@@@@@@  @@@  @@@  @@@@@@@@  @@@          @@@@@@@  "<< std::endl;
std::cout << "@@!       @@!       @@!  @@@  @@!       @@!              @@@  "<< std::endl;
std::cout << "!@!       !@!       !@!  @!@  !@!       !@!              @!@  "<< std::endl;
std::cout << "@!!       @!!!:!    @!@  !@!  @!!!:!    @!!          @!@!!@   "<< std::endl;
std::cout << "!!!       !!!!!:    !@!  !!!  !!!!!:    !!!          !!@!@!   "<< std::endl;
std::cout << "!!:       !!:       :!:  !!:  !!:       !!:              !!:  "<< std::endl;
std::cout << " :!:      :!:        ::!!:!   :!:        :!:             :!:  "<< std::endl;
std::cout << " :: ::::   :: ::::    ::::     :: ::::   :: ::::     :: ::::  "<< std::endl;
std::cout << ": :: : :  : :: ::      :      : :: ::   : :: : :      : : :   "<< std::endl;
std::cout << ""<< std::endl;
std::cout << ""<< std::endl; 
}

void pa() {
#ifdef _WIN32
    Sleep(1000);
#else
    usleep(1000000);
#endif
}

bool lvl3() {
    int scelta;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    welcome3();
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<"Cosa succede?"<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<"Sp4riSc1 N3l Gr1g1o Ombr0S0"<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Una breve anomalia?"<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<"Comunque ora possiamo proseguire nei ricordi del soggetto."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Proseguiamo."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Fai attenzione, dalla mia analisi sembra che questo sia il primo livello veramente pericoloso incontrato dal soggetto."<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"Carico i ricordi."<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    bar();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<Inizio a ricordare chi sono.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<Mi chiamo Max.>>"<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<"<<Ho 25 anni e vivevo da solo.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<No aspetta, ma sono veramente io? Perché in tasca ho tutte queste carte di identità?>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<Luis, Max, Anthony, Mattew....>>"<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<"<<Chi sono io tra questi?>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<Questo chiasso assordante nella mia testa diventa sempre più forte.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<Sembra una stazione elettrica, che razza di posto è?>>"<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<"<<Ho uno strano presentimento, ma devo proseguire.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<< Devo riuscire a comprendere.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    pa();
    std::cout<<""<<std::endl;
    std::cout<<"<<Questa stanza è enorme, ma la cosa peggiore è il calore.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<Posso percepire l'elettricità che passa attraverso i muri.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"<<Sembra che io possa percepire l'ambiente circostante.>>"<<std::endl;
    pa();
    pa();
    pa();
    pa();
    pa();
    USCITE:std::cout<<""<<std::endl;
    std::cout<<"<<D'accordo, proseguiamo.>>"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"La stanza ha quattro uscite e ciascuna uscita porta a due corridoi lunghi."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"1. Prima uscita."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"2. Seconda uscita."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"3. Terza uscita."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"4. Quarta uscita."<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cin>>scelta;
    switch (scelta){
        int prima;
        case 1:
            std::cout<<""<<std::endl;
            std::cout<<"Questo corridoio sembra pulsare con una vita propria, le pareti rivestite di pannelli elettrici e cavi spessi come serpenti."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"L'illuminazione è intermittente, lampeggiando in modo irregolare e proiettando ombre danzanti."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"L'aria è carica di statica, facendo rizzare i capelli sulla pelle e mandando scosse leggere ogni volta che si tocca una superficie metallica."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"Il suono costante del ronzio elettrico è soffocante, e l'odore di metallo caldo permea l'ambiente."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"In alcuni punti, scintille improvvisi balenano da pannelli guasti, rendendo la progressione un pericoloso gioco di destrezza e tempismo."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"1. Prosegui."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"2. Cerca di tornare indietro."<<std::endl;
            std::cout<<""<<std::endl;
            std::cin>>prima;
            switch(prima){
                int vita;
                case 1:
                        std::cout<<""<<std::endl;
                        std::cout<<"Mentre prosegui ti muovi con cautela tra i cavi penzolanti, un improvviso scoppio di scintille illumina la scena. "<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Un'entità elettrica, simile a un fulmine vivente, emerge dal pannello danneggiato accanto a lui."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Cerca di attaccarla."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Cerca di scappare."<<std::endl;
                        std::cin>>vita;
                        switch(vita){
                            int quadrato;
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"L'entità scocca verso l'esploratore a una velocità folgorante, crepitando e scricchiolando."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"L'esploratore, sorpreso, salta indietro, evitando per un soffio l'assalto."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"1. Cerca di aggirare l'entità."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"2. Continua l'attacco."<<std::endl;
                                    std::cin>>quadrato;
                                    switch(quadrato){
                                        case 1:
                                                std::cout<<"Con il cuore in gola, l'esploratore si tuffa dietro un grande trasformatore, cercando riparo."<<std::endl;
                                                std::cout<<"Purtroppo l'entità sfrutta il vantaggio ambientale e si muove più velocemente."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Con un movimento ancora più rapido raggiunge la tua testa alla stessa velocità di un fulmine."<<std::endl;
                                                std::cout<<"Non riesci in alcun modo a reagire e resti folgorato."<<std::endl;
                                                return false;
                                        case 2: 
                                                std::cout<<"Afferi quella che sembra essere un bastone di legno e ti prepari ad attaccare."<<std::endl;
                                                std::cout<<"Dopo alcuni secondi di tensione, l'entità si dissolve nell'aria, lasciando l'esploratore tremante ma illeso, consapevole di quanto sia sottile la linea tra vita e morte in questo luogo."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Dal pavimento delle mani ti afferrano e ti trascinano verso il vuoto."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Sei riuscito a scappare dal livello 3."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<""<<std::endl;
                                                return true;
                                    }
                            int triangolo;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Con il cuore in gola, l'esploratore si tuffa dietro un grande trasformatore, cercando riparo."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"1. Continua a nasconderti."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"2. Tenta di attaccare."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cin>>triangolo;
                                    switch(triangolo){
                                        case 1:
                                                std::cout<<"Purtroppo l'entità sfrutta il vantaggio ambientale e si muove più velocemente."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Con un movimento ancora più rapido raggiunge la tua testa alla stessa velocità di un fulmine."<<std::endl;
                                                std::cout<<"Non riesci in alcun modo a reagire e resti folgorato."<<std::endl;
                                                return false;
                                        case 2: 
                                                std::cout<<"Purtroppo l'entità sfrutta il vantaggio ambientale e si muove più velocemente."<<std::endl;
                                                std::cout<<""<<std::endl;
                                                std::cout<<"Con un movimento ancora più rapido raggiunge la tua testa alla stessa velocità di un fulmine."<<std::endl;
                                                std::cout<<"Non riesci in alcun modo a reagire e resti folgorato."<<std::endl;
                                                return false;
                                    }
                        }
                case 2: 
                        goto USCITE;
            }
        int seconda;
        case 2:
            std::cout<<""<<std::endl;
            std::cout<<"Questo corridoio è dominato dalla presenza di macchinari pesanti, ormai in disuso."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Grandi generatori, turbine e complessi sistemi di trasmissione si ergono come monumenti dimenticati, ricoperti di polvere e ruggine. Il suono qui è un lamento metallico costante, proveniente dalle parti mobili ancora in funzione, accompagnato dal gocciolamento dell'acqua da qualche tubatura rotta."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<" L'atmosfera è claustrofobica, con il sentiero stretto tra i macchinari, costringendo gli esploratori a muoversi con cautela per evitare di rimanere intrappolati o schiacciati."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Mentre passi accanto a un vecchio generatore, un rumore metallico improvviso risuona attraverso il corridoio."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"Dall'ombra di un macchinario, emerge una figura meccanica, i suoi arti scricchiolano minacciosamente."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"1. Attacca la creatura."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"2. Tenta di aggirarla."<<std::endl;
            std::cin>>seconda;
            switch(seconda){
                int opzione;
                case 1:
                        std::cout<<""<<std::endl;
                        std::cout<<" La creatura meccanica si muove con movimenti sgraziati ma rapidi, brandendo pezzi di metallo come armi improvvisate."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Prendi un estintore a pochi centimetri da te e lo utilizzi contro la creatura."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Usa il fumo dell'estintore per accecare la creatura."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Usa l'estintore come un'arma."<<std::endl;
                        std::cin>>opzione;
                        switch(opzione){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La creatura non sembra essere minimamente infastidita dal fumo."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Con un movimento rapido conficca una delle sue estremità nel tuo torace."<<std::endl;
                                    std::cout<<"La vista ti si annebbia, purtroppo la tua avventura termina qui."<<std::endl;
                                    return false;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Provi a colpire la creatura con l'estintore, ma è del tutto inutile."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La creatura utilizza una delle sue estremità per tagliarti di netto entrambe le braccia."<<std::endl;
                                    std::cout<<"La tua vista si annebbia, ma sei certo che la tua ora è giunta."<<std::endl;
                                    return false;
                        }
                int opzione1;
                case 2: 
                        std::cout<<""<<std::endl;
                        std::cout<<"La creatura sembra disorientata non riuscendoti a percepire."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Prova ad attaccarla a sorpresa."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Prosegui silenziosamente verso la fine del corridoio."<<std::endl;
                        std::cin>>opzione1;
                        switch(opzione1){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Mentre provi ad attaccarla con un estintore trovato lì vicino, la creatura riesce a reagire in un battito di ciglia."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Le tue braccia vengono mozzate e l'estintore cade per terra, fortunatamente la vista ti si annebbia e non vedrai cosa sarà di te dopo."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Continui a camminare silenziosamente sperando che la creatura non ti senta."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Dal muro escono delle mani che ti afferrano e ti trascinano dentro il muro."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Sei riuscito ad uscire dal livello 3."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return true;
                        }
            }
        int terza;
        case 3:
            std::cout<<""<<std::endl;
            std::cout<<"In netto contrasto con il resto del livello, questo corridoio è avvolto in un silenzio quasi totale."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<" Le pareti lisce, prive di qualsiasi segno di impianti elettrici, sembrano assorbire ogni suono."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"La luce qui è fioca e costante, emanando da pannelli al neon che corrono lungo il soffitto."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<" L'assenza di rumore rende ogni passo e ogni respiro eccessivamente evidenti, amplificando il senso di isolamento."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"L'ambiente è inquietante, quasi surreale, e molti esploratori riportano un senso di paranoia crescente mentre avanzano, come se fossero osservati da occhi invisibili."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Camminando nel silenzio opprimente, l'esploratore si ferma all'improvviso, sentendo un lieve scricchiolio dietro di sé."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"Si volta lentamente per vedere una figura ombrosa emergere dalle tenebre."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"1. Prova ad attaccare la figura."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"2. Prova ad aggirarla."<<std::endl;
            std::cout<<""<<std::endl;
            std::cin>>terza;
            switch(terza){
                int esagono;
                case 1:
                        std::cout<<""<<std::endl;
                        std::cout<<"La figura si muove con una velocità spettrale, quasi sfocata, e si lancia verso l'esploratore con un urlo soffocato."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"L'esploratore si getta a terra, rotolando per evitare l'attacco. Si alza rapidamente, il cuore che batte all'impazzata, e inizia a correre lungo il corridoio con la figura inquietante alle sue calcagna."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Dopo una frenetica corsa, l'esploratore riesce a distanziare il suo inseguitore, ma rimane profondamente scosso dall'esperienza, il silenzio del corridoio ora ancora più soffocante."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Tenta un attacco a sorpresa."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Continua a scappare."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cin>>esagono;
                        switch(esagono){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Provi un attacco a sorpresa approfittando dell'ambiente poco illuminato."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Purtroppo la creatura riesce a vedere perfettamente nell'oscurità e l'effetto sorpresa è inutile."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"In una frazione di secondi la creatura arriva alle tue spalle prima ancora che tu possa girarti."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La vista ti si annebbia mentre vieni fatto a pezzi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Purtroppo la creatura riesce a vedere perfettamente nell'oscurità e la fuga è inutile."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"In una frazione di secondi la creatura arriva alle tue spalle prima ancora che tu possa girarti."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La vista ti si annebbia mentre vieni fatto a pezzi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                        }
                int ennagono;
                case 2: 
                        std::cout<<""<<std::endl;
                        std::cout<<"La creatura ti nota, ma non sembra essere minacciosa."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Ti muovi lateralmente continuando a mantenere una certa distanza."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Cerca di attaccarla sfruttando un attacco a sorpresa."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Prosegui silenziosamente."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cin>>ennagono;
                        switch(ennagono){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Provi un attacco a sorpresa approfittando dell'ambiente poco illuminato."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Purtroppo la creatura riesce a vedere perfettamente nell'oscurità e l'effetto sorpresa è inutile."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"In una frazione di secondi la creatura arriva alle tue spalle prima ancora che tu possa girarti."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La vista ti si annebbia mentre vieni fatto a pezzi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Continui a camminare silenziosamente sperando che la creatura non ti senta."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Dal muro escono delle mani che ti afferrano e ti trascinano dentro il muro."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Sei riuscito ad uscire dal livello 3."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return true;
                        }
            }
        int quarta;
        case 4:
            std::cout<<""<<std::endl;
            std::cout<<"Questo corridoio è un vero e proprio labirinto di passaggi stretti e angoli acuti."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"Ogni sezione sembra identica alla precedente, con pareti di cemento grezzo e pavimenti macchiati di olio e sporco."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"La luce è scarsa, proveniente da lampade a incandescenza sparse e deboli."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"L'orientamento è quasi impossibile, e il senso di smarrimento si insinua rapidamente."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"Rumori distanti di macchinari e occasionali grida indistinte si fanno strada attraverso i passaggi, aggiungendo un elemento di tensione e urgenza."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<" Improvvisamente, senti un respiro pesante alle tue spalle."<<std::endl;
            std::cout<<""<<std::endl;
            pa();
            pa();
            pa();
            pa();
            pa();
            std::cout<<"1. Girati e prova a colpire qualsiasi cosa sia."<<std::endl;
            std::cout<<""<<std::endl;
            std::cout<<"2. Inizia a scappare."<<std::endl;
            std::cout<<""<<std::endl;
            std::cin>>quarta;
            switch(quarta){
                int lol;
                case 1:
                        std::cout<<""<<std::endl;
                        std::cout<<"Voltandoti di scatto, ti trovi faccia a faccia con una creatura dall'aspetto distorto, con occhi iniettati di sangue."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"La creatura ringhia e si avventa."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Con un calcio guadagni pochi metri di distanza dalla creatura."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Tenta un attacco frontale."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Tenta di scappare."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cin>>lol;
                        switch(lol){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"In una frazione di secondi la creatura arriva alle tue spalle prima ancora che tu possa girarti."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La vista ti si annebbia mentre vieni fatto a pezzi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"In una frazione di secondi la creatura arriva alle tue spalle prima ancora che tu possa girarti."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La vista ti si annebbia mentre vieni fatto a pezzi."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return false;
                        }
                int lmao;       
                case 2: 
                        std::cout<<""<<std::endl;
                        std::cout<<"La creatura inizia a rincorrerti."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"Sembra molto rapida, ma l'adrenalina riesce a farti prendere abbastanza distanza."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"1. Tenta un attacco a sorpresa."<<std::endl;
                        std::cout<<""<<std::endl;
                        std::cout<<"2. Continua la fuga."<<std::endl;
                        std::cin>>lmao;
                        switch(lmao){
                            case 1:
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Per la disperazione ti volti per affrontare la creatura, che si avvicina rapidamente, ringhiando con ferocia."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Ma la creatura è troppo veloce e potente."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Con un urlo di terrore vieni sopraffatto."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"La scena si chiude con la creatura che si accanisce sul tuo corpo inerme"<<std::endl;
                                    return false;
                            case 2: 
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Continui a correre lungo il corridoio."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Mentre corri, senti i passi pesanti della creatura alle tue spalle, ma non osi voltarti."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Con un'ultima svolta disperata ti ritrovi davanti a una porta semiaperta, che conduce a un'altra sezione. Senza esitare, ti lancia attraverso la soglia e chiudi la porta alle tue spalle."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<"Sei riuscito ad uscire dal livello 3."<<std::endl;
                                    std::cout<<""<<std::endl;
                                    std::cout<<""<<std::endl;
                                    return true;
                        }
            }
    }
return false;
}