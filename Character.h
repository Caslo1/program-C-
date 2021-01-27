#pragma once
#include <iostream>

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

template<typename T>
class Character
{
public:

	Character(T name, T lvl, T classes)
	{
		this->name = name;
		this->lvl = lvl;
		this->classes = classes;
	}

	static T GetCharacter(Character& character, T name, T lvl, T classes)
	{
		character.name = name;
		character.lvl = lvl;
		character.classes = classes;
		counter++;
		return character.name, character.lvl, character.classes;
	}

	void Print()
	{
		std::cout << name << "\t" << lvl << "\t" << classes << std::endl;
		std::cout << counter << std::endl;
	}

	~Character()
	{
		
	}


private:
	T name;
	T lvl;
	T classes;
	static int counter;
};

template <class T>
int Character<T>::counter = 0;

#endif