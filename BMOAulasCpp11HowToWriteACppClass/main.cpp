//
//  main.cpp
//  BMOAulasCpp11HowToWriteACppClass
//
//  Created by Breno Medeiros on 28/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>

class Log {
public:
    const int logDeLevelErro = 0;
    const int logDeLevelAlerta = 1;
    const int logDeLevelInformacao = 2;
    
private:
    int m_logDeLevel = logDeLevelInformacao;
    
public:
    void SetLevel(int level) {
        m_logDeLevel = level;
    }
    
    void Erro(const char* mensagem) {
        if (m_logDeLevel >= logDeLevelErro) {
            std::cout << "[ERRO]: " << mensagem << std::endl;
        }
    }
    void Alerta(const char* mensagem) {
        if (m_logDeLevel >= logDeLevelAlerta) {
            std::cout << "[ALERTA]: " << mensagem << std::endl;
        }
    }
    void Informacao(const char* mensagem) {
        if (m_logDeLevel >= logDeLevelInformacao) {
            std::cout << "[INFORMAÇÃO]: " << mensagem << std::endl;
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Log log;
    //log.SetLevel(log.logDeLevelAlerta);   //Caso não definamos(descomentemos), o level será '2'.
    log.Alerta("Hello!");
    
    log.Erro("Hello!");
    log.Informacao("Hello!");
    
    return 0;
}
