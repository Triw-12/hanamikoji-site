// SPDX-License-Identifier: GPL-2.0-or-later
// Copyright (c) 2020 Association Prologin <association@prologin.org>

// This file contains the code to call the API functions from the C++ language.
// This file was generated by stechec2-generator. DO NOT EDIT.

#include "api.hh"

// This file only contains simple C++ wrappers around the API, that are
// basically already C++ functions, but with an `extern "C"`.

extern "C" joueur api_id_joueur();
joueur id_joueur()
{
    return api_id_joueur();
}

extern "C" joueur api_id_adversaire();
joueur id_adversaire()
{
    return api_id_adversaire();
}

extern "C" int api_manche();
int manche()
{
    return api_manche();
}

extern "C" int api_tour();
int tour()
{
    return api_tour();
}

extern "C" action_jouee api_tour_precedent();
action_jouee tour_precedent()
{
    return api_tour_precedent();
}

extern "C" int api_nb_cartes_validees(joueur j, int g);
int nb_cartes_validees(joueur j, int g)
{
    return api_nb_cartes_validees(j, g);
}

extern "C" joueur api_possession_geisha(int g);
joueur possession_geisha(int g)
{
    return api_possession_geisha(g);
}

extern "C" bool api_est_jouee_action(joueur j, action a);
bool est_jouee_action(joueur j, action a)
{
    return api_est_jouee_action(j, a);
}

extern "C" int api_nb_cartes(joueur j);
int nb_cartes(joueur j)
{
    return api_nb_cartes(j);
}

extern "C" std::vector<int> api_cartes_en_main();
std::vector<int> cartes_en_main()
{
    return api_cartes_en_main();
}

extern "C" int api_carte_piochee();
int carte_piochee()
{
    return api_carte_piochee();
}

extern "C" error api_action_valider(int c);
error action_valider(int c)
{
    return api_action_valider(c);
}

extern "C" error api_action_defausser(int c1, int c2);
error action_defausser(int c1, int c2)
{
    return api_action_defausser(c1, c2);
}

extern "C" error api_action_choix_trois(int c1, int c2, int c3);
error action_choix_trois(int c1, int c2, int c3)
{
    return api_action_choix_trois(c1, c2, c3);
}

extern "C" error api_action_choix_paquets(int p1c1, int p1c2, int p2c1, int p2c2);
error action_choix_paquets(int p1c1, int p1c2, int p2c1, int p2c2)
{
    return api_action_choix_paquets(p1c1, p1c2, p2c1, p2c2);
}

extern "C" error api_repondre_choix_trois(int c);
error repondre_choix_trois(int c)
{
    return api_repondre_choix_trois(c);
}

extern "C" error api_repondre_choix_paquets(int p);
error repondre_choix_paquets(int p)
{
    return api_repondre_choix_paquets(p);
}

extern "C" void api_afficher_action(action v);
void afficher_action(action v)
{
    api_afficher_action(v);
}

extern "C" void api_afficher_error(error v);
void afficher_error(error v)
{
    api_afficher_error(v);
}

extern "C" void api_afficher_joueur(joueur v);
void afficher_joueur(joueur v)
{
    api_afficher_joueur(v);
}

extern "C" void api_afficher_action_jouee(action_jouee v);
void afficher_action_jouee(action_jouee v)
{
    api_afficher_action_jouee(v);
}
