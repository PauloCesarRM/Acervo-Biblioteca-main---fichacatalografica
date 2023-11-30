#include "Livro.h"


	Livro::Livro(string titulo, string autor, int ano, string editoraLivro, string isbn, int paginas, string edicao) : Biblioteca(titulo, autor, ano){

	}		
	
	Livro::Livro(){
	}
	Livro::~Livro(){
	}



    string Livro::getEditoraLivro(){
        return editoraLivro;
    }
    string Livro::getIsbn(){
        return isbn;
    }
    int Livro::getPaginas(){
        return paginas;
    }
    string Livro::getEdicao(){
        return edicao;
    }

    void Livro::setEditoraLivro(string editoraLivro){
        this->editoraLivro = editoraLivro;
    }
    void Livro::setIsbn(string isbn){
        this->isbn = isbn;
    }
    void Livro::setPaginas(int paginas){
        this->paginas = paginas;
    }
    void Livro::setEdicao(string edicao){
        this->edicao = edicao;
    }

void Livro::imprimirBiblioteca() {
    // Chamar a função imprimirBiblioteca() da classe mãe
    Biblioteca::imprimirBiblioteca();

    // Imprimir borda superior
    cout << "+---------------------------------+" << endl;

    // Imprimir informações do livro
    cout << "| Editora: " << getEditoraLivro();
    cout << string(27 - getEditoraLivro().length(), ' ') << "|" << endl;
    cout << "| ISBN: " << getIsbn();
    cout << string(30 - getIsbn().length(), ' ') << "|" << endl;
    cout << "| Páginas: " << getPaginas();
    cout << string(28 - to_string(getPaginas()).length(), ' ') << "|" << endl;
    cout << "| Edição: " << getEdicao();
    cout << string(29 - getEdicao().length(), ' ') << "|" << endl;

    // Imprimir borda inferior
    cout << "+---------------------------------+" << endl;
}