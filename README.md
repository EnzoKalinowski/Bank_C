# Bank_C
Une simulation à évènement discret d'une banque en C++

--------------------------COMMANDES-----------------------------

Pour générer la documentation:
    make doc

Pour compiler le programme:
    make main 

Exécuter le programme:
    ./bin/main -time <plannedTime> -nbCashier <nbCashier> -averageArrival <averageArrivalIntervalTime> -averageServiceTime<averageServiceTime1> ... <averageServiceTimeNbCashier>

<plannedTime>: Durée prévue 
<nbCashier>: Nombre de caissiers
<averageArrivalIntervalTime>: Interval de temps moyen entre 2 arrivées de client
<averageServiceTime>:temps de service moyen de chaque caissier (Attention à mettre autant de valeurs qu'il y a de caissiers)

Pour obtenir de l'aide :
    ./bin/main help 


