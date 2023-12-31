#include "Fita.h"

    Fita::Fita(string titulo, string autor, int ano, string duracao, string idioma, string formato) : Midia(titulo, autor, ano, duracao, idioma){

    }

    Fita::Fita(){

    }

    Fita::~Fita(){

    }

    string Fita::getFormato(){
        return formato;
    }


    void Fita::setFormato(string formato){

        if(formato == "1"){
            this->formato = "VHS" ;
        }else if(formato == "2"){
            this->formato = "Cassete";
        }else{
            this->formato = "NAO LISTADO";
        }
    }


void Fita::imprimirBiblioteca() {
    Midia::imprimirBiblioteca();

    // Imprimir borda superior
    cout << "+---------------------------+" << endl;

    // Imprimir informações da fita
    cout << "| Formato: " << getFormato();
    cout << string(25 - getFormato().length(), ' ') << "|" << endl;

    // Imprimir borda inferior
    cout << "+---------------------------+" << endl;
}
