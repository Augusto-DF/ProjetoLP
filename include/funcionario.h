/**
 * @file	funcionario.h
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Funcionario.
*/

#ifndef	FUNCIONARIO_H
#define	FUNCIONARIO_H

#include <iostream>
#include <string>

using namespace std;

class Funcionario{

	protected:
		int 	id;
		string 	nome;
		string	cpf;
		short	idade;
		string	tipo_sanguineo;
		char	fator_RH;
		string	especialidade;

	public:
		/**
		 * @brief	Construtor padrão não parametrizado.
		*/
		Funcionario();

		/**
		 * @brief	Construtor parametrizado.
		*/
		Funcionario(int _id, string _nome, string _cpf, short _idade, string _tipo_sanguineo, char _fator_RH, string _especialidade);

		/**
		 * @brief	Destrutor.
		*/
		~Funcionario();

		/**
		 * @return 	O identificador inteiro do funcionário (id).
		*/
		int 	getId();

		/**
		 * @return 	O nome do funcionário (nome).
		*/
		string	getNome();

		/**
		 * @return 	O cpf do funcionário (cpf).
		*/
		string	getCpf();

		/**
		 * @return 	A idade do funcionário (idade).
		*/
		short	getIdade();

		/**
		 * @return 	O tipo sanguineo do funcionário (tipo_sanguineo).
		*/
		string	getTipo_sanguineo();

		/**
		 * @return 	O fator RH do funcionário (fator_RH).
		*/
		char	getFator_RH();

		/**
		 * @return 	A especialidade do funcionário (especialidade).
		*/
		string	getEspecialidade();

		void	setId(int _id);
		void	setNome(string _nome);
		void	setCpf(string _cpf);
		void	setIdade(short _idade);
		void	setTipo_sanguineo(string _tipo_sanguineo);
		void	setFator_RH(char _fator_RH);
		void	setEspecialidade(string _especialidade);


		/**
		 * @brief	Sobrecarga do operador de inserção. 
		*/
		friend ostream& operator<< (ostream& of, Funcionario& d0);
};		


#endif