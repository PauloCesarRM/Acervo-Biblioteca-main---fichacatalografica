#include "Relatorio.h"
    
    Relatorio::Relatorio(string titulo, string autor, int ano, string departamento) : Biblioteca(titulo, autor, ano){
        
    }

    Relatorio::Relatorio(){
        
    }

    Relatorio::~Relatorio(){
        
    }

    string Relatorio::getDepartamento(){
        return departamento;
    }

    void Relatorio::setDepartamento(string departamento){
        this->departamento = departamento;
    }

void Relatorio::imprimirBiblioteca() {
    Biblioteca::imprimirBiblioteca();

    // Imprimir borda superior
    cout << "+-------------------------------+" << endl;

    // Imprimir informações do relatório
    cout << "| Departamento responsável: " << getDepartamento();
    cout << string(20 - getDepartamento().length(), ' ') << "|" << endl;

    // Imprimir borda inferior
    cout << "+-------------------------------+" << endl;
}
