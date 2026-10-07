Initialiser flag <- True
Initialiser constante nb_col <-5
Initialiser constante valeur_min <-2
Initialiser constante valeur_max <-1000
Initialiser constante espace_entre_chiffre <- 7

Tant que flag est vrai

    Initialiser nombre_utilisateur <- 0

    faire 
        afficher "entrer une valeur [valeur_min-valeur_max] : "
        nombre_utilisateur <- valuer de l'utilisateur
        vider le buffer
    tant que la valeur n'est pas comprise entre valeur_min et valeur_max

    Initialiser est_premier <- True
    Initaliser compteur_nb_premier <- 0

    afficher "voici la liste des nombres premier" + retour à la ligne

    pour i <- valeur_min et i plus petit ou égal à la valeur utilisateur i ++
        pour x <- valeur_min et x plus petit que i x++

            si i modulo x est égal à 0
                est_premier <- False
                sort de la boucle
            fin si
            
        fin pour

        si est_premier est vrai
            afficher setw(espace_entre_chiffre) + i

            compteur_nb_premier <- compteur_nb_premier + 1
            si compteur_nb_premier est égal à nb_col 
                afficher retour de ligne
                compteur_nb_premier = 0
            fin si

        fin si

        est_premier <- True

    fin pour

    
    si compteur_nb_premier est différent de 0
        afficher un retour à la ligne
    fin si

    afficher un retour à la ligne

    char reponse_utilisateur <- ' '

    faire

        afficher "Voulez-vous recommencer [O/N] : "
        reponse_utilisateur <- choix_utilisateur
        vider le buffer

    tant que reponse_utilisateur est différent de O et N

    si reponse_utilisateur est égal à 'N'
        flag <- False

fin tant que

afficher "Fin de programme"