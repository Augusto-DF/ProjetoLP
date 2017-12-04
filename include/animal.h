/**
 * @file	animal.h
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @brief	Declaração da classe Animal.
*/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "veterinario.h"
#include "tratador.h"

using namespace std;

class Animal{
	
	protected:
		int id;
		string classe;
		string nome;
		string nome_cientifico;
		char sexo;
		float tamanho;
		string dieta;
		Veterinario veter;
		Tratador trat;
		string batismo;

	public:
		/**
		 * @brief	Construtor padrão não parametrizado.
		*/
		Animal();

		/**
		 * @brief	Construtor padrão parametrizado.
		*/
		Animal(int _id, string _classe, string _nome, string _nome_cientifico, char _sexo, float _tamanho, string _dieta, Veterinario _veter, Tratador _trat, string _batismo);

		/**
		 * @brief	Destrutor.
		*/
		~Animal();

		/**
		 * @return 	O identificador inteiro do animal (id).
		*/
		int 	getId();
		/**
		 * @return	A classe do animal (classe).
		*/
		string	getClasse();
		/**
		 * @return	O nome do animal (nome).
		*/
		string	getNome();
		/**
		 * @return	O nome cientifico do animal (nome_cientifico).
		*/
		string	getNome_Cientifico();
		/**
		 * @return	O sexo do animal (sexo).
		*/
		char	getSexo();
		/**
		 * @return	O tamanho do animal (tamanho).
		*/
		float	getTamanho();
		/**
		 * @return	A dieta do animal (dieta).
		*/
		string	getDieta();
		/**
		 * @return	O veterinário responsável pelo animal (veter).
		*/
		Veterinario getVeter();
		/**
		 * @return	O tratador do animal (trat).
		*/
		Tratador 	getTrat();
		/**
		 * @return	...? (batismo).
		*/
		string	getBatismo();

		void setID(int _id);
		void setClasse(string _classe);
		void setNome(string _nome);
		void setNome_Cientifico(string _nome_cientifico);
		void setSexo(char _sexo);
		void setTamanho(float _tamanho);
		void setDieta(string _dieta);
		void setVeter(Veterinario _veter);
		void setTrat(Tratador _trat);
		void setBatismo(string _batismo);

		/**
		 * @brief	Sobrecarga do operador de inserção.
		*/
		friend ostream& operator<< (ostream& of, Animal& d0);

};

#endif