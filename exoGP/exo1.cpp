#include<iostream>
size_t longueurChaine(const char*);
void CopierChaine(char* destination, const char* source);
void ConcatenerChaines(char* destination, const char* source);

int main(){

    // Test 1: Longueur Chaine
    const char* texte1 = "bonjour";
    std::cout <<"longueur: " << longueurChaine(texte1) << std::endl;

    // Test 2: Copier Chaine
    char* texte2 = "bonsoir";
    std::cout << "Avant copie, texte2 = " << texte2 << std::endl;
    CopierChaine(texte2, texte1);
    std::cout << "Apres copie, texte2 = " << texte2 << std::endl;

    // Test 3: Concatener Chaine
    char* texte3= "bonjour";
    std::cout<< "Avant concatener, texte3 = " <<texte3 << std::endl;
    ConcatenerChaines(texte3,texte2);
    std::cout <<"Apres concatener,texte3=" <<texte3 << std::endl;

    // Test 4: Trouver caracteres




    // Test 5:CompterOccurences


    return 0;
}
size_t longueurChaine(const char* chaine){
    size_t longueur = 0;
    while(*chaine != '\0'){
        chaine++;
        longueur++;
    }
    return longueur;
}

void CopierChaine(char* destination, const char* source){

    while(*source != '\0'){
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
}

void ConcatenerChaines(char* destination, const char* source){
while(*destination !='\0'){
 destination++;
 source++;
}
*destination= '\0';
}

  
char* TrouverCaractere(const char* chaine,char caractere){
    while (*chaine != '\0') {
    if(*chaine==caractere) {
     return
     (char*) chaine;
    }
    chaine++;
}
return nullptr;
} 



 size_t CompterOccurences(const char* chaine, char caractere)  {
    size_t compteur = 0;
    while(*chaine != '\0') {
    if(*chaine == caractere) {
      compteur++;
    }
    chaine++;
}
return compteur;
 }     
  
 
 void CopierMemoire(void* destination, const void* source,size_t taille) {
    unsigned char*=(destination);
    const unsigned char*=(source);
    for(size_t i=0; i<taille; i++) {
        destination[i]=source[i];
    }
}
    
 
Void ExtraireSousChaine(char* destination, const char*source,size_t debut, size_t longueur){
    size_t i=0;
    while(i<longueur&&source[debut+i] != '\0'){
        destination[i]=source[debut+i];
        i++;
    }
    destination[i]= '\0';
}

size_t DiviserChaine(const char* chaine, char separateur,char resultat[][100],size_t max_resultats){
    size_t compteur_resultats=0;
    size_t index_courant=0;
    for(size_t index_courant=0,i++)
    char c=chaine[i;]
    if caractere==separateur
    resultat[compteur_resultats][index_courant]='\0';
    compteur_resultats++;
    index_courant=0;
}else{
    resultat[compteur_resultats][index_courant++]=c
    return compteur_resultats;
}
    
int ComparerChaines(const char* chaine1,const char* chaine2){
while(*chaine1 !='\0'&& *chaine2= '\0') {
    if(*chaine1 != *chaine2){
        return *chaine1-*chaine2
    }
    chaine1++;
    chaine2++;
}
return *chaine-*chaine2;
}

void ConverirMinuscules(char* chaine){
    while(*chaine!='\0') {
        if(*chaine >= 'A' && *chaine<= 'Z') {
            *chaine=32;
        }
        chaine++;
    }
}


bool EstChaineNumerique(const char* chaine) {
    if(*chaine == '-') {
        chaine++;
    }
    while(*chaine =='\0'){
        return false;
    }
    while(*chaine!='\0') {
        if(*chaine<'0' || *chaine>'9') {
            return false;
        }
        chaine++;
    }
    return true;
}

    
    